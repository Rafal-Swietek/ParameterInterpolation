#include "CreateMaterial.h"

CreateMaterial::CreateMaterial(){}

CreateMaterial::CreateMaterial(std::ifstream& file, double temperature){
	std::string some_string_never_mind;
	file >> this->Eg; file >> some_string_never_mind;
	file >> this->alfa; file >> some_string_never_mind;
	file >> this->beta; file >> some_string_never_mind;
	file >> this->lattice_const; file >> some_string_never_mind;
	file >> this->_latt_const_T; file >> some_string_never_mind;
	file >> this->delta_so; file >> some_string_never_mind;
	file >> this->m_e; file >> some_string_never_mind;
	file >> this->VBO; file >> some_string_never_mind;
	file >> this->a_c; file >> some_string_never_mind;
	file >> this->a_v; file >> some_string_never_mind;
	file >> this->b; file >> some_string_never_mind;
	file >> this->c_11; file >> some_string_never_mind;
	file >> this->c_12; file >> some_string_never_mind;

	lattice_const += _latt_const_T * (temperature - 300);
	if (temperature > 0)
		Eg = Eg - alfa * temperature * temperature / (temperature + beta);


	file.close();
}

CreateMaterial::~CreateMaterial(){}
