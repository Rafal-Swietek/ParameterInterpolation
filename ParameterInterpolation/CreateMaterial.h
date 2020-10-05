#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include <tgmath.h>
#include <vector>
#include <fstream>
#include <sstream>
#include <math.h>
#include <algorithm>
#include <msclr\marshal_cppstd.h> //for converting System::String^ to string 
#include <windows.h> //change file directory
#include <tchar.h>
#include <iomanip>
#include <complex>
#include <limits>


class CreateMaterial{
public:
	double Ev_lh;
	double Ev_hh;

	double Eg; //energy gap at T=0K
	double alfa; //energy gap temperature coefficient 1
	double beta; //energy gap temperature coefficient 2
	double delta_so; // spin-orbit
	double VBO; //valence band offset

	double lattice_const; //lattice constant in growth direction
	double _latt_const_T; // temperature cheng in lattice constant
	double m_e; // electron effective mass
	double c_11, c_12; // stifness tensor elements
	double a_c, a_v, b; // deformation potentials


	CreateMaterial(); //default constructor
	CreateMaterial(std::ifstream& file, double temperature); //main constructor
	~CreateMaterial(); // destructor

};
