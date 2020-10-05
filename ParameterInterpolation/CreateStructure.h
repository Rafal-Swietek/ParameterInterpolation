#pragma once
#include "CreateMaterial.h"


class CreateStructure {
private:
	CreateMaterial W; CreateMaterial X; CreateMaterial Y; CreateMaterial Z;

	double x; //amount of frist material
	double y; //amount of third material - necessary for 4-material structures

	double temperature; //Temperature

	bool include_strain_decision;

public:
	double Eg; //Energy Gap at 0K
	double delta_so; // spin-orbit
	double VBO; //valence band offset
	double lattice_const; //lattice constant in growth direction

	double m_e; // electron effective mass
	double c_11, c_12; // stifness tensor elements
	double a_c, a_v, b; // deformation potentials


	double Ec; //conduction band
	double Ev_hh; // valence band for heavy holes
	double Ev_lh; // valence band for light holes
	double Ev_sh; // valence band for spin-orbit

	double epsilon_xx, epsilon_zz; // deformation tensor elements

	CreateStructure(); //default constructor
	CreateStructure(double temperature, CreateMaterial& W, CreateMaterial& X, CreateMaterial& Y, CreateMaterial& Z, double x, double y, bool include_strain); //main constructor
	~CreateStructure();
	
	double P_XY(double P_X, double P_Y, double bowing, double precentage);
	double Interpolate(double P_W, double P_X, double P_Y, double P_Z, double bowing_WX, double bowing_YZ, double bowing_WY, double bowing_XZ);
	void InitializeComponents(std::vector<std::vector<double>> bowing, double substrate_lattice_const);
};

