#include "CreateStructure.h"




CreateStructure::CreateStructure() {}

CreateStructure::CreateStructure(double temperature, CreateMaterial& W, CreateMaterial& X, CreateMaterial& Y, CreateMaterial& Z, double x, double y, bool include_strain) {
	this->temperature = temperature;
	this->x = x; this->y = y;

	this->X = X; this->Y = Y; this->Z = Z; this->W = W;
	this->include_strain_decision = include_strain;
}

CreateStructure::~CreateStructure(){
	W.~CreateMaterial();
	X.~CreateMaterial(); 
	Y.~CreateMaterial();
	Z.~CreateMaterial();
}

double CreateStructure::P_XY(double P_X, double P_Y, double bowing, double precentage) {
	return precentage * P_X + (1 - precentage) * P_Y - precentage * (1 - precentage) * bowing;
}

double CreateStructure::Interpolate(double PW, double PX, double PY, double PZ, double bowing_WX, double bowing_YZ, double bowing_WY, double bowing_XZ) {
	double P_WXYZ = DBL_MAX;
	if (x == 0.0) P_WXYZ = P_XY(PX, PZ, bowing_XZ, y);
	else if (x == 1.0) P_WXYZ = P_XY(PW, PY, bowing_WY, y);
	else if (y == 0.0) P_WXYZ = P_XY(PY, PZ, bowing_YZ, x);
	else if (y == 1.0) P_WXYZ = P_XY(PW, PX, bowing_WX, x);
	else {
		P_WXYZ = x * (1 - x) * (y * P_XY(PW, PX, bowing_WX, x) + (1 - y) * P_XY(PY, PZ, bowing_YZ, x));
		P_WXYZ += y * (1 - y) * (x * P_XY(PW, PY, bowing_WY, y) + (1 - x) * P_XY(PX, PZ, bowing_XZ, y));
		P_WXYZ = P_WXYZ / (x * (1 - x) + y * (1 - y));
	}
	return P_WXYZ;
}

//	 W = AC,	X = BC,		Y = AD,		Z = BD
/* 
vector<vector<double>> bowing  -->  
	frist index - structure		WX, YZ, WY, XZ
	second index - coeff	Eg, delSo, m_e, VBO, a_c   
*/
// fo now bowing is 4x5 matrix
void CreateStructure::InitializeComponents(std::vector<std::vector<double>> bowing, double substrate_lattice_const){
	
	//No bowing parameters - for more general input make all with bowing
		this->lattice_const = Interpolate(W.lattice_const, X.lattice_const, Y.lattice_const, Z.lattice_const, 0, 0, 0, 0);
		this->c_11 = Interpolate(W.c_11, X.c_11, Y.c_11, Z.c_11, 0, 0, 0, 0);
		this->c_12 = Interpolate(W.c_12, X.c_12, Y.c_12, Z.c_12, 0, 0, 0, 0);
		this->a_v = Interpolate(W.a_v, X.a_v, Y.a_v, Z.a_v, 0, 0, 0, 0);
		this->b = Interpolate(W.b, X.b, Y.b, Z.b, 0, 0, 0, 0);

	//With bowing parameters
		this->Eg = Interpolate(W.Eg, X.Eg, Y.Eg, Z.Eg, bowing[0][0], bowing[1][0], bowing[2][0], bowing[3][0]);
		this->delta_so = Interpolate(W.delta_so, X.delta_so, Y.delta_so, Z.delta_so, bowing[0][1], bowing[1][1], bowing[2][1], bowing[3][1]);
		this->m_e = Interpolate(W.m_e, X.m_e, Y.m_e, Z.m_e, bowing[0][2], bowing[1][2], bowing[2][2], bowing[3][2]);
		this->VBO = Interpolate(W.VBO, X.VBO, Y.VBO, Z.VBO, bowing[0][3], bowing[1][3], bowing[2][3], bowing[3][3]);
		this->a_c = Interpolate(W.a_c, X.a_c, Y.a_c, Z.a_c, bowing[0][4], bowing[1][4], bowing[2][4], bowing[3][4]);

		epsilon_xx = (substrate_lattice_const - lattice_const) / lattice_const;
		epsilon_zz = -2.0 * c_12 / c_11 * epsilon_xx;
		
		double delta_Ec_hydro = a_c * (epsilon_zz + 2.0 * epsilon_xx);
		double delta_Ev_hydro = a_v * (epsilon_zz + 2.0 * epsilon_xx);
		double delta_Ev_biax = b * (epsilon_zz - epsilon_xx);
		double delta_v_biax_plus = 0.5 * (delta_Ev_biax - delta_so + sqrt((9 * delta_Ev_biax + 2 * delta_so) * delta_Ev_biax + delta_so * delta_so));
		double delta_v_biax_minus = 0.5 * (delta_Ev_biax - delta_so - sqrt((9 * delta_Ev_biax + 2 * delta_so) * delta_Ev_biax + delta_so * delta_so));

		this->Ec = VBO + Eg;
		this->Ev_hh = VBO;
		this->Ev_lh = VBO;
		this->Ev_sh = VBO;

		if (include_strain_decision) {
			this->Ec += delta_Ec_hydro;
			this->Ev_hh += delta_Ev_hydro - delta_Ev_biax;
			this->Ev_lh += delta_Ev_hydro + delta_v_biax_plus;
			this->Ev_sh += delta_Ev_hydro + delta_v_biax_minus;
		}
}