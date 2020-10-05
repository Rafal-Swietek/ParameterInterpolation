#pragma once
#include "CreateStructure.h"

namespace ParameterInterpolation {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();

			this->label23->AutoSize = true;
			this->label23->Text = L"Hi common User,\nThis program is an efficient engine to generate energy bands\
 for\n\tGaAs / GaₘIn₁₋ₘPₙAs₁₋ₙ / AlₘGa₁₋ₘAsₙSb₁₋ₙ / GaₘIn₁₋ₘPₙAs₁₋ₙ / GaAs\n\
structure. I hope you will enjoy this first release.\nIf you step upon any bug please\
 inform me via e-mail: '236668@student.pwr.edu.pl'!\n\nPlease put a like beneath to help\
				\ develop my company: Q-Rav Enterprise.\nIf you have interest in the company please visit the website:\n\
 www.Q-Rav.ch/Products/Apps/Bazinga/~joke .\n\nHave Fun!!\n\n\
PS. DO NOT change the preferred filename initials: 'E(x)_', 'E(y)_',' m_e(x)_', 'm_e(y)_'\nand 'Energy_' using SaveFileDialog (you can only change characters after the initials),\n\
because this program only loads such input files";
			std::ifstream likefile("Like.txt");
			std::string str;
			likefile >> str;
			this->label24->Text = gcnew String(str.c_str());
			this->label25->Text = L"0";
			likefile.close();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TabControl^ tabControl1;
	protected:
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::TabPage^ tabPage3;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::NumericUpDown^ first_layer_x;
	private: System::Windows::Forms::NumericUpDown^ temperature_num;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ Energy_chart;
	private: System::Windows::Forms::Button^ plot_button;






	private: System::Windows::Forms::NumericUpDown^ third_layer_y;

	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::NumericUpDown^ third_layer_x;

	private: System::Windows::Forms::NumericUpDown^ second_layer_y;

	private: System::Windows::Forms::NumericUpDown^ second_layer_x;

	private: System::Windows::Forms::NumericUpDown^ first_layer_y;



	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::NumericUpDown^ GaAs_width_top;
	private: System::Windows::Forms::NumericUpDown^ third_layer_width;
	private: System::Windows::Forms::NumericUpDown^ second_layer_width;
	private: System::Windows::Forms::NumericUpDown^ first_layer_width;
	private: System::Windows::Forms::NumericUpDown^ GaAs_width_bottom;
	private: System::Windows::Forms::CheckBox^ checkBox_SO;
	private: System::Windows::Forms::CheckBox^ checkBox_strain;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ save_button;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ mass_y_chart;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ mass_x_chart;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ energy_y_chart;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ Energy_x_chart;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::ComboBox^ comboBox2;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::NumericUpDown^ numeric_const_m;
	private: System::Windows::Forms::NumericUpDown^ numeric_const_n;




	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::NumericUpDown^ numeric_temp_interpolation;
	private: System::Windows::Forms::CheckBox^ include_strain_interpolation;





	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Label^ label21;
	private: System::Windows::Forms::Label^ label22;
	private: System::Windows::Forms::NumericUpDown^ num_m_const_mass;

	private: System::Windows::Forms::NumericUpDown^ num_n_const_mass;
private: System::Windows::Forms::PictureBox^ pictureBox1;
private: System::Windows::Forms::Label^ label23;
private: System::Windows::Forms::PictureBox^ pictureBox2;
private: System::Windows::Forms::Label^ label20;
private: System::Windows::Forms::PictureBox^ pictureBox4;
private: System::Windows::Forms::PictureBox^ pictureBox3;
private: System::Windows::Forms::Label^ label25;
private: System::Windows::Forms::Label^ label24;
private: System::Windows::Forms::PictureBox^ pictureBox5;
private: System::Windows::Forms::Button^ load_mass_x_button;
private: System::Windows::Forms::Button^ save_mass_x_button;
private: System::Windows::Forms::Button^ load_mass_y_button;
private: System::Windows::Forms::Button^ save_mass_y_button;
private: System::Windows::Forms::Button^ load_E_y_button;
private: System::Windows::Forms::Button^ save_E_y_button;
private: System::Windows::Forms::Button^ Load_E_x_button;
private: System::Windows::Forms::Button^ save_E_x_button;
private: System::Windows::Forms::ComboBox^ comboBox4;
private: System::Windows::Forms::ComboBox^ comboBox3;
private: System::Windows::Forms::CheckBox^ checkBox1;
private: System::Windows::Forms::Label^ label28;
private: System::Windows::Forms::NumericUpDown^ numericUpDown1;
private: System::Windows::Forms::Label^ label27;
private: System::Windows::Forms::Label^ label26;




	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea6 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend6 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series6 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Title^ title6 = (gcnew System::Windows::Forms::DataVisualization::Charting::Title());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea7 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend7 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series7 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Title^ title7 = (gcnew System::Windows::Forms::DataVisualization::Charting::Title());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea8 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend8 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series8 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Title^ title8 = (gcnew System::Windows::Forms::DataVisualization::Charting::Title());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea9 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend9 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series9 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Title^ title9 = (gcnew System::Windows::Forms::DataVisualization::Charting::Title());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea10 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend10 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series10 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Title^ title10 = (gcnew System::Windows::Forms::DataVisualization::Charting::Title());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->comboBox4 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox3 = (gcnew System::Windows::Forms::ComboBox());
			this->load_mass_x_button = (gcnew System::Windows::Forms::Button());
			this->save_mass_x_button = (gcnew System::Windows::Forms::Button());
			this->load_mass_y_button = (gcnew System::Windows::Forms::Button());
			this->save_mass_y_button = (gcnew System::Windows::Forms::Button());
			this->load_E_y_button = (gcnew System::Windows::Forms::Button());
			this->save_E_y_button = (gcnew System::Windows::Forms::Button());
			this->Load_E_x_button = (gcnew System::Windows::Forms::Button());
			this->save_E_x_button = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->num_m_const_mass = (gcnew System::Windows::Forms::NumericUpDown());
			this->num_n_const_mass = (gcnew System::Windows::Forms::NumericUpDown());
			this->include_strain_interpolation = (gcnew System::Windows::Forms::CheckBox());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->numeric_temp_interpolation = (gcnew System::Windows::Forms::NumericUpDown());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->numeric_const_m = (gcnew System::Windows::Forms::NumericUpDown());
			this->numeric_const_n = (gcnew System::Windows::Forms::NumericUpDown());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->mass_y_chart = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->mass_x_chart = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->energy_y_chart = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->Energy_x_chart = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->save_button = (gcnew System::Windows::Forms::Button());
			this->checkBox_strain = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox_SO = (gcnew System::Windows::Forms::CheckBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->GaAs_width_top = (gcnew System::Windows::Forms::NumericUpDown());
			this->third_layer_width = (gcnew System::Windows::Forms::NumericUpDown());
			this->second_layer_width = (gcnew System::Windows::Forms::NumericUpDown());
			this->first_layer_width = (gcnew System::Windows::Forms::NumericUpDown());
			this->GaAs_width_bottom = (gcnew System::Windows::Forms::NumericUpDown());
			this->third_layer_y = (gcnew System::Windows::Forms::NumericUpDown());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->third_layer_x = (gcnew System::Windows::Forms::NumericUpDown());
			this->second_layer_y = (gcnew System::Windows::Forms::NumericUpDown());
			this->second_layer_x = (gcnew System::Windows::Forms::NumericUpDown());
			this->first_layer_y = (gcnew System::Windows::Forms::NumericUpDown());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->first_layer_x = (gcnew System::Windows::Forms::NumericUpDown());
			this->temperature_num = (gcnew System::Windows::Forms::NumericUpDown());
			this->Energy_chart = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->plot_button = (gcnew System::Windows::Forms::Button());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->tabPage2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->num_m_const_mass))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->num_n_const_mass))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numeric_temp_interpolation))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numeric_const_m))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numeric_const_n))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->mass_y_chart))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->mass_x_chart))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->energy_y_chart))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Energy_x_chart))->BeginInit();
			this->tabPage3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->GaAs_width_top))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->third_layer_width))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->second_layer_width))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->first_layer_width))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->GaAs_width_bottom))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->third_layer_y))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->third_layer_x))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->second_layer_y))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->second_layer_x))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->first_layer_y))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->first_layer_x))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->temperature_num))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Energy_chart))->BeginInit();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->tabControl1->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->tabControl1->ItemSize = System::Drawing::Size(75, 45);
			this->tabControl1->Location = System::Drawing::Point(3, 1);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(1297, 663);
			this->tabControl1->TabIndex = 0;
			// 
			// tabPage1
			// 
			this->tabPage1->BackColor = System::Drawing::Color::Black;
			this->tabPage1->Controls->Add(this->pictureBox5);
			this->tabPage1->Controls->Add(this->label25);
			this->tabPage1->Controls->Add(this->label24);
			this->tabPage1->Controls->Add(this->pictureBox4);
			this->tabPage1->Controls->Add(this->pictureBox3);
			this->tabPage1->Controls->Add(this->label23);
			this->tabPage1->Controls->Add(this->pictureBox2);
			this->tabPage1->Controls->Add(this->label20);
			this->tabPage1->Location = System::Drawing::Point(4, 49);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(1289, 610);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"ABOUT";
			// 
			// pictureBox5
			// 
			this->pictureBox5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pictureBox5->Cursor = System::Windows::Forms::Cursors::SizeAll;
			this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.Image")));
			this->pictureBox5->Location = System::Drawing::Point(945, 25);
			this->pictureBox5->Margin = System::Windows::Forms::Padding(5);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(294, 180);
			this->pictureBox5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox5->TabIndex = 17;
			this->pictureBox5->TabStop = false;
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label25->Location = System::Drawing::Point(118, 559);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(54, 17);
			this->label25->TabIndex = 6;
			this->label25->Text = L"label25";
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label24->Location = System::Drawing::Point(27, 559);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(54, 17);
			this->label24->TabIndex = 5;
			this->label24->Text = L"label24";
			// 
			// pictureBox4
			// 
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(121, 513);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(96, 43);
			this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox4->TabIndex = 4;
			this->pictureBox4->TabStop = false;
			this->pictureBox4->Click += gcnew System::EventHandler(this, &MyForm::pictureBox4_Click);
			// 
			// pictureBox3
			// 
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(27, 513);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(88, 43);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox3->TabIndex = 3;
			this->pictureBox3->TabStop = false;
			this->pictureBox3->Click += gcnew System::EventHandler(this, &MyForm::pictureBox3_Click);
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->BackColor = System::Drawing::Color::Black;
			this->label23->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label23->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label23->Location = System::Drawing::Point(23, 25);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(914, 180);
			this->label23->TabIndex = 2;
			this->label23->Text = resources->GetString(L"label23.Text");
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(667, 267);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(619, 289);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 1;
			this->pictureBox2->TabStop = false;
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->label20->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label20->Location = System::Drawing::Point(1054, 559);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(229, 48);
			this->label20->TabIndex = 0;
			this->label20->Text = L"@Copyright Rafał Świętek\nIdentity Index: 236668";
			// 
			// tabPage2
			// 
			this->tabPage2->BackColor = System::Drawing::Color::Black;
			this->tabPage2->Controls->Add(this->checkBox1);
			this->tabPage2->Controls->Add(this->label28);
			this->tabPage2->Controls->Add(this->numericUpDown1);
			this->tabPage2->Controls->Add(this->label27);
			this->tabPage2->Controls->Add(this->label26);
			this->tabPage2->Controls->Add(this->comboBox4);
			this->tabPage2->Controls->Add(this->comboBox3);
			this->tabPage2->Controls->Add(this->load_mass_x_button);
			this->tabPage2->Controls->Add(this->save_mass_x_button);
			this->tabPage2->Controls->Add(this->load_mass_y_button);
			this->tabPage2->Controls->Add(this->save_mass_y_button);
			this->tabPage2->Controls->Add(this->load_E_y_button);
			this->tabPage2->Controls->Add(this->save_E_y_button);
			this->tabPage2->Controls->Add(this->Load_E_x_button);
			this->tabPage2->Controls->Add(this->save_E_x_button);
			this->tabPage2->Controls->Add(this->pictureBox1);
			this->tabPage2->Controls->Add(this->button4);
			this->tabPage2->Controls->Add(this->button5);
			this->tabPage2->Controls->Add(this->label21);
			this->tabPage2->Controls->Add(this->label22);
			this->tabPage2->Controls->Add(this->num_m_const_mass);
			this->tabPage2->Controls->Add(this->num_n_const_mass);
			this->tabPage2->Controls->Add(this->include_strain_interpolation);
			this->tabPage2->Controls->Add(this->label19);
			this->tabPage2->Controls->Add(this->numeric_temp_interpolation);
			this->tabPage2->Controls->Add(this->button2);
			this->tabPage2->Controls->Add(this->button1);
			this->tabPage2->Controls->Add(this->label18);
			this->tabPage2->Controls->Add(this->label17);
			this->tabPage2->Controls->Add(this->numeric_const_m);
			this->tabPage2->Controls->Add(this->numeric_const_n);
			this->tabPage2->Controls->Add(this->label16);
			this->tabPage2->Controls->Add(this->label15);
			this->tabPage2->Controls->Add(this->comboBox2);
			this->tabPage2->Controls->Add(this->comboBox1);
			this->tabPage2->Controls->Add(this->mass_y_chart);
			this->tabPage2->Controls->Add(this->mass_x_chart);
			this->tabPage2->Controls->Add(this->energy_y_chart);
			this->tabPage2->Controls->Add(this->Energy_x_chart);
			this->tabPage2->Location = System::Drawing::Point(4, 49);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(1289, 610);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"INTERPOLATION";
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->checkBox1->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->checkBox1->Location = System::Drawing::Point(653, 141);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->checkBox1->Size = System::Drawing::Size(132, 24);
			this->checkBox1->TabIndex = 52;
			this->checkBox1->Text = L"Include strain\?";
			this->checkBox1->UseVisualStyleBackColor = true;
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->BackColor = System::Drawing::Color::Black;
			this->label28->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->label28->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label28->Location = System::Drawing::Point(726, 172);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(90, 17);
			this->label28->TabIndex = 51;
			this->label28->Text = L"Temperature";
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->Location = System::Drawing::Point(653, 172);
			this->numericUpDown1->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10000, 0, 0, 0 });
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(67, 23);
			this->numericUpDown1->TabIndex = 50;
			this->numericUpDown1->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 300, 0, 0, 0 });
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label27->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label27->Location = System::Drawing::Point(649, 401);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(174, 20);
			this->label27->TabIndex = 49;
			this->label27->Text = L"Electron effective mass";
			this->label27->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label26->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label26->Location = System::Drawing::Point(649, 44);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(139, 20);
			this->label26->TabIndex = 48;
			this->label26->Text = L"Energy band edge";
			this->label26->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// comboBox4
			// 
			this->comboBox4->DisplayMember = L"(none)";
			this->comboBox4->FormattingEnabled = true;
			this->comboBox4->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"GaInPAs/GaAs", L"AlGaAsSb/GaAs" });
			this->comboBox4->Location = System::Drawing::Point(653, 363);
			this->comboBox4->Name = L"comboBox4";
			this->comboBox4->Size = System::Drawing::Size(163, 24);
			this->comboBox4->TabIndex = 47;
			this->comboBox4->Text = L"Choose structure";
			this->comboBox4->ValueMember = L"GaAs";
			this->comboBox4->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox4_SelectedIndexChanged);
			// 
			// comboBox3
			// 
			this->comboBox3->DisplayMember = L"(none)";
			this->comboBox3->FormattingEnabled = true;
			this->comboBox3->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"GaInPAs/GaAs", L"AlGaAsSb/GaAs" });
			this->comboBox3->Location = System::Drawing::Point(653, 6);
			this->comboBox3->Name = L"comboBox3";
			this->comboBox3->Size = System::Drawing::Size(163, 24);
			this->comboBox3->TabIndex = 46;
			this->comboBox3->Text = L"Choose structure";
			this->comboBox3->ValueMember = L"GaAs";
			this->comboBox3->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox3_SelectedIndexChanged);
			// 
			// load_mass_x_button
			// 
			this->load_mass_x_button->Location = System::Drawing::Point(90, 568);
			this->load_mass_x_button->Name = L"load_mass_x_button";
			this->load_mass_x_button->Size = System::Drawing::Size(76, 32);
			this->load_mass_x_button->TabIndex = 45;
			this->load_mass_x_button->Text = L"LOAD";
			this->load_mass_x_button->UseVisualStyleBackColor = true;
			this->load_mass_x_button->Click += gcnew System::EventHandler(this, &MyForm::load_mass_x_button_Click);
			// 
			// save_mass_x_button
			// 
			this->save_mass_x_button->Location = System::Drawing::Point(7, 568);
			this->save_mass_x_button->Name = L"save_mass_x_button";
			this->save_mass_x_button->Size = System::Drawing::Size(77, 32);
			this->save_mass_x_button->TabIndex = 44;
			this->save_mass_x_button->Text = L"SAVE";
			this->save_mass_x_button->UseMnemonic = false;
			this->save_mass_x_button->UseVisualStyleBackColor = true;
			this->save_mass_x_button->Click += gcnew System::EventHandler(this, &MyForm::save_mass_x_button_Click);
			// 
			// load_mass_y_button
			// 
			this->load_mass_y_button->Location = System::Drawing::Point(736, 568);
			this->load_mass_y_button->Name = L"load_mass_y_button";
			this->load_mass_y_button->Size = System::Drawing::Size(83, 32);
			this->load_mass_y_button->TabIndex = 43;
			this->load_mass_y_button->Text = L"LOAD";
			this->load_mass_y_button->UseVisualStyleBackColor = true;
			this->load_mass_y_button->Click += gcnew System::EventHandler(this, &MyForm::load_mass_y_button_Click);
			// 
			// save_mass_y_button
			// 
			this->save_mass_y_button->Location = System::Drawing::Point(653, 568);
			this->save_mass_y_button->Name = L"save_mass_y_button";
			this->save_mass_y_button->Size = System::Drawing::Size(77, 32);
			this->save_mass_y_button->TabIndex = 42;
			this->save_mass_y_button->Text = L"SAVE";
			this->save_mass_y_button->UseMnemonic = false;
			this->save_mass_y_button->UseVisualStyleBackColor = true;
			this->save_mass_y_button->Click += gcnew System::EventHandler(this, &MyForm::save_mass_y_button_Click);
			// 
			// load_E_y_button
			// 
			this->load_E_y_button->Location = System::Drawing::Point(736, 280);
			this->load_E_y_button->Name = L"load_E_y_button";
			this->load_E_y_button->Size = System::Drawing::Size(83, 32);
			this->load_E_y_button->TabIndex = 41;
			this->load_E_y_button->Text = L"LOAD";
			this->load_E_y_button->UseVisualStyleBackColor = true;
			this->load_E_y_button->Click += gcnew System::EventHandler(this, &MyForm::load_E_y_button_Click);
			// 
			// save_E_y_button
			// 
			this->save_E_y_button->Location = System::Drawing::Point(653, 280);
			this->save_E_y_button->Name = L"save_E_y_button";
			this->save_E_y_button->Size = System::Drawing::Size(77, 32);
			this->save_E_y_button->TabIndex = 40;
			this->save_E_y_button->Text = L"SAVE";
			this->save_E_y_button->UseMnemonic = false;
			this->save_E_y_button->UseVisualStyleBackColor = true;
			this->save_E_y_button->Click += gcnew System::EventHandler(this, &MyForm::save_E_y_button_Click);
			// 
			// Load_E_x_button
			// 
			this->Load_E_x_button->Location = System::Drawing::Point(94, 281);
			this->Load_E_x_button->Name = L"Load_E_x_button";
			this->Load_E_x_button->Size = System::Drawing::Size(80, 32);
			this->Load_E_x_button->TabIndex = 39;
			this->Load_E_x_button->Text = L"LOAD";
			this->Load_E_x_button->UseVisualStyleBackColor = true;
			this->Load_E_x_button->Click += gcnew System::EventHandler(this, &MyForm::Load_E_x_button_Click);
			// 
			// save_E_x_button
			// 
			this->save_E_x_button->Location = System::Drawing::Point(11, 281);
			this->save_E_x_button->Name = L"save_E_x_button";
			this->save_E_x_button->Size = System::Drawing::Size(77, 32);
			this->save_E_x_button->TabIndex = 38;
			this->save_E_x_button->Text = L"SAVE";
			this->save_E_x_button->UseMnemonic = false;
			this->save_E_x_button->UseVisualStyleBackColor = true;
			this->save_E_x_button->Click += gcnew System::EventHandler(this, &MyForm::save_E_x_button_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::DimGray;
			this->pictureBox1->Location = System::Drawing::Point(-4, 332);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(1302, 11);
			this->pictureBox1->TabIndex = 37;
			this->pictureBox1->TabStop = false;
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(653, 527);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(166, 35);
			this->button4->TabIndex = 36;
			this->button4->Text = L"Plot";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(7, 527);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(159, 35);
			this->button5->TabIndex = 35;
			this->button5->Text = L"PLOT";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label21->Location = System::Drawing::Point(83, 498);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(16, 17);
			this->label21->TabIndex = 34;
			this->label21->Text = L"n";
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label22->Location = System::Drawing::Point(726, 498);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(19, 17);
			this->label22->TabIndex = 33;
			this->label22->Text = L"m";
			// 
			// num_m_const_mass
			// 
			this->num_m_const_mass->DecimalPlaces = 2;
			this->num_m_const_mass->Increment = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 131072 });
			this->num_m_const_mass->Location = System::Drawing::Point(653, 498);
			this->num_m_const_mass->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->num_m_const_mass->Name = L"num_m_const_mass";
			this->num_m_const_mass->Size = System::Drawing::Size(67, 23);
			this->num_m_const_mass->TabIndex = 32;
			this->num_m_const_mass->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 5, 0, 0, 65536 });
			// 
			// num_n_const_mass
			// 
			this->num_n_const_mass->DecimalPlaces = 2;
			this->num_n_const_mass->Increment = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 131072 });
			this->num_n_const_mass->Location = System::Drawing::Point(10, 498);
			this->num_n_const_mass->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->num_n_const_mass->Name = L"num_n_const_mass";
			this->num_n_const_mass->Size = System::Drawing::Size(67, 23);
			this->num_n_const_mass->TabIndex = 31;
			this->num_n_const_mass->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 5, 0, 0, 65536 });
			// 
			// include_strain_interpolation
			// 
			this->include_strain_interpolation->AutoSize = true;
			this->include_strain_interpolation->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->include_strain_interpolation->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->include_strain_interpolation->Location = System::Drawing::Point(11, 141);
			this->include_strain_interpolation->Name = L"include_strain_interpolation";
			this->include_strain_interpolation->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->include_strain_interpolation->Size = System::Drawing::Size(132, 24);
			this->include_strain_interpolation->TabIndex = 30;
			this->include_strain_interpolation->Text = L"Include strain\?";
			this->include_strain_interpolation->UseVisualStyleBackColor = true;
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->BackColor = System::Drawing::Color::Black;
			this->label19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->label19->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label19->Location = System::Drawing::Point(84, 172);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(90, 17);
			this->label19->TabIndex = 14;
			this->label19->Text = L"Temperature";
			// 
			// numeric_temp_interpolation
			// 
			this->numeric_temp_interpolation->Location = System::Drawing::Point(11, 172);
			this->numeric_temp_interpolation->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10000, 0, 0, 0 });
			this->numeric_temp_interpolation->Name = L"numeric_temp_interpolation";
			this->numeric_temp_interpolation->Size = System::Drawing::Size(67, 23);
			this->numeric_temp_interpolation->TabIndex = 13;
			this->numeric_temp_interpolation->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 300, 0, 0, 0 });
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(653, 238);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(166, 36);
			this->button2->TabIndex = 12;
			this->button2->Text = L"Plot";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(10, 238);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(164, 36);
			this->button1->TabIndex = 11;
			this->button1->Text = L"PLOT";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click_1);
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label18->Location = System::Drawing::Point(84, 211);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(16, 17);
			this->label18->TabIndex = 10;
			this->label18->Text = L"n";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label17->Location = System::Drawing::Point(726, 211);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(19, 17);
			this->label17->TabIndex = 9;
			this->label17->Text = L"m";
			// 
			// numeric_const_m
			// 
			this->numeric_const_m->DecimalPlaces = 2;
			this->numeric_const_m->Increment = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 131072 });
			this->numeric_const_m->Location = System::Drawing::Point(653, 209);
			this->numeric_const_m->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numeric_const_m->Name = L"numeric_const_m";
			this->numeric_const_m->Size = System::Drawing::Size(67, 23);
			this->numeric_const_m->TabIndex = 8;
			this->numeric_const_m->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 5, 0, 0, 65536 });
			// 
			// numeric_const_n
			// 
			this->numeric_const_n->DecimalPlaces = 2;
			this->numeric_const_n->Increment = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 131072 });
			this->numeric_const_n->Location = System::Drawing::Point(11, 211);
			this->numeric_const_n->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numeric_const_n->Name = L"numeric_const_n";
			this->numeric_const_n->Size = System::Drawing::Size(67, 23);
			this->numeric_const_n->TabIndex = 7;
			this->numeric_const_n->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 5, 0, 0, 65536 });
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label16->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label16->Location = System::Drawing::Point(3, 401);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(174, 20);
			this->label16->TabIndex = 6;
			this->label16->Text = L"Electron effective mass";
			this->label16->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label15->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label15->Location = System::Drawing::Point(3, 44);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(139, 20);
			this->label15->TabIndex = 5;
			this->label15->Text = L"Energy band edge";
			this->label15->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// comboBox2
			// 
			this->comboBox2->DisplayMember = L"(none)";
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"GaInPAs/GaAs", L"AlGaAsSb/GaAs" });
			this->comboBox2->Location = System::Drawing::Point(5, 363);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(164, 24);
			this->comboBox2->TabIndex = 4;
			this->comboBox2->Text = L"Choose Structure";
			this->comboBox2->ValueMember = L"GaAs";
			this->comboBox2->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox2_SelectedIndexChanged);
			// 
			// comboBox1
			// 
			this->comboBox1->DisplayMember = L"(none)";
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"GaInPAs/GaAs", L"AlGaAsSb/GaAs" });
			this->comboBox1->Location = System::Drawing::Point(3, 6);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(163, 24);
			this->comboBox1->TabIndex = 0;
			this->comboBox1->Text = L"Choose structure";
			this->comboBox1->ValueMember = L"GaAs";
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox1_SelectedIndexChanged);
			// 
			// mass_y_chart
			// 
			chartArea6->AxisX->Title = L"y";
			chartArea6->AxisX->TitleFont = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			chartArea6->AxisY->Title = L"m_e(y)";
			chartArea6->AxisY->TitleFont = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			chartArea6->Name = L"ChartArea1";
			this->mass_y_chart->ChartAreas->Add(chartArea6);
			legend6->Name = L"Legend1";
			this->mass_y_chart->Legends->Add(legend6);
			this->mass_y_chart->Location = System::Drawing::Point(828, 363);
			this->mass_y_chart->Name = L"mass_y_chart";
			series6->ChartArea = L"ChartArea1";
			series6->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series6->Legend = L"Legend1";
			series6->Name = L"Series1";
			this->mass_y_chart->Series->Add(series6);
			this->mass_y_chart->Size = System::Drawing::Size(436, 233);
			this->mass_y_chart->TabIndex = 3;
			this->mass_y_chart->Text = L"chart1";
			title6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			title6->Name = L"Title1";
			title6->Text = L"Stop eating or you\'ll produce a new quasiparticle";
			this->mass_y_chart->Titles->Add(title6);
			// 
			// mass_x_chart
			// 
			chartArea7->AxisX->Title = L"x";
			chartArea7->AxisX->TitleFont = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			chartArea7->AxisY->Title = L"m_e(x)";
			chartArea7->AxisY->TitleFont = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			chartArea7->Name = L"ChartArea1";
			this->mass_x_chart->ChartAreas->Add(chartArea7);
			legend7->Name = L"Legend1";
			this->mass_x_chart->Legends->Add(legend7);
			this->mass_x_chart->Location = System::Drawing::Point(180, 363);
			this->mass_x_chart->Name = L"mass_x_chart";
			series7->ChartArea = L"ChartArea1";
			series7->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series7->Legend = L"Legend1";
			series7->Name = L"Series1";
			this->mass_x_chart->Series->Add(series7);
			this->mass_x_chart->Size = System::Drawing::Size(436, 233);
			this->mass_x_chart->TabIndex = 2;
			this->mass_x_chart->Text = L"chart1";
			title7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			title7->Name = L"Title1";
			title7->Text = L"You\'ve gotten fat, bro";
			this->mass_x_chart->Titles->Add(title7);
			// 
			// energy_y_chart
			// 
			chartArea8->AxisX->Title = L"n";
			chartArea8->AxisX->TitleFont = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			chartArea8->AxisY->Title = L"E(n)";
			chartArea8->AxisY->TitleFont = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			chartArea8->Name = L"ChartArea1";
			this->energy_y_chart->ChartAreas->Add(chartArea8);
			legend8->Name = L"Legend1";
			this->energy_y_chart->Legends->Add(legend8);
			this->energy_y_chart->Location = System::Drawing::Point(828, 6);
			this->energy_y_chart->Name = L"energy_y_chart";
			series8->ChartArea = L"ChartArea1";
			series8->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series8->Legend = L"Legend1";
			series8->Name = L"Series1";
			this->energy_y_chart->Series->Add(series8);
			this->energy_y_chart->Size = System::Drawing::Size(436, 307);
			this->energy_y_chart->TabIndex = 1;
			this->energy_y_chart->Text = L"chart1";
			title8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			title8->Name = L"Title1";
			title8->Text = L"Damn you GaP and your shitty energy gap";
			this->energy_y_chart->Titles->Add(title8);
			// 
			// Energy_x_chart
			// 
			chartArea9->AxisX->Title = L"m";
			chartArea9->AxisX->TitleFont = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			chartArea9->AxisY->Title = L"E(m)";
			chartArea9->AxisY->TitleFont = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			chartArea9->Name = L"ChartArea1";
			this->Energy_x_chart->ChartAreas->Add(chartArea9);
			legend9->Name = L"Legend1";
			this->Energy_x_chart->Legends->Add(legend9);
			this->Energy_x_chart->Location = System::Drawing::Point(180, 6);
			this->Energy_x_chart->Name = L"Energy_x_chart";
			series9->ChartArea = L"ChartArea1";
			series9->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series9->Legend = L"Legend1";
			series9->Name = L"Series1";
			this->Energy_x_chart->Series->Add(series9);
			this->Energy_x_chart->Size = System::Drawing::Size(436, 307);
			this->Energy_x_chart->TabIndex = 0;
			this->Energy_x_chart->Text = L"chart1";
			title9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			title9->Name = L"Title1";
			title9->Text = L"Don\'t be Judgemental, eh, Judge\?";
			this->Energy_x_chart->Titles->Add(title9);
			// 
			// tabPage3
			// 
			this->tabPage3->BackColor = System::Drawing::Color::Black;
			this->tabPage3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->tabPage3->Controls->Add(this->button3);
			this->tabPage3->Controls->Add(this->save_button);
			this->tabPage3->Controls->Add(this->checkBox_strain);
			this->tabPage3->Controls->Add(this->checkBox_SO);
			this->tabPage3->Controls->Add(this->label14);
			this->tabPage3->Controls->Add(this->label13);
			this->tabPage3->Controls->Add(this->label12);
			this->tabPage3->Controls->Add(this->label11);
			this->tabPage3->Controls->Add(this->label10);
			this->tabPage3->Controls->Add(this->label9);
			this->tabPage3->Controls->Add(this->label8);
			this->tabPage3->Controls->Add(this->GaAs_width_top);
			this->tabPage3->Controls->Add(this->third_layer_width);
			this->tabPage3->Controls->Add(this->second_layer_width);
			this->tabPage3->Controls->Add(this->first_layer_width);
			this->tabPage3->Controls->Add(this->GaAs_width_bottom);
			this->tabPage3->Controls->Add(this->third_layer_y);
			this->tabPage3->Controls->Add(this->label7);
			this->tabPage3->Controls->Add(this->label6);
			this->tabPage3->Controls->Add(this->label5);
			this->tabPage3->Controls->Add(this->label4);
			this->tabPage3->Controls->Add(this->label3);
			this->tabPage3->Controls->Add(this->third_layer_x);
			this->tabPage3->Controls->Add(this->second_layer_y);
			this->tabPage3->Controls->Add(this->second_layer_x);
			this->tabPage3->Controls->Add(this->first_layer_y);
			this->tabPage3->Controls->Add(this->label2);
			this->tabPage3->Controls->Add(this->label1);
			this->tabPage3->Controls->Add(this->first_layer_x);
			this->tabPage3->Controls->Add(this->temperature_num);
			this->tabPage3->Controls->Add(this->Energy_chart);
			this->tabPage3->Controls->Add(this->plot_button);
			this->tabPage3->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->tabPage3->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->tabPage3->Location = System::Drawing::Point(4, 49);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Padding = System::Windows::Forms::Padding(3);
			this->tabPage3->Size = System::Drawing::Size(1289, 610);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"ENERGY STRUCTURE";
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(721, 551);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(207, 39);
			this->button3->TabIndex = 31;
			this->button3->Text = L"LOAD CHART";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// save_button
			// 
			this->save_button->Location = System::Drawing::Point(482, 551);
			this->save_button->Name = L"save_button";
			this->save_button->Size = System::Drawing::Size(207, 39);
			this->save_button->TabIndex = 30;
			this->save_button->Text = L"SAVE CHART";
			this->save_button->UseVisualStyleBackColor = true;
			this->save_button->Click += gcnew System::EventHandler(this, &MyForm::save_button_Click);
			// 
			// checkBox_strain
			// 
			this->checkBox_strain->AutoSize = true;
			this->checkBox_strain->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->checkBox_strain->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->checkBox_strain->Location = System::Drawing::Point(230, 363);
			this->checkBox_strain->Name = L"checkBox_strain";
			this->checkBox_strain->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->checkBox_strain->Size = System::Drawing::Size(132, 24);
			this->checkBox_strain->TabIndex = 29;
			this->checkBox_strain->Text = L"Include strain\?";
			this->checkBox_strain->UseVisualStyleBackColor = true;
			// 
			// checkBox_SO
			// 
			this->checkBox_SO->AutoSize = true;
			this->checkBox_SO->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->checkBox_SO->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->checkBox_SO->Location = System::Drawing::Point(230, 331);
			this->checkBox_SO->Name = L"checkBox_SO";
			this->checkBox_SO->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->checkBox_SO->Size = System::Drawing::Size(201, 24);
			this->checkBox_SO->TabIndex = 28;
			this->checkBox_SO->Text = L"Include Spin-orbit band\?";
			this->checkBox_SO->UseVisualStyleBackColor = true;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->BackColor = System::Drawing::Color::Black;
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label14->Location = System::Drawing::Point(15, 80);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(198, 20);
			this->label14->TabIndex = 27;
			this->label14->Text = L"ELEMENT PERCENTAGE";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->BackColor = System::Drawing::Color::Black;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Italic));
			this->label13->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label13->Location = System::Drawing::Point(262, 80);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(154, 20);
			this->label13->TabIndex = 26;
			this->label13->Text = L"LAYER WIDTH [nm]";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->BackColor = System::Drawing::Color::Black;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->label12->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label12->Location = System::Drawing::Point(326, 210);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(103, 17);
			this->label12->TabIndex = 25;
			this->label12->Text = L"GaAs top width";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->BackColor = System::Drawing::Color::Black;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->label11->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label11->Location = System::Drawing::Point(326, 184);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(99, 17);
			this->label11->TabIndex = 24;
			this->label11->Text = L"GaInPAs width";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->BackColor = System::Drawing::Color::Black;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->label10->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label10->Location = System::Drawing::Point(326, 158);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(108, 17);
			this->label10->TabIndex = 23;
			this->label10->Text = L"AlGaAsSb width";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::Color::Black;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->label9->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label9->Location = System::Drawing::Point(326, 132);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(99, 17);
			this->label9->TabIndex = 22;
			this->label9->Text = L"GaInPAs width";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::Color::Black;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->label8->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label8->Location = System::Drawing::Point(326, 106);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(126, 17);
			this->label8->TabIndex = 21;
			this->label8->Text = L"GaAs bottom width";
			// 
			// GaAs_width_top
			// 
			this->GaAs_width_top->Location = System::Drawing::Point(264, 207);
			this->GaAs_width_top->Name = L"GaAs_width_top";
			this->GaAs_width_top->Size = System::Drawing::Size(56, 23);
			this->GaAs_width_top->TabIndex = 20;
			this->GaAs_width_top->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 20, 0, 0, 0 });
			// 
			// third_layer_width
			// 
			this->third_layer_width->DecimalPlaces = 1;
			this->third_layer_width->Increment = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 65536 });
			this->third_layer_width->Location = System::Drawing::Point(264, 181);
			this->third_layer_width->Name = L"third_layer_width";
			this->third_layer_width->Size = System::Drawing::Size(56, 23);
			this->third_layer_width->TabIndex = 19;
			this->third_layer_width->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10, 0, 0, 0 });
			// 
			// second_layer_width
			// 
			this->second_layer_width->DecimalPlaces = 1;
			this->second_layer_width->Increment = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 65536 });
			this->second_layer_width->Location = System::Drawing::Point(264, 155);
			this->second_layer_width->Name = L"second_layer_width";
			this->second_layer_width->Size = System::Drawing::Size(56, 23);
			this->second_layer_width->TabIndex = 18;
			this->second_layer_width->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 5, 0, 0, 0 });
			// 
			// first_layer_width
			// 
			this->first_layer_width->DecimalPlaces = 1;
			this->first_layer_width->Increment = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 65536 });
			this->first_layer_width->Location = System::Drawing::Point(264, 129);
			this->first_layer_width->Name = L"first_layer_width";
			this->first_layer_width->Size = System::Drawing::Size(56, 23);
			this->first_layer_width->TabIndex = 17;
			this->first_layer_width->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10, 0, 0, 0 });
			// 
			// GaAs_width_bottom
			// 
			this->GaAs_width_bottom->Location = System::Drawing::Point(264, 103);
			this->GaAs_width_bottom->Name = L"GaAs_width_bottom";
			this->GaAs_width_bottom->Size = System::Drawing::Size(56, 23);
			this->GaAs_width_bottom->TabIndex = 16;
			this->GaAs_width_bottom->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 20, 0, 0, 0 });
			// 
			// third_layer_y
			// 
			this->third_layer_y->DecimalPlaces = 2;
			this->third_layer_y->Increment = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 131072 });
			this->third_layer_y->Location = System::Drawing::Point(19, 268);
			this->third_layer_y->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->third_layer_y->Name = L"third_layer_y";
			this->third_layer_y->Size = System::Drawing::Size(56, 23);
			this->third_layer_y->TabIndex = 15;
			this->third_layer_y->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 6, 0, 0, 65536 });
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::Black;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->label7->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label7->Location = System::Drawing::Point(81, 271);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(148, 17);
			this->label7->TabIndex = 14;
			this->label7->Text = L"3rd layer: Phosphorus";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Black;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->label6->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label6->Location = System::Drawing::Point(81, 245);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(119, 17);
			this->label6->TabIndex = 13;
			this->label6->Text = L"3rd layer: Gallium";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Black;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->label5->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label5->Location = System::Drawing::Point(81, 203);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(122, 17);
			this->label5->TabIndex = 12;
			this->label5->Text = L"2nd layer: Arsenic";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Black;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->label4->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label4->Location = System::Drawing::Point(81, 177);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(139, 17);
			this->label4->TabIndex = 11;
			this->label4->Text = L"2nd layer: Aluminium";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Black;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->label3->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label3->Location = System::Drawing::Point(81, 132);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(146, 17);
			this->label3->TabIndex = 10;
			this->label3->Text = L"1st layer: Phosphorus";
			// 
			// third_layer_x
			// 
			this->third_layer_x->DecimalPlaces = 2;
			this->third_layer_x->Increment = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 131072 });
			this->third_layer_x->Location = System::Drawing::Point(19, 242);
			this->third_layer_x->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->third_layer_x->Name = L"third_layer_x";
			this->third_layer_x->Size = System::Drawing::Size(56, 23);
			this->third_layer_x->TabIndex = 9;
			this->third_layer_x->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 3, 0, 0, 65536 });
			// 
			// second_layer_y
			// 
			this->second_layer_y->DecimalPlaces = 2;
			this->second_layer_y->Increment = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 131072 });
			this->second_layer_y->Location = System::Drawing::Point(19, 200);
			this->second_layer_y->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->second_layer_y->Name = L"second_layer_y";
			this->second_layer_y->Size = System::Drawing::Size(56, 23);
			this->second_layer_y->TabIndex = 8;
			this->second_layer_y->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 5, 0, 0, 65536 });
			// 
			// second_layer_x
			// 
			this->second_layer_x->DecimalPlaces = 2;
			this->second_layer_x->Increment = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 131072 });
			this->second_layer_x->Location = System::Drawing::Point(19, 174);
			this->second_layer_x->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->second_layer_x->Name = L"second_layer_x";
			this->second_layer_x->Size = System::Drawing::Size(56, 23);
			this->second_layer_x->TabIndex = 7;
			this->second_layer_x->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 8, 0, 0, 65536 });
			// 
			// first_layer_y
			// 
			this->first_layer_y->DecimalPlaces = 2;
			this->first_layer_y->Increment = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 131072 });
			this->first_layer_y->Location = System::Drawing::Point(19, 129);
			this->first_layer_y->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->first_layer_y->Name = L"first_layer_y";
			this->first_layer_y->Size = System::Drawing::Size(56, 23);
			this->first_layer_y->TabIndex = 6;
			this->first_layer_y->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 6, 0, 0, 65536 });
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Black;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->label2->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label2->Location = System::Drawing::Point(81, 106);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(117, 17);
			this->label2->TabIndex = 5;
			this->label2->Text = L"1st layer: Gallium";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Black;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->label1->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label1->Location = System::Drawing::Point(226, 22);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(90, 17);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Temperature";
			// 
			// first_layer_x
			// 
			this->first_layer_x->DecimalPlaces = 2;
			this->first_layer_x->Increment = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 131072 });
			this->first_layer_x->Location = System::Drawing::Point(19, 103);
			this->first_layer_x->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->first_layer_x->Name = L"first_layer_x";
			this->first_layer_x->Size = System::Drawing::Size(56, 23);
			this->first_layer_x->TabIndex = 3;
			this->first_layer_x->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 3, 0, 0, 65536 });
			// 
			// temperature_num
			// 
			this->temperature_num->Location = System::Drawing::Point(84, 22);
			this->temperature_num->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10000, 0, 0, 0 });
			this->temperature_num->Name = L"temperature_num";
			this->temperature_num->Size = System::Drawing::Size(136, 23);
			this->temperature_num->TabIndex = 2;
			this->temperature_num->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 300, 0, 0, 0 });
			// 
			// Energy_chart
			// 
			chartArea10->AxisX->Title = L"z [nm]";
			chartArea10->AxisX->TitleFont = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11));
			chartArea10->AxisY->LabelAutoFitMaxFontSize = 11;
			chartArea10->AxisY->Title = L" E [eV]";
			chartArea10->AxisY->TitleFont = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11));
			chartArea10->Name = L"ChartArea1";
			this->Energy_chart->ChartAreas->Add(chartArea10);
			legend10->Name = L"Legend1";
			this->Energy_chart->Legends->Add(legend10);
			this->Energy_chart->Location = System::Drawing::Point(482, 22);
			this->Energy_chart->Name = L"Energy_chart";
			series10->ChartArea = L"ChartArea1";
			series10->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series10->Legend = L"Legend1";
			series10->Name = L"Series1";
			this->Energy_chart->Series->Add(series10);
			this->Energy_chart->Size = System::Drawing::Size(794, 523);
			this->Energy_chart->TabIndex = 1;
			this->Energy_chart->Text = L"chart1";
			title10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			title10->Name = L"Title1";
			title10->Text = L"GaAs / GaₘIn₁₋ₘPₙAs₁₋ₙ / AlₘGa₁₋ₘAsₙSb₁₋ₙ / GaₘIn₁₋ₘPₙAs₁₋ₙ / GaAs";
			this->Energy_chart->Titles->Add(title10);
			// 
			// plot_button
			// 
			this->plot_button->Location = System::Drawing::Point(19, 331);
			this->plot_button->Name = L"plot_button";
			this->plot_button->Size = System::Drawing::Size(194, 157);
			this->plot_button->TabIndex = 0;
			this->plot_button->Text = L"PLOT";
			this->plot_button->UseVisualStyleBackColor = true;
			this->plot_button->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->ClientSize = System::Drawing::Size(1312, 676);
			this->Controls->Add(this->tabControl1);
			this->MaximizeBox = false;
			this->MaximumSize = System::Drawing::Size(1328, 715);
			this->MinimumSize = System::Drawing::Size(1328, 715);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->num_m_const_mass))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->num_n_const_mass))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numeric_temp_interpolation))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numeric_const_m))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numeric_const_n))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->mass_y_chart))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->mass_x_chart))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->energy_y_chart))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Energy_x_chart))->EndInit();
			this->tabPage3->ResumeLayout(false);
			this->tabPage3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->GaAs_width_top))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->third_layer_width))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->second_layer_width))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->first_layer_width))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->GaAs_width_bottom))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->third_layer_y))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->third_layer_x))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->second_layer_y))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->second_layer_x))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->first_layer_y))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->first_layer_x))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->temperature_num))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Energy_chart))->EndInit();
			this->ResumeLayout(false);

		}


#pragma endregion

	// Generate Energy bands
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		
		double temperature = static_cast<double>(temperature_num->Value);

		//Define building blocks - material, e.g. GaAs
			std::ifstream read_file("GaAs.txt"); CreateMaterial GaAs(read_file, temperature); //inside constructor file is closed
			read_file.open("AlAs.txt"); CreateMaterial AlAs(read_file, temperature);
			read_file.open("AlSb.txt"); CreateMaterial AlSb(read_file, temperature);
			read_file.open("GaP.txt"); CreateMaterial GaP(read_file, temperature);
			if (temperature > 0) {
				double temp = (exp(164 / temperature) + exp(-164 / temperature)) / (exp(164 / temperature) - exp(-164 / temperature));
				GaP.Eg += 0.1081 * (1.0 - temp); //different temperature dependence - wierd shit by low temperature
			}
			read_file.open("GaSb.txt"); CreateMaterial GaSb(read_file, temperature);
			read_file.open("InAs.txt"); CreateMaterial InAs(read_file, temperature);
			read_file.open("InP.txt"); CreateMaterial InP(read_file, temperature);

		//Percentage
			double Ga_x1 = static_cast<double>(first_layer_x->Value);
			double P_y1 = static_cast<double>(first_layer_y->Value);
			double Al_x2 = static_cast<double>(second_layer_x->Value);
			double As_y2 = static_cast<double>(second_layer_y->Value);
			double Ga_x3 = static_cast<double>(third_layer_x->Value);
			double P_y3 = static_cast<double>(third_layer_y->Value);

		//Define layers
			bool include_strain = this->checkBox_strain->Checked;
			CreateStructure GaInPAs1(temperature, GaP, InP, GaAs, InAs, Ga_x1, P_y1, include_strain);
			CreateStructure AlGaAsSb(temperature, AlAs, GaAs, AlSb, GaSb, Al_x2, As_y2, include_strain);
			CreateStructure GaInPAs2(temperature, GaP, InP, GaAs, InAs, Ga_x3, P_y3, include_strain);
			/*CreateStructure GaInPAs1(temperature, GaAs, GaAs, GaAs, GaAs, Ga_x1, P_y1, include_strain);
			CreateStructure AlGaAsSb(temperature, GaAs, GaAs, GaAs, GaAs, Al_x2, As_y2, include_strain);
			CreateStructure GaInPAs2(temperature, GaAs, GaAs, GaAs, GaAs, Ga_x3, P_y3, include_strain);*/

		// Define bowing vectors
			std::vector<std::vector<double>> GaInPAs_bowing(4), AlGaAsSb_bowing(4);
			// -- GaInPAs
				GaInPAs_bowing[0] = std::vector<double>(5, 0.0); // WX - GaInP
				GaInPAs_bowing[0][0] = 0.65; GaInPAs_bowing[0][2] = 0.051;
				GaInPAs_bowing[1] = std::vector<double>(5, 0.0); // YZ - GaInAs
				GaInPAs_bowing[1][0] = 0.477; GaInPAs_bowing[1][1] = 0.155; GaInPAs_bowing[1][2] = 0.0091;
				GaInPAs_bowing[1][3] = -0.38; GaInPAs_bowing[1][4] = 2.61;
				GaInPAs_bowing[2] = std::vector<double>(5, 0.0); // WT - GaAsP
				GaInPAs_bowing[2][0] = 0.19;
				GaInPAs_bowing[3] = std::vector<double>(5, 0.0); // XZ - InAsP
				GaInPAs_bowing[3][0] = 0.1; GaInPAs_bowing[3][1] = 0.16;
			// --AlGaAsSb
				AlGaAsSb_bowing[0] = std::vector<double>(5, 0.0); // WX - AlGaAs
				AlGaAsSb_bowing[0][0] = -0.127 + 1.21 * Al_x2;
				AlGaAsSb_bowing[1] = std::vector<double>(5, 0.0); // YZ - AlGaSb
				AlGaAsSb_bowing[1][0] = -0.044 + 1.22 * Al_x2; AlGaAsSb_bowing[1][1] = 0.3;
				AlGaAsSb_bowing[2] = std::vector<double>(5, 0.0); // WY - AlAsSb
				AlGaAsSb_bowing[2][0] = 0.8; AlGaAsSb_bowing[2][1] = 0.15; AlGaAsSb_bowing[2][3] = -1.71;
				AlGaAsSb_bowing[3] = std::vector<double>(5, 0.0);
				AlGaAsSb_bowing[3][0] = 1.43; AlGaAsSb_bowing[3][1] = 0.6; AlGaAsSb_bowing[3][3] = -1.06;
		// Initialize structure components
			GaInPAs1.InitializeComponents(GaInPAs_bowing, GaAs.lattice_const);
			AlGaAsSb.InitializeComponents(AlGaAsSb_bowing, GaAs.lattice_const);
			GaInPAs2.InitializeComponents(GaInPAs_bowing, GaAs.lattice_const);
			//this->label1->Text = gcnew String(std::to_string(GaP.Eg).c_str());
		// Generating conducting and valence bands
				//Conducting Band
					this->Energy_chart->Series->Clear();
					System::Windows::Forms::DataVisualization::Charting::Series^ series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
					series1->ChartArea = L"ChartArea1";
					series1->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
					series1->Legend = L"Legend1";
					series1->Name = L"Ec - conduction band";
					this->Energy_chart->Series->Add(series1);
					this->Energy_chart->Series["Ec - conduction band"]->BorderWidth = 3;
					double width = static_cast<double>(GaAs_width_bottom->Value);
					this->Energy_chart->Series["Ec - conduction band"]->Points->AddXY(0, GaAs.VBO + GaAs.Eg);
					this->Energy_chart->Series["Ec - conduction band"]->Points->AddXY(width, GaAs.VBO + GaAs.Eg);
					this->Energy_chart->Series["Ec - conduction band"]->Points->AddXY(width, GaInPAs1.Ec);
					width += static_cast<double>(first_layer_width->Value);
					this->Energy_chart->Series["Ec - conduction band"]->Points->AddXY(width, GaInPAs1.Ec);
					this->Energy_chart->Series["Ec - conduction band"]->Points->AddXY(width, AlGaAsSb.Ec);
					width += static_cast<double>(second_layer_width->Value);
					this->Energy_chart->Series["Ec - conduction band"]->Points->AddXY(width, AlGaAsSb.Ec);
					this->Energy_chart->Series["Ec - conduction band"]->Points->AddXY(width, GaInPAs2.Ec);
					width += static_cast<double>(third_layer_width->Value);
					this->Energy_chart->Series["Ec - conduction band"]->Points->AddXY(width, GaInPAs2.Ec);
					this->Energy_chart->Series["Ec - conduction band"]->Points->AddXY(width, GaAs.VBO + GaAs.Eg);
					width += static_cast<double>(GaAs_width_top->Value);
					this->Energy_chart->Series["Ec - conduction band"]->Points->AddXY(width, GaAs.VBO + GaAs.Eg);
					this->Energy_chart->ChartAreas[0]->RecalculateAxesScale(); //autoscale
					this->Energy_chart->ChartAreas[0]->AxisX->Minimum = 0;
					this->Energy_chart->ChartAreas[0]->AxisX->Maximum = width;
				
				// Vaence band - heavy holes
					System::Windows::Forms::DataVisualization::Charting::Series^ series2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
					series2->ChartArea = L"ChartArea1";
					series2->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
					series2->Legend = L"Legend1";
					series2->Name = L"Ev_hh - heavy holes";
					this->Energy_chart->Series->Add(series2);
					this->Energy_chart->Series["Ev_hh - heavy holes"]->BorderWidth = 3;
					width = static_cast<double>(GaAs_width_bottom->Value);
					this->Energy_chart->Series["Ev_hh - heavy holes"]->Points->AddXY(0, GaAs.VBO);
					this->Energy_chart->Series["Ev_hh - heavy holes"]->Points->AddXY(width, GaAs.VBO);
					this->Energy_chart->Series["Ev_hh - heavy holes"]->Points->AddXY(width, GaInPAs1.Ev_hh);
					width += static_cast<double>(first_layer_width->Value);
					this->Energy_chart->Series["Ev_hh - heavy holes"]->Points->AddXY(width, GaInPAs1.Ev_hh);
					this->Energy_chart->Series["Ev_hh - heavy holes"]->Points->AddXY(width, AlGaAsSb.Ev_hh);
					width += static_cast<double>(second_layer_width->Value);
					this->Energy_chart->Series["Ev_hh - heavy holes"]->Points->AddXY(width, AlGaAsSb.Ev_hh);
					this->Energy_chart->Series["Ev_hh - heavy holes"]->Points->AddXY(width, GaInPAs2.Ev_hh);
					width += static_cast<double>(third_layer_width->Value);
					this->Energy_chart->Series["Ev_hh - heavy holes"]->Points->AddXY(width, GaInPAs2.Ev_hh);
					this->Energy_chart->Series["Ev_hh - heavy holes"]->Points->AddXY(width, GaAs.VBO);
					width += static_cast<double>(GaAs_width_top->Value);
					this->Energy_chart->Series["Ev_hh - heavy holes"]->Points->AddXY(width, GaAs.VBO);
					this->Energy_chart->ChartAreas[0]->RecalculateAxesScale(); //autoscale
					this->Energy_chart->ChartAreas[0]->AxisX->Minimum = 0;
					this->Energy_chart->ChartAreas[0]->AxisX->Maximum = width;

				//Valence band - light holes
					System::Windows::Forms::DataVisualization::Charting::Series^ series3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
					series3->ChartArea = L"ChartArea1";
					series3->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
					series3->Legend = L"Legend1";
					series3->Name = L"Ev_lh - light holes";
					this->Energy_chart->Series->Add(series3);
					this->Energy_chart->Series["Ev_lh - light holes"]->BorderWidth = 3;
					width = static_cast<double>(GaAs_width_bottom->Value);
					this->Energy_chart->Series["Ev_lh - light holes"]->Points->AddXY(0, GaAs.VBO);
					this->Energy_chart->Series["Ev_lh - light holes"]->Points->AddXY(width, GaAs.VBO);
					this->Energy_chart->Series["Ev_lh - light holes"]->Points->AddXY(width, GaInPAs1.Ev_lh);
					width += static_cast<double>(first_layer_width->Value);
					this->Energy_chart->Series["Ev_lh - light holes"]->Points->AddXY(width, GaInPAs1.Ev_lh);
					this->Energy_chart->Series["Ev_lh - light holes"]->Points->AddXY(width, AlGaAsSb.Ev_lh);
					width += static_cast<double>(second_layer_width->Value);
					this->Energy_chart->Series["Ev_lh - light holes"]->Points->AddXY(width, AlGaAsSb.Ev_lh);
					this->Energy_chart->Series["Ev_lh - light holes"]->Points->AddXY(width, GaInPAs2.Ev_lh);
					width += static_cast<double>(third_layer_width->Value);
					this->Energy_chart->Series["Ev_lh - light holes"]->Points->AddXY(width, GaInPAs2.Ev_lh);
					this->Energy_chart->Series["Ev_lh - light holes"]->Points->AddXY(width, GaAs.VBO);
					width += static_cast<double>(GaAs_width_top->Value);
					this->Energy_chart->Series["Ev_lh - light holes"]->Points->AddXY(width, GaAs.VBO);
					this->Energy_chart->ChartAreas[0]->RecalculateAxesScale(); //autoscale
					this->Energy_chart->ChartAreas[0]->AxisX->Minimum = 0;
					this->Energy_chart->ChartAreas[0]->AxisX->Maximum = width;
					
					if (this->checkBox_SO->Checked) {
						//Valence band - spin orbit
							System::Windows::Forms::DataVisualization::Charting::Series^ series4 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
							series4->ChartArea = L"ChartArea1";
							series4->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
							series4->Legend = L"Legend1";
							series4->Name = L"Ev_sh - spin orbit";
							this->Energy_chart->Series->Add(series4);
							this->Energy_chart->Series["Ev_sh - spin orbit"]->BorderWidth = 3;
							width = static_cast<double>(GaAs_width_bottom->Value);
							this->Energy_chart->Series["Ev_sh - spin orbit"]->Points->AddXY(0, GaAs.VBO - GaAs.delta_so);
							this->Energy_chart->Series["Ev_sh - spin orbit"]->Points->AddXY(width, GaAs.VBO - GaAs.delta_so);
							this->Energy_chart->Series["Ev_sh - spin orbit"]->Points->AddXY(width, GaInPAs1.Ev_sh);
							width += static_cast<double>(first_layer_width->Value);
							this->Energy_chart->Series["Ev_sh - spin orbit"]->Points->AddXY(width, GaInPAs1.Ev_sh);
							this->Energy_chart->Series["Ev_sh - spin orbit"]->Points->AddXY(width, AlGaAsSb.Ev_sh);
							width += static_cast<double>(second_layer_width->Value);
							this->Energy_chart->Series["Ev_sh - spin orbit"]->Points->AddXY(width, AlGaAsSb.Ev_sh);
							this->Energy_chart->Series["Ev_sh - spin orbit"]->Points->AddXY(width, GaInPAs2.Ev_sh);
							width += static_cast<double>(third_layer_width->Value);
							this->Energy_chart->Series["Ev_sh - spin orbit"]->Points->AddXY(width, GaInPAs2.Ev_sh);
							this->Energy_chart->Series["Ev_sh - spin orbit"]->Points->AddXY(width, GaAs.VBO - GaAs.delta_so);
							width += static_cast<double>(GaAs_width_top->Value);
							this->Energy_chart->Series["Ev_sh - spin orbit"]->Points->AddXY(width, GaAs.VBO - GaAs.delta_so);
							this->Energy_chart->ChartAreas[0]->RecalculateAxesScale(); //autoscale
							this->Energy_chart->ChartAreas[0]->AxisX->Minimum = 0;
							this->Energy_chart->ChartAreas[0]->AxisX->Maximum = width;
					}

				GaInPAs1.~CreateStructure();
				AlGaAsSb.~CreateStructure();
				GaInPAs2.~CreateStructure();
	}

	// Save Data to File
	private: System::Void save_button_Click(System::Object^ sender, System::EventArgs^ e) {
		double temperature = static_cast<double>(temperature_num->Value);

		//Define building blocks - material, e.g. GaAs
			std::ifstream read_file("GaAs.txt"); CreateMaterial GaAs(read_file, temperature); //inside constructor file is closed
			read_file.open("AlAs.txt"); CreateMaterial AlAs(read_file, temperature);
			read_file.open("AlSb.txt"); CreateMaterial AlSb(read_file, temperature);
			read_file.open("GaP.txt"); CreateMaterial GaP(read_file, temperature);
			if (temperature > 0) {
				double temp = (exp(164 / temperature) + exp(-164 / temperature)) / (exp(164 / temperature) - exp(-164 / temperature));
				GaP.Eg += 0.1081 * (1.0 - temp); //different temperature dependence - wierd shit by low temperature
			}
			read_file.open("GaSb.txt"); CreateMaterial GaSb(read_file, temperature);
			read_file.open("InAs.txt"); CreateMaterial InAs(read_file, temperature);
			read_file.open("InP.txt"); CreateMaterial InP(read_file, temperature);

		//Percentage
			double Ga_x1 = static_cast<double>(first_layer_x->Value);
			double P_y1 = static_cast<double>(first_layer_y->Value);
			double Al_x2 = static_cast<double>(second_layer_x->Value);
			double As_y2 = static_cast<double>(second_layer_y->Value);
			double Ga_x3 = static_cast<double>(third_layer_x->Value);
			double P_y3 = static_cast<double>(third_layer_y->Value);

		//Define layers
			bool include_strain = this->checkBox_strain->Checked;
			CreateStructure GaInPAs1(temperature, GaP, InP, GaAs, InAs, Ga_x1, P_y1, include_strain);
			CreateStructure AlGaAsSb(temperature, AlAs, GaAs, AlSb, GaSb, Al_x2, As_y2, include_strain);
			CreateStructure GaInPAs2(temperature, GaP, InP, GaAs, InAs, Ga_x3, P_y3, include_strain);

		// Define bowing vectors
			std::vector<std::vector<double>> GaInPAs_bowing(4), AlGaAsSb_bowing(4);
			// -- GaInPAs
				GaInPAs_bowing[0] = std::vector<double>(5, 0.0); // WX - GaInP
				GaInPAs_bowing[0][0] = 0.65; GaInPAs_bowing[0][2] = 0.051;
				GaInPAs_bowing[1] = std::vector<double>(5, 0.0); // YZ - GaInAs
				GaInPAs_bowing[1][0] = 0.477; GaInPAs_bowing[1][1] = 0.155; GaInPAs_bowing[1][2] = 0.0091;
				GaInPAs_bowing[1][3] = -0.38; GaInPAs_bowing[1][4] = 2.61;
				GaInPAs_bowing[2] = std::vector<double>(5, 0.0); // WT - GaAsP
				GaInPAs_bowing[2][0] = 0.19;
				GaInPAs_bowing[3] = std::vector<double>(5, 0.0); // XZ - InAsP
				GaInPAs_bowing[3][0] = 0.1; GaInPAs_bowing[3][1] = 0.16;
			// --AlGaAsSb
				AlGaAsSb_bowing[0] = std::vector<double>(5, 0.0); // WX - AlGaAs
				AlGaAsSb_bowing[0][0] = -0.127 + 1.21 * Al_x2;
				AlGaAsSb_bowing[1] = std::vector<double>(5, 0.0); // YZ - AlGaSb
				AlGaAsSb_bowing[1][0] = -0.044 + 1.22 * Al_x2; AlGaAsSb_bowing[1][1] = 0.3;
				AlGaAsSb_bowing[2] = std::vector<double>(5, 0.0); // WY - AlAsSb
				AlGaAsSb_bowing[2][0] = 0.8; AlGaAsSb_bowing[2][1] = 0.15; AlGaAsSb_bowing[2][3] = -1.71;
				AlGaAsSb_bowing[3] = std::vector<double>(5, 0.0);
				AlGaAsSb_bowing[3][0] = 1.43; AlGaAsSb_bowing[3][1] = 0.6; AlGaAsSb_bowing[3][3] = -1.06;
		// Initialize structure components
			GaInPAs1.InitializeComponents(GaInPAs_bowing, GaAs.lattice_const);
			AlGaAsSb.InitializeComponents(AlGaAsSb_bowing, GaAs.lattice_const);
			GaInPAs2.InitializeComponents(GaInPAs_bowing, GaAs.lattice_const);

		SaveFileDialog saveFileDialog;
		std::string name = "./DATA/";
		TCHAR Npath[MAX_PATH];
		GetCurrentDirectory(MAX_PATH, Npath);
		CreateDirectory(L"./DATA/", NULL);
		SetCurrentDirectory(L"./DATA/");

		saveFileDialog.InitialDirectory = gcnew String(name.c_str());
		saveFileDialog.Filter = "txt files (*.txt)|*.txt|All files (*.*)|*.*";
		saveFileDialog.FilterIndex = 1;
		saveFileDialog.RestoreDirectory = true;

		std::ostringstream sGa_x1, sGa_x1_1, sP_y1, sP_y1_1, sAl_x2, sAl_x2_1, sAs_y2, sAs_y2_1, sGa_x3, sGa_x3_1, sP_y3, sP_y3_1, T, width;
			sGa_x1 << std::setprecision(2) << static_cast<double>(first_layer_x->Value); sGa_x1_1 << std::setprecision(2) << (1 - static_cast<double>(first_layer_x->Value));
			sP_y1 << std::setprecision(2) << static_cast<double>(first_layer_y->Value); sP_y1_1 << std::setprecision(2) << (1 - static_cast<double>(first_layer_y->Value));
			sAl_x2 << std::setprecision(2) << static_cast<double>(second_layer_x->Value); sAl_x2_1 << std::setprecision(2) << (1 - static_cast<double>(second_layer_x->Value));
			sAs_y2 << std::setprecision(2) << static_cast<double>(second_layer_y->Value); sAs_y2_1 << std::setprecision(2) << (1 - static_cast<double>(second_layer_y->Value));
			sGa_x3 << std::setprecision(2) << static_cast<double>(third_layer_x->Value); sGa_x3_1 << std::setprecision(2) << (1 - static_cast<double>(third_layer_x->Value));
			sP_y3 << std::setprecision(2) << static_cast<double>(third_layer_y->Value); sP_y3_1 << std::setprecision(2) << (1 - static_cast<double>(third_layer_y->Value));
			T << std::setprecision(0) << static_cast<double>(temperature_num->Value);
			width << std::setprecision(0) << static_cast<double>(GaAs_width_bottom->Value) << ",";
			width << std::setprecision(0) << static_cast<double>(first_layer_width->Value) << ",";
			width << std::setprecision(0) << static_cast<double>(second_layer_width->Value) << ",";
			width << std::setprecision(0) << static_cast<double>(third_layer_width->Value) << ",";
			width << std::setprecision(0) << static_cast<double>(GaAs_width_top->Value);
		name = "Energy_Ga-" + sGa_x1.str() + "In_" + sGa_x1_1.str() + "P_" + sP_y1.str() + "As_" + sP_y1_1.str();
		name += " - Al_" + sAl_x2.str() + "Ga_" + sAl_x2_1.str() + "As_" + sAs_y2.str() +"Sb_" + sAs_y2_1.str();
		name += " - Ga_" + sGa_x3.str() + "In_" + sGa_x3_1.str() + "P_" + sP_y3.str() + "As_" + sP_y3_1.str();
		name += "__T=" + T.str() + "__width=" + width.str() + ".txt";
		
		saveFileDialog.FileName = gcnew String(name.c_str());
		if (saveFileDialog.ShowDialog() == System::Windows::Forms::DialogResult::OK) {

			//Writing to File
				//System::IO::StreamWriter^ outfile = gcnew System::IO::StreamWriter(saveFileDialog.FileName);
			System::IO::Stream^ strim = saveFileDialog.OpenFile();
			System::IO::StreamWriter^ outfile = gcnew System::IO::StreamWriter(strim);
			outfile->Write("-------------------------------------PARAMETERS: -------------------------------------\n\n");
			std::string file_write = "SUBSTRATE - BOTTOM LAYER:  GaAs\nz = " + std::to_string(static_cast<double>(GaAs_width_bottom->Value)) + "[nm] - substrate bottom thickness\n";
			file_write += "\nFIRST_LAYER:  Ga_m In_1-m P_n As_1-n\nm_Ga =" + sGa_x1.str() + " - Gallium amount\nn_P = " + sP_y1.str() + "\
	 - Phosphorus amount\nz_GaInPAs = " + std::to_string(static_cast<double>(first_layer_width->Value)) + " [nm] - layer thickness\n";
			file_write += "\nSECOND LAYER:  Al_m Ga_1-m As_n Sb_1-n\nm_Al = " + sAl_x2.str() + " - Aluminium amount\nn_As = " + sAs_y2.str() + "\
	 - Arsenic amount\nz_GaInPaAs = " + std::to_string(static_cast<double>(first_layer_width->Value)) + " [nm] - layer thickness\n";
			file_write += "\nTHIRD LAYER:  Ga_m In_1-m P_n As_1-n\nm_Ga = " + sGa_x3.str() + " - Gallium amount\nn_P = " + sP_y3.str() + "\
	 - Phosphorus amount\nz_Ga = " + std::to_string(static_cast<double>(first_layer_width->Value)) + " [nm] - layer thickness\n";
			file_write += "\nSUBSTRATE - TOP LAYER:  GaAs\nz = " + std::to_string(static_cast<double>(GaAs_width_top->Value)) + "[nm] - substrate bottom thickness\n";
			outfile->Write(gcnew String(file_write.c_str()));
			outfile->Write("\n-------------------------------------ENERGY DATA: -------------------------------------\
	\n\nz [nm]\t\tEc [eV]\t\tEv_hh [eV]\tEv_lh [eV]\tEv_sh [eV]\n");
			std::ostringstream energy_data;
			double z = 0;
			energy_data << std::fixed << std::setprecision(6);
			energy_data << z << "\t" << GaAs.VBO + GaAs.Eg << "\t" << GaAs.VBO << "\t" << GaAs.VBO << "\t" << GaAs.VBO - GaAs.delta_so << std::endl;
			z += static_cast<double>(GaAs_width_bottom->Value);
			energy_data << z << "\t" << GaAs.VBO + GaAs.Eg << "\t" << GaAs.VBO << "\t" << GaAs.VBO << "\t" << GaAs.VBO - GaAs.delta_so << std::endl;
			energy_data << z << "\t" << GaInPAs1.Ec << "\t" << GaInPAs1.Ev_hh << "\t" << GaInPAs1.Ev_lh << "\t" << GaInPAs1.Ev_sh << std::endl;
			z += static_cast<double>(first_layer_width->Value);
			energy_data << z << "\t" << GaInPAs1.Ec << "\t" << GaInPAs1.Ev_hh << "\t" << GaInPAs1.Ev_lh << "\t" << GaInPAs1.Ev_sh << std::endl;
			energy_data << z << "\t" << AlGaAsSb.Ec << "\t" << AlGaAsSb.Ev_hh << "\t" << AlGaAsSb.Ev_lh << "\t" << AlGaAsSb.Ev_sh << std::endl;
			z += static_cast<double>(second_layer_width->Value);
			energy_data << z << "\t" << AlGaAsSb.Ec << "\t" << AlGaAsSb.Ev_hh << "\t" << AlGaAsSb.Ev_lh << "\t" << AlGaAsSb.Ev_sh << std::endl;
			energy_data << z << "\t" << GaInPAs2.Ec << "\t" << GaInPAs2.Ev_hh << "\t" << GaInPAs2.Ev_lh << "\t" << GaInPAs2.Ev_sh << std::endl;
			z += static_cast<double>(third_layer_width->Value);
			energy_data << z << "\t" << GaInPAs2.Ec << "\t" << GaInPAs2.Ev_hh << "\t" << GaInPAs2.Ev_lh << "\t" << GaInPAs2.Ev_sh << std::endl;
			energy_data << z << "\t" << GaAs.VBO + GaAs.Eg << "\t" << GaAs.VBO << "\t" << GaAs.VBO << "\t" << GaAs.VBO - GaAs.delta_so << std::endl;
			z += static_cast<double>(GaAs_width_top->Value);
			energy_data << z << "\t" << GaAs.VBO + GaAs.Eg << "\t" << GaAs.VBO << "\t" << GaAs.VBO << "\t" << GaAs.VBO - GaAs.delta_so << std::endl;
			outfile->Write(gcnew String((energy_data.str()).c_str()));
			//------------------------

			outfile->Close();
		}

		GaInPAs1.~CreateStructure();
		AlGaAsSb.~CreateStructure();
		GaInPAs2.~CreateStructure();
		SetCurrentDirectory(Npath);
	}
	
	// Load Data From File
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		TCHAR Npath[MAX_PATH];
		GetCurrentDirectory(MAX_PATH, Npath);
		CreateDirectory(L"./DATA/", NULL);
		SetCurrentDirectory(L"./DATA/");
		OpenFileDialog openFileDialog;
		openFileDialog.InitialDirectory = L"./DATA/";
		openFileDialog.Filter = "txt files (*.txt)|*.txt|All files (*.*)|*.*";
		openFileDialog.FilterIndex = 1;
		openFileDialog.RestoreDirectory = true;
	label_redo:
		auto result = openFileDialog.ShowDialog();
		if (result == System::Windows::Forms::DialogResult::OK) {

			String^ filePath = openFileDialog.FileName;
			std::string name = msclr::interop::marshal_as<std::string>(filePath);
			std::string name_stay_put = name;
			//Remove filepath  and get only name
				const size_t last_slash_idx = name.find_last_of("\\/");
				if (std::string::npos != last_slash_idx) {
					name.erase(0, last_slash_idx + 1);
				}
			//----------
			if (0 != name.find("Energy")) {
				String^ message = "Error 5223:\nInvalid input file!!\nPick again!\n\nThanks :)";
				MessageBox::Show(message, "Error");
				goto label_redo;
			}
			this->Energy_chart->Series->Clear();
			System::Windows::Forms::DataVisualization::Charting::Series^ series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			series1->ChartArea = L"ChartArea1";
			series1->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series1->Legend = L"Legend1";
			series1->Name = L"Ec - conduction band";
			this->Energy_chart->Series->Add(series1);
			this->Energy_chart->Series["Ec - conduction band"]->BorderWidth = 3;
			System::Windows::Forms::DataVisualization::Charting::Series^ series2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			series2->ChartArea = L"ChartArea1";
			series2->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series2->Legend = L"Legend1";
			series2->Name = L"Ev_hh - heavy holes";
			this->Energy_chart->Series->Add(series2);
			this->Energy_chart->Series["Ev_hh - heavy holes"]->BorderWidth = 3;
			System::Windows::Forms::DataVisualization::Charting::Series^ series3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			series3->ChartArea = L"ChartArea1";
			series3->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series3->Legend = L"Legend1";
			series3->Name = L"Ev_lh - light holes";
			this->Energy_chart->Series->Add(series3);
			this->Energy_chart->Series["Ev_lh - light holes"]->BorderWidth = 3;
			System::Windows::Forms::DataVisualization::Charting::Series^ series4 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			series4->ChartArea = L"ChartArea1";
			series4->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series4->Legend = L"Legend1";
			series4->Name = L"Ev_sh - spin orbit";
			this->Energy_chart->Series->Add(series4);
			this->Energy_chart->Series["Ev_sh - spin orbit"]->BorderWidth = 3;

			std::ifstream loadfile(name_stay_put);
			//Reading data from file
			std::string content; int iterator = 0;
			double x, y1, y2, y3, y4;
			while (std::getline(loadfile, content)) {
				if (iterator >= 25) {
					loadfile >> x >> y1 >> y2 >> y3 >> y4;
					this->Energy_chart->Series["Ec - conduction band"]->Points->AddXY(x, y1);
					this->Energy_chart->Series["Ev_hh - heavy holes"]->Points->AddXY(x, y2);
					this->Energy_chart->Series["Ev_lh - light holes"]->Points->AddXY(x, y3);
					this->Energy_chart->Series["Ev_sh - spin orbit"]->Points->AddXY(x, y4);
				}
				iterator += 1;
			}
			loadfile.close();

			this->Energy_chart->ChartAreas[0]->RecalculateAxesScale(); //autoscale
			this->Energy_chart->ChartAreas[0]->AxisX->Minimum = 0;
			this->Energy_chart->ChartAreas[0]->AxisX->Maximum = x;
		}

		SetCurrentDirectory(Npath);
	}


	private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		if (this->comboBox1->SelectedIndex == 0) {
			this->label15->Text = L"Energy band edge\nfor\nGaₘIn₁₋ₘPₙAs₁₋ₙ";
		}
		else {
			this->label15->Text = L"Energy band edge\nfor\nAlₘGa₁₋ₘAsₙSb₁₋ₙ";
		}
	}
	private: System::Void comboBox2_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		if (this->comboBox2->SelectedIndex == 0) {
			this->label16->Text = L"Electron effective mass\nfor\nGaₘIn₁₋ₘPₙAs₁₋ₙ";
		}
		else {
			this->label16->Text = L"Electron effective mass\nfor\nAlₘGa₁₋ₘAsₙSb₁₋ₙ";
		}
	}
	private: System::Void comboBox3_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		if (this->comboBox3->SelectedIndex == 0) {
			this->label26->Text = L"Energy band edge\nfor\nGaₘIn₁₋ₘPₙAs₁₋ₙ";
		}
		else {
			this->label26->Text = L"Energy band edge\nfor\nAlₘGa₁₋ₘAsₙSb₁₋ₙ";
		}
	}
	private: System::Void comboBox4_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		if (this->comboBox4->SelectedIndex == 0) {
			this->label27->Text = L"Electron effective mass\nfor\nGaₘIn₁₋ₘPₙAs₁₋ₙ";
		}
		else {
			this->label27->Text = L"Electron effective mass\nfor\nAlₘGa₁₋ₘAsₙSb₁₋ₙ";
		}
	}
		   
	// Plot energy bands for different x values, by y constant (amount of one element)
	private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {
		
		double temperature = static_cast<double>(numeric_temp_interpolation->Value);
		double percentage = static_cast<double>(numeric_const_n->Value);

		//Define building blocks - material, e.g. GaAs
			std::ifstream read_file("GaAs.txt"); CreateMaterial GaAs(read_file, temperature); //inside constructor file is closed
			read_file.open("AlAs.txt"); CreateMaterial AlAs(read_file, temperature);
			read_file.open("AlSb.txt"); CreateMaterial AlSb(read_file, temperature);
			read_file.open("GaP.txt"); CreateMaterial GaP(read_file, temperature);
			if (temperature > 0) {
				double temp = (exp(164 / temperature) + exp(-164 / temperature)) / (exp(164 / temperature) - exp(-164 / temperature));
				GaP.Eg += 0.1081 * (1.0 - temp); //different temperature dependence - wierd shit by low temperature
			}
			read_file.open("GaSb.txt"); CreateMaterial GaSb(read_file, temperature);
			read_file.open("InAs.txt"); CreateMaterial InAs(read_file, temperature);
			read_file.open("InP.txt"); CreateMaterial InP(read_file, temperature);

			this->Energy_x_chart->Series->Clear();
			System::Windows::Forms::DataVisualization::Charting::Series^ series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			series1->ChartArea = L"ChartArea1";
			series1->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series1->Legend = L"Legend1";
			series1->Name = L"Ec";
			this->Energy_x_chart->Series->Add(series1);
			this->Energy_x_chart->Series["Ec"]->BorderWidth = 3;
			System::Windows::Forms::DataVisualization::Charting::Series^ series2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			series2->ChartArea = L"ChartArea1";
			series2->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series2->Legend = L"Legend1";
			series2->Name = L"Ev_hh";
			this->Energy_x_chart->Series->Add(series2);
			this->Energy_x_chart->Series["Ev_hh"]->BorderWidth = 3;
			System::Windows::Forms::DataVisualization::Charting::Series^ series3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			series3->ChartArea = L"ChartArea1";
			series3->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series3->Legend = L"Legend1";
			series3->Name = L"Ev_lh";
			this->Energy_x_chart->Series->Add(series3);
			this->Energy_x_chart->Series["Ev_lh"]->BorderWidth = 3;
			System::Windows::Forms::DataVisualization::Charting::Series^ series4 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			series4->ChartArea = L"ChartArea1";
			series4->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series4->Legend = L"Legend1";
			series4->Name = L"Ev_sh";
			this->Energy_x_chart->Series->Add(series4);
			this->Energy_x_chart->Series["Ev_sh"]->BorderWidth = 3;

		bool include_strain = this->include_strain_interpolation->Checked;
		if (this->comboBox1->SelectedIndex == 0) {
			std::vector<std::vector<double>> GaInPAs_bowing(4);
			this->Energy_x_chart->Titles[L"Title1"]->Text = L"E(m) for GaₘIn₁₋ₘPₙAs₁₋ₙ";
			// -- GaInPAs
				GaInPAs_bowing[0] = std::vector<double>(5, 0.0); // WX - GaInP
				GaInPAs_bowing[0][0] = 0.65; GaInPAs_bowing[0][2] = 0.051;
				GaInPAs_bowing[1] = std::vector<double>(5, 0.0); // YZ - GaInAs
				GaInPAs_bowing[1][0] = 0.477; GaInPAs_bowing[1][1] = 0.155; GaInPAs_bowing[1][2] = 0.0091;
				GaInPAs_bowing[1][3] = -0.38; GaInPAs_bowing[1][4] = 2.61;
				GaInPAs_bowing[2] = std::vector<double>(5, 0.0); // WT - GaAsP
				GaInPAs_bowing[2][0] = 0.19;
				GaInPAs_bowing[3] = std::vector<double>(5, 0.0); // XZ - InAsP
				GaInPAs_bowing[3][0] = 0.1; GaInPAs_bowing[3][1] = 0.16;
			for (double x = 0; x <= 1; x+=0.01) {
				CreateStructure GaInPAs(temperature, GaP, InP, GaAs, InAs, x, percentage, include_strain);
				GaInPAs.InitializeComponents(GaInPAs_bowing, GaAs.lattice_const);
				this->Energy_x_chart->Series["Ec"]->Points->AddXY(x, GaInPAs.Ec);
				this->Energy_x_chart->Series["Ev_hh"]->Points->AddXY(x, GaInPAs.Ev_hh);
				this->Energy_x_chart->Series["Ev_lh"]->Points->AddXY(x, GaInPAs.Ev_lh);
				this->Energy_x_chart->Series["Ev_sh"]->Points->AddXY(x, GaInPAs.Ev_sh);
			}
		}
		else if(this->comboBox1->SelectedIndex == 1){
			std::vector<std::vector<double>> AlGaAsSb_bowing(4);
			// --AlGaAsSb
			this->Energy_x_chart->Titles[L"Title1"]->Text = L"E(m) for AlₘGa₁₋ₘAsₙSb₁₋ₙ";
			for (double x = 0; x <= 1; x+=0.01) {
				AlGaAsSb_bowing[0] = std::vector<double>(5, 0.0); // WX - AlGaAs
				AlGaAsSb_bowing[0][0] = -0.127 + 1.21 * x;
				AlGaAsSb_bowing[1] = std::vector<double>(5, 0.0); // YZ - AlGaSb
				AlGaAsSb_bowing[1][0] = -0.044 + 1.22 * x; AlGaAsSb_bowing[1][1] = 0.3;
				AlGaAsSb_bowing[2] = std::vector<double>(5, 0.0); // WY - AlAsSb
				AlGaAsSb_bowing[2][0] = 0.8; AlGaAsSb_bowing[2][1] = 0.15; AlGaAsSb_bowing[2][3] = -1.71;
				AlGaAsSb_bowing[3] = std::vector<double>(5, 0.0);
				AlGaAsSb_bowing[3][0] = 1.43; AlGaAsSb_bowing[3][1] = 0.6; AlGaAsSb_bowing[3][3] = -1.06;
				CreateStructure AlGaAsSb(temperature, AlAs, GaAs, AlSb, GaSb, x, percentage, include_strain);
				AlGaAsSb.InitializeComponents(AlGaAsSb_bowing, GaAs.lattice_const);
				this->Energy_x_chart->Series["Ec"]->Points->AddXY(x, AlGaAsSb.Ec);
				this->Energy_x_chart->Series["Ev_hh"]->Points->AddXY(x, AlGaAsSb.Ev_hh);
				this->Energy_x_chart->Series["Ev_lh"]->Points->AddXY(x, AlGaAsSb.Ev_lh);
				this->Energy_x_chart->Series["Ev_sh"]->Points->AddXY(x, AlGaAsSb.Ev_sh);
			}
		}
		else {
			String^ message = "Error 125:\n\nNo structure was chosen";
			MessageBox::Show(message, "Error");
		}
		this->Energy_x_chart->ChartAreas[0]->RecalculateAxesScale(); //autoscale
		this->Energy_x_chart->ChartAreas[0]->AxisX->Minimum = 0;
		this->Energy_x_chart->ChartAreas[0]->AxisX->Maximum = 1;
		this->Energy_x_chart->ChartAreas[0]->AxisX->Interval = 0.1;
	}
	
	// PLot energy bands for different y values, by x constant
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		double temperature = static_cast<double>(numericUpDown1->Value);
		double percentage = static_cast<double>(numeric_const_m->Value);

		//Define building blocks - material, e.g. GaAs
		std::ifstream read_file("GaAs.txt"); CreateMaterial GaAs(read_file, temperature); //inside constructor file is closed
		read_file.open("AlAs.txt"); CreateMaterial AlAs(read_file, temperature);
		read_file.open("AlSb.txt"); CreateMaterial AlSb(read_file, temperature);
		read_file.open("GaP.txt"); CreateMaterial GaP(read_file, temperature);
		if (temperature > 0) {
			double temp = (exp(164 / temperature) + exp(-164 / temperature)) / (exp(164 / temperature) - exp(-164 / temperature));
			GaP.Eg += 0.1081 * (1.0 - temp); //different temperature dependence - wierd shit by low temperature
		}
		read_file.open("GaSb.txt"); CreateMaterial GaSb(read_file, temperature);
		read_file.open("InAs.txt"); CreateMaterial InAs(read_file, temperature);
		read_file.open("InP.txt"); CreateMaterial InP(read_file, temperature);

		this->energy_y_chart->Series->Clear();
		System::Windows::Forms::DataVisualization::Charting::Series^ series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
		series1->ChartArea = L"ChartArea1";
		series1->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
		series1->Legend = L"Legend1";
		series1->Name = L"Ec";
		this->energy_y_chart->Series->Add(series1);
		this->energy_y_chart->Series["Ec"]->BorderWidth = 3;
		System::Windows::Forms::DataVisualization::Charting::Series^ series2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
		series2->ChartArea = L"ChartArea1";
		series2->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
		series2->Legend = L"Legend1";
		series2->Name = L"Ev_hh";
		this->energy_y_chart->Series->Add(series2);
		this->energy_y_chart->Series["Ev_hh"]->BorderWidth = 3;
		System::Windows::Forms::DataVisualization::Charting::Series^ series3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
		series3->ChartArea = L"ChartArea1";
		series3->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
		series3->Legend = L"Legend1";
		series3->Name = L"Ev_lh";
		this->energy_y_chart->Series->Add(series3);
		this->energy_y_chart->Series["Ev_lh"]->BorderWidth = 3;
		System::Windows::Forms::DataVisualization::Charting::Series^ series4 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
		series4->ChartArea = L"ChartArea1";
		series4->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
		series4->Legend = L"Legend1";
		series4->Name = L"Ev_sh";
		this->energy_y_chart->Series->Add(series4);
		this->energy_y_chart->Series["Ev_sh"]->BorderWidth = 3;

		bool include_strain = this->checkBox1->Checked;
		if (this->comboBox3->SelectedIndex == 0) {
			std::vector<std::vector<double>> GaInPAs_bowing(4);
			// -- GaInPAs
			this->energy_y_chart->Titles[L"Title1"]->Text = L"E(n) for GaₘIn₁₋ₘPₙAs₁₋ₙ";
			GaInPAs_bowing[0] = std::vector<double>(5, 0.0); // WX - GaInP
			GaInPAs_bowing[0][0] = 0.65; GaInPAs_bowing[0][2] = 0.051;
			GaInPAs_bowing[1] = std::vector<double>(5, 0.0); // YZ - GaInAs
			GaInPAs_bowing[1][0] = 0.477; GaInPAs_bowing[1][1] = 0.155; GaInPAs_bowing[1][2] = 0.0091;
			GaInPAs_bowing[1][3] = -0.38; GaInPAs_bowing[1][4] = 2.61;
			GaInPAs_bowing[2] = std::vector<double>(5, 0.0); // WT - GaAsP
			GaInPAs_bowing[2][0] = 0.19;
			GaInPAs_bowing[3] = std::vector<double>(5, 0.0); // XZ - InAsP
			GaInPAs_bowing[3][0] = 0.1; GaInPAs_bowing[3][1] = 0.16;
			for (double y = 0; y <= 1; y+=0.01) {
				CreateStructure GaInPAs(temperature, GaP, InP, GaAs, InAs, percentage, y, include_strain);
				GaInPAs.InitializeComponents(GaInPAs_bowing, GaAs.lattice_const);
				this->energy_y_chart->Series["Ec"]->Points->AddXY(y, GaInPAs.Ec);
				this->energy_y_chart->Series["Ev_hh"]->Points->AddXY(y, GaInPAs.Ev_hh);
				this->energy_y_chart->Series["Ev_lh"]->Points->AddXY(y, GaInPAs.Ev_lh);
				this->energy_y_chart->Series["Ev_sh"]->Points->AddXY(y, GaInPAs.Ev_sh);
			}
		}
		else if(this->comboBox3->SelectedIndex == 1){
			std::vector<std::vector<double>> AlGaAsSb_bowing(4);
			// --AlGaAsSb
			this->energy_y_chart->Titles[L"Title1"]->Text = L"E(n) for AlₘGa₁₋ₘAsₙSb₁₋ₙ";
				AlGaAsSb_bowing[0] = std::vector<double>(5, 0.0); // WX - AlGaAs
				AlGaAsSb_bowing[0][0] = -0.127 + 1.21 * percentage;
				AlGaAsSb_bowing[1] = std::vector<double>(5, 0.0); // YZ - AlGaSb
				AlGaAsSb_bowing[1][0] = -0.044 + 1.22 * percentage; AlGaAsSb_bowing[1][1] = 0.3;
				AlGaAsSb_bowing[2] = std::vector<double>(5, 0.0); // WY - AlAsSb
				AlGaAsSb_bowing[2][0] = 0.8; AlGaAsSb_bowing[2][1] = 0.15; AlGaAsSb_bowing[2][3] = -1.71;
				AlGaAsSb_bowing[3] = std::vector<double>(5, 0.0); // XZ - GaAsSb
				AlGaAsSb_bowing[3][0] = 1.43; AlGaAsSb_bowing[3][1] = 0.6; AlGaAsSb_bowing[3][3] = -1.06;
			for (double y = 0; y <= 1; y+=0.01) {
				CreateStructure AlGaAsSb(temperature, AlAs, GaAs, AlSb, GaSb, percentage, y, include_strain);
				AlGaAsSb.InitializeComponents(AlGaAsSb_bowing, GaAs.lattice_const);
				this->energy_y_chart->Series["Ec"]->Points->AddXY(y, AlGaAsSb.Ec);
				this->energy_y_chart->Series["Ev_hh"]->Points->AddXY(y, AlGaAsSb.Ev_hh);
				this->energy_y_chart->Series["Ev_lh"]->Points->AddXY(y, AlGaAsSb.Ev_lh);
				this->energy_y_chart->Series["Ev_sh"]->Points->AddXY(y, AlGaAsSb.Ev_sh);
			}
		}
		else {
			String^ message = "Error 125:\n\nNo structure was chosen";
			MessageBox::Show(message, "Error");
		}
		this->energy_y_chart->ChartAreas[0]->RecalculateAxesScale(); //autoscale
		this->energy_y_chart->ChartAreas[0]->AxisX->Minimum = 0;
		this->energy_y_chart->ChartAreas[0]->AxisX->Maximum = 1;
		this->energy_y_chart->ChartAreas[0]->AxisX->Interval = 0.1;

	}


	// Ploteffective mass for different x values
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		double temperature = static_cast<double>(numeric_temp_interpolation->Value); //doesn't matter what temperature I guess
		double percentage = static_cast<double>(num_n_const_mass->Value);

		//Define building blocks - material, e.g. GaAs
		std::ifstream read_file("GaAs.txt"); CreateMaterial GaAs(read_file, temperature); //inside constructor file is closed
		read_file.open("AlAs.txt"); CreateMaterial AlAs(read_file, temperature);
		read_file.open("AlSb.txt"); CreateMaterial AlSb(read_file, temperature);
		read_file.open("GaP.txt"); CreateMaterial GaP(read_file, temperature);
		if (temperature > 0) {
			double temp = (exp(164 / temperature) + exp(-164 / temperature)) / (exp(164 / temperature) - exp(-164 / temperature));
			GaP.Eg += 0.1081 * (1.0 - temp); //different temperature dependence - wierd shit by low temperature
		}
		read_file.open("GaSb.txt"); CreateMaterial GaSb(read_file, temperature);
		read_file.open("InAs.txt"); CreateMaterial InAs(read_file, temperature);
		read_file.open("InP.txt"); CreateMaterial InP(read_file, temperature);

		this->mass_x_chart->Series->Clear();
		System::Windows::Forms::DataVisualization::Charting::Series^ series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
		series1->ChartArea = L"ChartArea1";
		series1->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
		series1->Legend = L"Legend1";
		series1->Name = L"electron\neffective\nmass\nm_e";
		this->mass_x_chart->Series->Add(series1);
		this->mass_x_chart->Series["electron\neffective\nmass\nm_e"]->BorderWidth = 3;

		bool include_strain = true; // - why not?, does not affect mass this->include_strain_mass->Checked;
		if (this->comboBox2->SelectedIndex == 0) {
			std::vector<std::vector<double>> GaInPAs_bowing(4);
			// -- GaInPAs
			this->mass_x_chart->Titles[L"Title1"]->Text = L"E(m) for GaₘIn₁₋ₘPₙAs₁₋ₙ";
			GaInPAs_bowing[0] = std::vector<double>(5, 0.0); // WX - GaInP
			GaInPAs_bowing[0][0] = 0.65; GaInPAs_bowing[0][2] = 0.051;
			GaInPAs_bowing[1] = std::vector<double>(5, 0.0); // YZ - GaInAs
			GaInPAs_bowing[1][0] = 0.477; GaInPAs_bowing[1][1] = 0.155; GaInPAs_bowing[1][2] = 0.0091;
			GaInPAs_bowing[1][3] = -0.38; GaInPAs_bowing[1][4] = 2.61;
			GaInPAs_bowing[2] = std::vector<double>(5, 0.0); // WT - GaAsP
			GaInPAs_bowing[2][0] = 0.19;
			GaInPAs_bowing[3] = std::vector<double>(5, 0.0); // XZ - InAsP
			GaInPAs_bowing[3][0] = 0.1; GaInPAs_bowing[3][1] = 0.16;
			for (double x = 0; x <= 1; x+=0.01) {
				CreateStructure GaInPAs(temperature, GaP, InP, GaAs, InAs, x, percentage, include_strain);
				GaInPAs.InitializeComponents(GaInPAs_bowing, GaAs.lattice_const);
				this->mass_x_chart->Series["electron\neffective\nmass\nm_e"]->Points->AddXY(x, GaInPAs.m_e);
			}
		}
		else if(this->comboBox2->SelectedIndex == 1){
			std::vector<std::vector<double>> AlGaAsSb_bowing(4);
			// --AlGaAsSb
			this->mass_x_chart->Titles[L"Title1"]->Text = L"E(m) for AlₘGa₁₋ₘAsₙSb₁₋ₙ";
			for (double x = 0; x <= 1; x+=0.01) {
				AlGaAsSb_bowing[0] = std::vector<double>(5, 0.0); // WX - AlGaAs
				AlGaAsSb_bowing[0][0] = -0.127 + 1.21 * x;
				AlGaAsSb_bowing[1] = std::vector<double>(5, 0.0); // YZ - AlGaSb
				AlGaAsSb_bowing[1][0] = -0.044 + 1.22 * x; AlGaAsSb_bowing[1][1] = 0.3;
				AlGaAsSb_bowing[2] = std::vector<double>(5, 0.0); // WY - AlAsSb
				AlGaAsSb_bowing[2][0] = 0.8; AlGaAsSb_bowing[2][1] = 0.15; AlGaAsSb_bowing[2][3] = -1.71;
				AlGaAsSb_bowing[3] = std::vector<double>(5, 0.0);
				AlGaAsSb_bowing[3][0] = 1.43; AlGaAsSb_bowing[3][1] = 0.6; AlGaAsSb_bowing[3][3] = -1.06;
				CreateStructure AlGaAsSb(temperature, AlAs, GaAs, AlSb, GaSb, x, percentage, include_strain);
				AlGaAsSb.InitializeComponents(AlGaAsSb_bowing, GaAs.lattice_const);
				this->mass_x_chart->Series["electron\neffective\nmass\nm_e"]->Points->AddXY(x, AlGaAsSb.m_e);
			}
		}
		else {
			String^ message = "Error 125:\n\nNo structure was chosen";
			MessageBox::Show(message, "Error");
		}
		this->mass_x_chart->ChartAreas[0]->RecalculateAxesScale(); //autoscale
		this->mass_x_chart->ChartAreas[0]->AxisX->Minimum = 0;
		this->mass_x_chart->ChartAreas[0]->AxisX->Maximum = 1;
		this->mass_x_chart->ChartAreas[0]->AxisX->Interval = 0.1;

	}

	// Ploteffective mass for different y values
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		double temperature = static_cast<double>(numeric_temp_interpolation->Value); //doesn't matter what temperature I guess
		double percentage = static_cast<double>(num_m_const_mass->Value);

		//Define building blocks - material, e.g. GaAs
			std::ifstream read_file("GaAs.txt"); CreateMaterial GaAs(read_file, temperature); //inside constructor file is closed
			read_file.open("AlAs.txt"); CreateMaterial AlAs(read_file, temperature);
			read_file.open("AlSb.txt"); CreateMaterial AlSb(read_file, temperature);
			read_file.open("GaP.txt"); CreateMaterial GaP(read_file, temperature);
			if (temperature > 0) {
				double temp = (exp(164 / temperature) + exp(-164 / temperature)) / (exp(164 / temperature) - exp(-164 / temperature));
				GaP.Eg += 0.1081 * (1.0 - temp); //different temperature dependence - wierd shit by low temperature
			}
			read_file.open("GaSb.txt"); CreateMaterial GaSb(read_file, temperature);
			read_file.open("InAs.txt"); CreateMaterial InAs(read_file, temperature);
			read_file.open("InP.txt"); CreateMaterial InP(read_file, temperature);

		this->mass_y_chart->Series->Clear();
		System::Windows::Forms::DataVisualization::Charting::Series^ series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
		series1->ChartArea = L"ChartArea1";
		series1->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
		series1->Legend = L"Legend1";
		series1->Name = L"electron\neffective\nmass\nm_e";
		this->mass_y_chart->Series->Add(series1);
		this->mass_y_chart->Series["electron\neffective\nmass\nm_e"]->BorderWidth = 3;

		bool include_strain = true; // - why not?, does not affect mass this->include_strain_mass->Checked;
		if (this->comboBox4->SelectedIndex == 0) {
			std::vector<std::vector<double>> GaInPAs_bowing(4);
			// -- GaInPAs
			this->mass_y_chart->Titles[L"Title1"]->Text = L"E(n) for GaₘIn₁₋ₘPₙAs₁₋ₙ";
				GaInPAs_bowing[0] = std::vector<double>(5, 0.0); // WX - GaInP
				GaInPAs_bowing[0][0] = 0.65; GaInPAs_bowing[0][2] = 0.051;
				GaInPAs_bowing[1] = std::vector<double>(5, 0.0); // YZ - GaInAs
				GaInPAs_bowing[1][0] = 0.477; GaInPAs_bowing[1][1] = 0.155; GaInPAs_bowing[1][2] = 0.0091;
				GaInPAs_bowing[1][3] = -0.38; GaInPAs_bowing[1][4] = 2.61;
				GaInPAs_bowing[2] = std::vector<double>(5, 0.0); // WT - GaAsP
				GaInPAs_bowing[2][0] = 0.19;
				GaInPAs_bowing[3] = std::vector<double>(5, 0.0); // XZ - InAsP
				GaInPAs_bowing[3][0] = 0.1; GaInPAs_bowing[3][1] = 0.16;
				for (double y = 0; y <= 1; y+=0.01) {
				CreateStructure GaInPAs(temperature, GaP, InP, GaAs, InAs, percentage, y, include_strain);
				GaInPAs.InitializeComponents(GaInPAs_bowing, GaAs.lattice_const);
				this->mass_y_chart->Series["electron\neffective\nmass\nm_e"]->Points->AddXY(y, GaInPAs.m_e);
			}
		}
		else if(this->comboBox4->SelectedIndex == 1){
			std::vector<std::vector<double>> AlGaAsSb_bowing(4);
			// --AlGaAsSb
			this->mass_y_chart->Titles[L"Title1"]->Text = L"E(n) for AlₘGa₁₋ₘAsₙSb₁₋ₙ";
			AlGaAsSb_bowing[0] = std::vector<double>(5, 0.0); // WX - AlGaAs
			AlGaAsSb_bowing[0][0] = -0.127 + 1.21 * percentage;
			AlGaAsSb_bowing[1] = std::vector<double>(5, 0.0); // YZ - AlGaSb
			AlGaAsSb_bowing[1][0] = -0.044 + 1.22 * percentage; AlGaAsSb_bowing[1][1] = 0.3;
			AlGaAsSb_bowing[2] = std::vector<double>(5, 0.0); // WY - AlAsSb
			AlGaAsSb_bowing[2][0] = 0.8; AlGaAsSb_bowing[2][1] = 0.15; AlGaAsSb_bowing[2][3] = -1.71;
			AlGaAsSb_bowing[3] = std::vector<double>(5, 0.0);
			AlGaAsSb_bowing[3][0] = 1.43; AlGaAsSb_bowing[3][1] = 0.6; AlGaAsSb_bowing[3][3] = -1.06;
			for (double y = 0; y <= 1; y+=0.01) {
				CreateStructure AlGaAsSb(temperature, AlAs, GaAs, AlSb, GaSb, percentage, y, include_strain);
				AlGaAsSb.InitializeComponents(AlGaAsSb_bowing, GaAs.lattice_const);
				this->mass_y_chart->Series["electron\neffective\nmass\nm_e"]->Points->AddXY(y, AlGaAsSb.m_e);
			}
		}
		else {
			String^ message = "Error 125:\n\nNo structure was chosen";
			MessageBox::Show(message, "Error");
		}
		this->mass_y_chart->ChartAreas[0]->RecalculateAxesScale(); //autoscale
		this->mass_y_chart->ChartAreas[0]->AxisX->Minimum = 0;
		this->mass_y_chart->ChartAreas[0]->AxisX->Maximum = 1;
		this->mass_y_chart->ChartAreas[0]->AxisX->Interval = 0.1;
	}
	

	//------------------------------ADITIONAL NONSENSE-------------------------
	// like
	private: System::Void pictureBox3_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ num = this->label24->Text;
		std::string num2 = msclr::interop::marshal_as<std::string>(num); //converting String^ to string
		int num3 = std::stoi(num2);
		std::ofstream likefile("Like.txt");
		num3++;
		likefile << std::to_string(num3);
		num = gcnew String(std::to_string(num3).c_str());
		this->label24->Text = num;
		likefile.close();
	}
	// Dislike
	private: System::Void pictureBox4_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ message = "HA!\n As if I let you do it!";
		MessageBox::Show(message, "Error");
		Application::Exit();
	}
	//-------------------------------------------------------------------------


	// ----------------------Save & Load energy and effective mass interpolation data-----------------------
	
	//Energy for x save 
	private: System::Void save_E_x_button_Click(System::Object^ sender, System::EventArgs^ e) {
		double temperature = static_cast<double>(numeric_temp_interpolation->Value);
		double percentage = static_cast<double>(numeric_const_n->Value);

		//Define building blocks - material, e.g. GaAs
			std::ifstream read_file("GaAs.txt"); CreateMaterial GaAs(read_file, temperature); //inside constructor file is closed
			read_file.open("AlAs.txt"); CreateMaterial AlAs(read_file, temperature);
			read_file.open("AlSb.txt"); CreateMaterial AlSb(read_file, temperature);
			read_file.open("GaP.txt"); CreateMaterial GaP(read_file, temperature);
			if (temperature > 0) {
				double temp = (exp(164 / temperature) + exp(-164 / temperature)) / (exp(164 / temperature) - exp(-164 / temperature));
				GaP.Eg += 0.1081 * (1.0 - temp); //different temperature dependence - wierd shit by low temperature
			}
			read_file.open("GaSb.txt"); CreateMaterial GaSb(read_file, temperature);
			read_file.open("InAs.txt"); CreateMaterial InAs(read_file, temperature);
			read_file.open("InP.txt"); CreateMaterial InP(read_file, temperature);
			bool include_strain = this->include_strain_interpolation->Checked;

		SaveFileDialog saveFileDialog;
		std::string name = "./DATA/";
		TCHAR Npath[MAX_PATH];
		GetCurrentDirectory(MAX_PATH, Npath);
		CreateDirectory(L"./DATA/", NULL);
		SetCurrentDirectory(L"./DATA/");

		saveFileDialog.InitialDirectory = gcnew String(name.c_str());
		saveFileDialog.Filter = "txt files (*.txt)|*.txt|All files (*.*)|*.*";
		saveFileDialog.FilterIndex = 1;
		saveFileDialog.RestoreDirectory = true;

		std::ostringstream perc, T;
		perc << std::setprecision(2) << percentage;
		T << std::setprecision(0) << temperature;
		name = "E(x)__for_y=" + perc.str() + "_T=" + T.str() + ".txt";

		saveFileDialog.FileName = gcnew String(name.c_str());
		if (this->comboBox1->SelectedIndex == 0 || this->comboBox1->SelectedIndex == 1) {
			if (saveFileDialog.ShowDialog() == System::Windows::Forms::DialogResult::OK) {

				//Writing to File
						//System::IO::StreamWriter^ outfile = gcnew System::IO::StreamWriter(saveFileDialog.FileName);
				System::IO::Stream^ strim = saveFileDialog.OpenFile();
				System::IO::StreamWriter^ outfile = gcnew System::IO::StreamWriter(strim);
				std::ostringstream energy_data;
				energy_data << std::fixed << std::setprecision(4);
				if (this->comboBox1->SelectedIndex == 0) {
					std::vector<std::vector<double>> GaInPAs_bowing(4);
					// -- GaInPAs
					GaInPAs_bowing[0] = std::vector<double>(5, 0.0); // WX - GaInP
					GaInPAs_bowing[0][0] = 0.65; GaInPAs_bowing[0][2] = 0.051;
					GaInPAs_bowing[1] = std::vector<double>(5, 0.0); // YZ - GaInAs
					GaInPAs_bowing[1][0] = 0.477; GaInPAs_bowing[1][1] = 0.155; GaInPAs_bowing[1][2] = 0.0091;
					GaInPAs_bowing[1][3] = -0.38; GaInPAs_bowing[1][4] = 2.61;
					GaInPAs_bowing[2] = std::vector<double>(5, 0.0); // WT - GaAsP
					GaInPAs_bowing[2][0] = 0.19;
					GaInPAs_bowing[3] = std::vector<double>(5, 0.0); // XZ - InAsP
					GaInPAs_bowing[3][0] = 0.1; GaInPAs_bowing[3][1] = 0.16;


					outfile->Write("-------------------------------------PARAMETERS: -------------------------------------\n");
					outfile->Write(L"Structure:\tGaₘIn₁₋ₘPₙAs₁₋ₙ\n");
					std::string file_write = "y = " + perc.str() + "\nT = " + T.str();
					outfile->Write(gcnew String(file_write.c_str()));
					outfile->Write("\n-------------------------------------ENERGY DATA: -------------------------------------\
	\n\nx\t\tEc [eV]\t\tEv_hh [eV]\tEv_lh [eV]\tEv_sh [eV]\n");
					for (double x = 0; x <= 1; x += 0.01) {
						CreateStructure GaInPAs(temperature, GaP, InP, GaAs, InAs, x, percentage, include_strain);
						GaInPAs.InitializeComponents(GaInPAs_bowing, GaAs.lattice_const);
						energy_data << x << "\t\t" << GaInPAs.Ec << "\t\t" << GaInPAs.Ev_hh << "\t\t" << GaInPAs.Ev_lh << "\t\t" << GaInPAs.Ev_sh << std::endl;
					}
				}
				else {
					std::vector<std::vector<double>> AlGaAsSb_bowing(4);
					// --AlGaAsSb


					outfile->Write("-------------------------------------PARAMETERS: -------------------------------------\n");
					outfile->Write(L"Structure:\tAlₘGa₁₋ₘAsₙSb₁₋ₙ\n");
					std::string file_write = "n = " + perc.str() + "\nT = " + T.str();
					outfile->Write(gcnew String(file_write.c_str()));
					outfile->Write("\n-------------------------------------ENERGY DATA: -------------------------------------\
	\n\nm\t\tEc [eV]\t\tEv_hh [eV]\tEv_lh [eV]\tEv_sh [eV]\n");
					for (double x = 0; x <= 1; x += 0.01) {
						AlGaAsSb_bowing[0] = std::vector<double>(5, 0.0); // WX - AlGaAs
						AlGaAsSb_bowing[0][0] = -0.127 + 1.21 * x;
						AlGaAsSb_bowing[1] = std::vector<double>(5, 0.0); // YZ - AlGaSb
						AlGaAsSb_bowing[1][0] = -0.044 + 1.22 * x; AlGaAsSb_bowing[1][1] = 0.3;
						AlGaAsSb_bowing[2] = std::vector<double>(5, 0.0); // WY - AlAsSb
						AlGaAsSb_bowing[2][0] = 0.8; AlGaAsSb_bowing[2][1] = 0.15; AlGaAsSb_bowing[2][3] = -1.71;
						AlGaAsSb_bowing[3] = std::vector<double>(5, 0.0);
						AlGaAsSb_bowing[3][0] = 1.43; AlGaAsSb_bowing[3][1] = 0.6; AlGaAsSb_bowing[3][3] = -1.06;
						CreateStructure AlGaAsSb(temperature, AlAs, GaAs, AlSb, GaSb, x, percentage, include_strain);
						AlGaAsSb.InitializeComponents(AlGaAsSb_bowing, GaAs.lattice_const);
						energy_data << x << "\t\t" << AlGaAsSb.Ec << "\t\t" << AlGaAsSb.Ev_hh << "\t\t" << AlGaAsSb.Ev_lh << "\t\t" << AlGaAsSb.Ev_sh << std::endl;
					}
				}
				outfile->Write(gcnew String((energy_data.str()).c_str()));

				outfile->Close();

			}
		}
		else {
			String^ message = "Error 125:\n\nNo structure was chosen";
			MessageBox::Show(message, "Error");
		}
		SetCurrentDirectory(Npath);
	}

	// Energy for x load
	private: System::Void Load_E_x_button_Click(System::Object^ sender, System::EventArgs^ e) {
		TCHAR Npath[MAX_PATH];
		GetCurrentDirectory(MAX_PATH, Npath);
		CreateDirectory(L"./DATA/", NULL);
		SetCurrentDirectory(L"./DATA/");
		OpenFileDialog openFileDialog;
		openFileDialog.InitialDirectory = L"./DATA/";
		openFileDialog.Filter = "txt files (*.txt)|*.txt|All files (*.*)|*.*";
		openFileDialog.FilterIndex = 1;
		openFileDialog.RestoreDirectory = true;
	label_redo:

		auto result = openFileDialog.ShowDialog();

		if (result == System::Windows::Forms::DialogResult::OK) {
			String^ filePath = openFileDialog.FileName;
			std::string name = msclr::interop::marshal_as<std::string>(filePath);
			std::string name_stay_put = name;
			//Remove filepath  and get only name
				const size_t last_slash_idx = name.find_last_of("\\/");
				if (std::string::npos != last_slash_idx) {
					name.erase(0, last_slash_idx + 1);
				}
			//----------
				if (name[2] == 'y') {
					String^ message = "Error 5223:\nYou've picked E(y) for E(x) graph you Moron!!\nPick again!\n\nThanks :)";
					MessageBox::Show(message, "Error");
					goto label_redo;
				}
				else if (name[2] == 'x') goto label_continue;
				else {
					String^ message = "Error 5223:\nInvalid input file!!\nPick again!\n\nThanks :)";
					MessageBox::Show(message, "Error");
					goto label_redo;
				}
		label_continue:
			this->Energy_x_chart->Series->Clear();
			System::Windows::Forms::DataVisualization::Charting::Series^ series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			series1->ChartArea = L"ChartArea1";
			series1->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series1->Legend = L"Legend1";
			series1->Name = L"Ec";
			this->Energy_x_chart->Series->Add(series1);
			this->Energy_x_chart->Series["Ec"]->BorderWidth = 3;
			System::Windows::Forms::DataVisualization::Charting::Series^ series2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			series2->ChartArea = L"ChartArea1";
			series2->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series2->Legend = L"Legend1";
			series2->Name = L"Ev_hh";
			this->Energy_x_chart->Series->Add(series2);
			this->Energy_x_chart->Series["Ev_hh"]->BorderWidth = 3;
			System::Windows::Forms::DataVisualization::Charting::Series^ series3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			series3->ChartArea = L"ChartArea1";
			series3->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series3->Legend = L"Legend1";
			series3->Name = L"Ev_lh";
			this->Energy_x_chart->Series->Add(series3);
			this->Energy_x_chart->Series["Ev_lh"]->BorderWidth = 3;
			System::Windows::Forms::DataVisualization::Charting::Series^ series4 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			series4->ChartArea = L"ChartArea1";
			series4->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series4->Legend = L"Legend1";
			series4->Name = L"Ev_sh";
			this->Energy_x_chart->Series->Add(series4);
			this->Energy_x_chart->Series["Ev_sh"]->BorderWidth = 3;

			std::ifstream loadfile(name_stay_put);

			//Reading data from file
				std::string content; int iterator = 0;
				double x, y1, y2, y3, y4;
				std::string structure;
				while (std::getline(loadfile, content)) {
					if (iterator == 0) {
						loadfile >> structure >> content;
						if (content[0] == 'A')
							this->Energy_x_chart->Titles[L"Title1"]->Text = L"E(m) for AlₘGa₁₋ₘAsₙSb₁₋ₙ";
						else if (content[0] == 'G')
							this->Energy_x_chart->Titles[L"Title1"]->Text = L"E(m) for GaₘIn₁₋ₘPₙAs₁₋ₙ";
						else {
							String^ message = "Error 8923:\nUnknown structure in file or wrong input file chosen!\nPlease check, whether\
	 the input file is either\n\nGaInPAs\t\tor\tAlGaAsSb!\n\nThanks :)";
							MessageBox::Show(message, "Error");
							Application::Exit();
						}
					}
					if (iterator >= 6) {
						loadfile >> x >> y1 >> y2 >> y3 >> y4;
						this->Energy_x_chart->Series["Ec"]->Points->AddXY(x, y1);
						this->Energy_x_chart->Series["Ev_hh"]->Points->AddXY(x, y2);
						this->Energy_x_chart->Series["Ev_lh"]->Points->AddXY(x, y3);
						this->Energy_x_chart->Series["Ev_sh"]->Points->AddXY(x, y4);
					}
					iterator += 1;
				}
			loadfile.close();

			this->Energy_x_chart->ChartAreas[0]->RecalculateAxesScale(); //autoscale
			this->Energy_x_chart->ChartAreas[0]->AxisX->Minimum = 0;
			this->Energy_x_chart->ChartAreas[0]->AxisX->Maximum = x;
		}

		SetCurrentDirectory(Npath);

	}
	
	//Energy for y save
	private: System::Void save_E_y_button_Click(System::Object^ sender, System::EventArgs^ e) {
		double temperature = static_cast<double>(numeric_temp_interpolation->Value);
		double percentage = static_cast<double>(numeric_const_m->Value);

		//Define building blocks - material, e.g. GaAs
		std::ifstream read_file("GaAs.txt"); CreateMaterial GaAs(read_file, temperature); //inside constructor file is closed
		read_file.open("AlAs.txt"); CreateMaterial AlAs(read_file, temperature);
		read_file.open("AlSb.txt"); CreateMaterial AlSb(read_file, temperature);
		read_file.open("GaP.txt"); CreateMaterial GaP(read_file, temperature);
		if (temperature > 0) {
			double temp = (exp(164 / temperature) + exp(-164 / temperature)) / (exp(164 / temperature) - exp(-164 / temperature));
			GaP.Eg += 0.1081 * (1.0 - temp); //different temperature dependence - wierd shit by low temperature
		}
		read_file.open("GaSb.txt"); CreateMaterial GaSb(read_file, temperature);
		read_file.open("InAs.txt"); CreateMaterial InAs(read_file, temperature);
		read_file.open("InP.txt"); CreateMaterial InP(read_file, temperature);
		bool include_strain = this->include_strain_interpolation->Checked;

		SaveFileDialog saveFileDialog;
		std::string name = "./DATA/";
		TCHAR Npath[MAX_PATH];
		GetCurrentDirectory(MAX_PATH, Npath);
		CreateDirectory(L"./DATA/", NULL);
		SetCurrentDirectory(L"./DATA/");

		saveFileDialog.InitialDirectory = gcnew String(name.c_str());
		saveFileDialog.Filter = "txt files (*.txt)|*.txt|All files (*.*)|*.*";
		saveFileDialog.FilterIndex = 1;
		saveFileDialog.RestoreDirectory = true;

		std::ostringstream perc, T;
		perc << std::setprecision(2) << percentage;
		T << std::setprecision(0) << temperature;
		name = "E(y)__for_x=" + perc.str() + "_T=" + T.str() + ".txt";

		saveFileDialog.FileName = gcnew String(name.c_str());
		if (this->comboBox1->SelectedIndex == 0 || this->comboBox1->SelectedIndex == 1) {
			if (saveFileDialog.ShowDialog() == System::Windows::Forms::DialogResult::OK) {

				//Writing to File
						//System::IO::StreamWriter^ outfile = gcnew System::IO::StreamWriter(saveFileDialog.FileName);
				System::IO::Stream^ strim = saveFileDialog.OpenFile();
				System::IO::StreamWriter^ outfile = gcnew System::IO::StreamWriter(strim);
				std::ostringstream energy_data;
				energy_data << std::fixed << std::setprecision(4);
				if (this->comboBox1->SelectedIndex == 0) {
					std::vector<std::vector<double>> GaInPAs_bowing(4);
					// -- GaInPAs
					GaInPAs_bowing[0] = std::vector<double>(5, 0.0); // WX - GaInP
					GaInPAs_bowing[0][0] = 0.65; GaInPAs_bowing[0][2] = 0.051;
					GaInPAs_bowing[1] = std::vector<double>(5, 0.0); // YZ - GaInAs
					GaInPAs_bowing[1][0] = 0.477; GaInPAs_bowing[1][1] = 0.155; GaInPAs_bowing[1][2] = 0.0091;
					GaInPAs_bowing[1][3] = -0.38; GaInPAs_bowing[1][4] = 2.61;
					GaInPAs_bowing[2] = std::vector<double>(5, 0.0); // WT - GaAsP
					GaInPAs_bowing[2][0] = 0.19;
					GaInPAs_bowing[3] = std::vector<double>(5, 0.0); // XZ - InAsP
					GaInPAs_bowing[3][0] = 0.1; GaInPAs_bowing[3][1] = 0.16;


					outfile->Write("-------------------------------------PARAMETERS: -------------------------------------\n");
					outfile->Write(L"Structure:\tGaₘIn₁₋ₘPₙAs₁₋ₙ\n");
					std::string file_write = "y = " + perc.str() + "\nT = " + T.str();
					outfile->Write(gcnew String(file_write.c_str()));
					outfile->Write("\n-------------------------------------ENERGY DATA: -------------------------------------\
		\n\nx\t\tEc [eV]\t\tEv_hh [eV]\tEv_lh [eV]\tEv_sh [eV]\n");
					for (double y = 0; y <= 1; y += 0.01) {
						CreateStructure GaInPAs(temperature, GaP, InP, GaAs, InAs, percentage, y, true);
						GaInPAs.InitializeComponents(GaInPAs_bowing, GaAs.lattice_const);
						energy_data << y << "\t\t" << GaInPAs.Ec << "\t\t" << GaInPAs.Ev_hh << "\t\t" << GaInPAs.Ev_lh << "\t\t" << GaInPAs.Ev_sh << std::endl;
					}
				}
				else {
					std::vector<std::vector<double>> AlGaAsSb_bowing(4);
					// --AlGaAsSb
					AlGaAsSb_bowing[0] = std::vector<double>(5, 0.0); // WX - AlGaAs
					AlGaAsSb_bowing[0][0] = -0.127 + 1.21 * percentage;
					AlGaAsSb_bowing[1] = std::vector<double>(5, 0.0); // YZ - AlGaSb
					AlGaAsSb_bowing[1][0] = -0.044 + 1.22 * percentage; AlGaAsSb_bowing[1][1] = 0.3;
					AlGaAsSb_bowing[2] = std::vector<double>(5, 0.0); // WY - AlAsSb
					AlGaAsSb_bowing[2][0] = 0.8; AlGaAsSb_bowing[2][1] = 0.15; AlGaAsSb_bowing[2][3] = -1.71;
					AlGaAsSb_bowing[3] = std::vector<double>(5, 0.0);
					AlGaAsSb_bowing[3][0] = 1.43; AlGaAsSb_bowing[3][1] = 0.6; AlGaAsSb_bowing[3][3] = -1.06;

					outfile->Write("-------------------------------------PARAMETERS: -------------------------------------\n");
					outfile->Write(L"Structure:\tAlₘGa₁₋ₘAsₙSb₁₋ₙ\n");
					std::string file_write = "n = " + perc.str() + "\nT = " + T.str();
					outfile->Write(gcnew String(file_write.c_str()));
					outfile->Write("\n-------------------------------------ENERGY DATA: -------------------------------------\
		\n\nm\t\tEc [eV]\t\tEv_hh [eV]\tEv_lh [eV]\tEv_sh [eV]\n");
					for (double y = 0; y <= 1; y += 0.01) {
						CreateStructure AlGaAsSb(temperature, AlAs, GaAs, AlSb, GaSb, percentage, y, true);
						AlGaAsSb.InitializeComponents(AlGaAsSb_bowing, GaAs.lattice_const);
						energy_data << y << "\t\t" << AlGaAsSb.Ec << "\t\t" << AlGaAsSb.Ev_hh << "\t\t" << AlGaAsSb.Ev_lh << "\t\t" << AlGaAsSb.Ev_sh << std::endl;
					}
				}
				outfile->Write(gcnew String((energy_data.str()).c_str()));

				outfile->Close();

			}
		}
		else {
			String^ message = "Error 125:\n\nNo structure was chosen";
			MessageBox::Show(message, "Error");
		}
		SetCurrentDirectory(Npath);
	}
	
	// Energy for y load
	private: System::Void load_E_y_button_Click(System::Object^ sender, System::EventArgs^ e) {
		TCHAR Npath[MAX_PATH];
		GetCurrentDirectory(MAX_PATH, Npath);
		CreateDirectory(L"./DATA/", NULL);
		SetCurrentDirectory(L"./DATA/");
		OpenFileDialog openFileDialog;
		openFileDialog.InitialDirectory = L"./DATA/";
		openFileDialog.Filter = "txt files (*.txt)|*.txt|All files (*.*)|*.*";
		openFileDialog.FilterIndex = 1;
		openFileDialog.RestoreDirectory = true;
	label_redo:
		auto result = openFileDialog.ShowDialog();

		if (result == System::Windows::Forms::DialogResult::OK) {
			String^ filePath = openFileDialog.FileName;
			std::string name = msclr::interop::marshal_as<std::string>(filePath);
			std::string name_stay_put = name;
			//Remove filepath  and get only name
			const size_t last_slash_idx = name.find_last_of("\\/");
			if (std::string::npos != last_slash_idx) {
				name.erase(0, last_slash_idx + 1);
			}
			//----------
			if (name[2] == 'x') {
				String^ message = "Error 5223:\nYou've picked E(x) for E(y) graph you Moron\nPick again!\n\nThanks :)";
				MessageBox::Show(message, "Error");
				goto label_redo;
			}
			else if (name[2] == 'y') goto label_continue;
			else {
				String^ message = "Error 5223:\nInvalid input file!!\nPick again!\n\nThanks :)";
				MessageBox::Show(message, "Error");
				goto label_redo;
			}
		label_continue:
			this->energy_y_chart->Series->Clear();
			System::Windows::Forms::DataVisualization::Charting::Series^ series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			series1->ChartArea = L"ChartArea1";
			series1->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series1->Legend = L"Legend1";
			series1->Name = L"Ec";
			this->energy_y_chart->Series->Add(series1);
			this->energy_y_chart->Series["Ec"]->BorderWidth = 3;
			System::Windows::Forms::DataVisualization::Charting::Series^ series2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			series2->ChartArea = L"ChartArea1";
			series2->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series2->Legend = L"Legend1";
			series2->Name = L"Ev_hh";
			this->energy_y_chart->Series->Add(series2);
			this->energy_y_chart->Series["Ev_hh"]->BorderWidth = 3;
			System::Windows::Forms::DataVisualization::Charting::Series^ series3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			series3->ChartArea = L"ChartArea1";
			series3->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series3->Legend = L"Legend1";
			series3->Name = L"Ev_lh";
			this->energy_y_chart->Series->Add(series3);
			this->energy_y_chart->Series["Ev_lh"]->BorderWidth = 3;
			System::Windows::Forms::DataVisualization::Charting::Series^ series4 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			series4->ChartArea = L"ChartArea1";
			series4->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series4->Legend = L"Legend1";
			series4->Name = L"Ev_sh";
			this->energy_y_chart->Series->Add(series4);
			this->energy_y_chart->Series["Ev_sh"]->BorderWidth = 3;


			std::ifstream loadfile(name_stay_put);

			//Reading data from file
			std::string content; int iterator = 0;
			double x, y1, y2, y3, y4;
			std::string structure;
			while (std::getline(loadfile, content)) {
				if (iterator == 0) {
					loadfile >> structure >> content;
					if (content[0] == 'A')
						this->energy_y_chart->Titles[L"Title1"]->Text = L"E(n) for AlₘGa₁₋ₘAsₙSb₁₋ₙ";
					else if (content[0] == 'G')
						this->energy_y_chart->Titles[L"Title1"]->Text = L"E(n) for GaₘIn₁₋ₘPₙAs₁₋ₙ";
					else {
						String^ message = "Error 8923:\nUnknown structure in file or wrong input file chosen!\nPlease check, whether\
	 the input file is either\n\nGaInPAs\t\tor\tAlGaAsSb!\n\nThanks :)";
						MessageBox::Show(message, "Error");
						Application::Exit();
					}
				}
				if (iterator >= 6) {
					loadfile >> x >> y1 >> y2 >> y3 >> y4;
					this->energy_y_chart->Series["Ec"]->Points->AddXY(x, y1);
					this->energy_y_chart->Series["Ev_hh"]->Points->AddXY(x, y2);
					this->energy_y_chart->Series["Ev_lh"]->Points->AddXY(x, y3);
					this->energy_y_chart->Series["Ev_sh"]->Points->AddXY(x, y4);
				}
				iterator += 1;
			}
			loadfile.close();

			this->energy_y_chart->ChartAreas[0]->RecalculateAxesScale(); //autoscale
			this->energy_y_chart->ChartAreas[0]->AxisX->Minimum = 0;
			this->energy_y_chart->ChartAreas[0]->AxisX->Maximum = x;
		}

		SetCurrentDirectory(Npath);
	}

	// Mass for x save
	private: System::Void save_mass_x_button_Click(System::Object^ sender, System::EventArgs^ e) {
		double temperature = static_cast<double>(numeric_temp_interpolation->Value);
		double percentage = static_cast<double>(num_n_const_mass->Value);

		//Define building blocks - material, e.g. GaAs
		std::ifstream read_file("GaAs.txt"); CreateMaterial GaAs(read_file, temperature); //inside constructor file is closed
		read_file.open("AlAs.txt"); CreateMaterial AlAs(read_file, temperature);
		read_file.open("AlSb.txt"); CreateMaterial AlSb(read_file, temperature);
		read_file.open("GaP.txt"); CreateMaterial GaP(read_file, temperature);
		if (temperature > 0) {
			double temp = (exp(164 / temperature) + exp(-164 / temperature)) / (exp(164 / temperature) - exp(-164 / temperature));
			GaP.Eg += 0.1081 * (1.0 - temp); //different temperature dependence - wierd shit by low temperature
		}
		read_file.open("GaSb.txt"); CreateMaterial GaSb(read_file, temperature);
		read_file.open("InAs.txt"); CreateMaterial InAs(read_file, temperature);
		read_file.open("InP.txt"); CreateMaterial InP(read_file, temperature);
		bool include_strain = true;

		SaveFileDialog saveFileDialog;
		std::string name = "./DATA/";
		TCHAR Npath[MAX_PATH];
		GetCurrentDirectory(MAX_PATH, Npath);
		CreateDirectory(L"./DATA/", NULL);
		SetCurrentDirectory(L"./DATA/");

		saveFileDialog.InitialDirectory = gcnew String(name.c_str());
		saveFileDialog.Filter = "txt files (*.txt)|*.txt|All files (*.*)|*.*";
		saveFileDialog.FilterIndex = 1;
		saveFileDialog.RestoreDirectory = true;

		std::ostringstream perc;
		perc << std::setprecision(2) << percentage;
		name = "m_e(x)__for_y=" + perc.str() + ".txt";

		saveFileDialog.FileName = gcnew String(name.c_str());
		if (this->comboBox2->SelectedIndex == 0 || this->comboBox2->SelectedIndex == 1) {
			if (saveFileDialog.ShowDialog() == System::Windows::Forms::DialogResult::OK) {

				//Writing to File
						//System::IO::StreamWriter^ outfile = gcnew System::IO::StreamWriter(saveFileDialog.FileName);
				System::IO::Stream^ strim = saveFileDialog.OpenFile();
				System::IO::StreamWriter^ outfile = gcnew System::IO::StreamWriter(strim);
				std::ostringstream energy_data;
				energy_data << std::fixed << std::setprecision(4);
				if (this->comboBox1->SelectedIndex == 0) {
					std::vector<std::vector<double>> GaInPAs_bowing(4);
					// -- GaInPAs
					GaInPAs_bowing[0] = std::vector<double>(5, 0.0); // WX - GaInP
					GaInPAs_bowing[0][0] = 0.65; GaInPAs_bowing[0][2] = 0.051;
					GaInPAs_bowing[1] = std::vector<double>(5, 0.0); // YZ - GaInAs
					GaInPAs_bowing[1][0] = 0.477; GaInPAs_bowing[1][1] = 0.155; GaInPAs_bowing[1][2] = 0.0091;
					GaInPAs_bowing[1][3] = -0.38; GaInPAs_bowing[1][4] = 2.61;
					GaInPAs_bowing[2] = std::vector<double>(5, 0.0); // WT - GaAsP
					GaInPAs_bowing[2][0] = 0.19;
					GaInPAs_bowing[3] = std::vector<double>(5, 0.0); // XZ - InAsP
					GaInPAs_bowing[3][0] = 0.1; GaInPAs_bowing[3][1] = 0.16;


					outfile->Write("-------------------------------------PARAMETERS: -------------------------------------\n");
					outfile->Write(L"Structure:\tGaₘIn₁₋ₘPₙAs₁₋ₙ\n");
					std::string file_write = "n = " + perc.str();
					outfile->Write(gcnew String(file_write.c_str()));
					outfile->Write("\n-------------------------------------ENERGY DATA: -------------------------------------\
	\n\nm\t\tm_e [in m_0 units]\n");
					for (double x = 0; x <= 1; x += 0.01) {
						CreateStructure GaInPAs(temperature, GaP, InP, GaAs, InAs, x, percentage, include_strain);
						GaInPAs.InitializeComponents(GaInPAs_bowing, GaAs.lattice_const);
						energy_data << x << "\t\t" << GaInPAs.m_e << std::endl;
					}
				}
				else {
					std::vector<std::vector<double>> AlGaAsSb_bowing(4);
					// --AlGaAsSb


					outfile->Write("-------------------------------------PARAMETERS: -------------------------------------\n");
					outfile->Write(L"Structure:\tAlₘGa₁₋ₘAsₙSb₁₋ₙ\n");
					std::string file_write = "n = " + perc.str();
					outfile->Write(gcnew String(file_write.c_str()));
					outfile->Write("\n-------------------------------------ENERGY DATA: -------------------------------------\
	\n\nm\t\tm_e [in m_0 units]\n");
					for (double x = 0; x <= 1; x += 0.01) {
						AlGaAsSb_bowing[0] = std::vector<double>(5, 0.0); // WX - AlGaAs
						AlGaAsSb_bowing[0][0] = -0.127 + 1.21 * x;
						AlGaAsSb_bowing[1] = std::vector<double>(5, 0.0); // YZ - AlGaSb
						AlGaAsSb_bowing[1][0] = -0.044 + 1.22 * x; AlGaAsSb_bowing[1][1] = 0.3;
						AlGaAsSb_bowing[2] = std::vector<double>(5, 0.0); // WY - AlAsSb
						AlGaAsSb_bowing[2][0] = 0.8; AlGaAsSb_bowing[2][1] = 0.15; AlGaAsSb_bowing[2][3] = -1.71;
						AlGaAsSb_bowing[3] = std::vector<double>(5, 0.0);
						AlGaAsSb_bowing[3][0] = 1.43; AlGaAsSb_bowing[3][1] = 0.6; AlGaAsSb_bowing[3][3] = -1.06;
						CreateStructure AlGaAsSb(temperature, AlAs, GaAs, AlSb, GaSb, x, percentage, include_strain);
						AlGaAsSb.InitializeComponents(AlGaAsSb_bowing, GaAs.lattice_const);
						energy_data << x << "\t\t" << AlGaAsSb.m_e << std::endl;
					}
				}
				outfile->Write(gcnew String((energy_data.str()).c_str()));

				outfile->Close();

			}
		}
		else {
			String^ message = "Error 125:\n\nNo structure was chosen";
			MessageBox::Show(message, "Error");
		}
		SetCurrentDirectory(Npath);
	}

	// Mass for x load
	private: System::Void load_mass_x_button_Click(System::Object^ sender, System::EventArgs^ e) {
		TCHAR Npath[MAX_PATH];
		GetCurrentDirectory(MAX_PATH, Npath);
		CreateDirectory(L"./DATA/", NULL);
		SetCurrentDirectory(L"./DATA/");
		OpenFileDialog openFileDialog;
		openFileDialog.InitialDirectory = L"./DATA/";
		openFileDialog.Filter = "txt files (*.txt)|*.txt|All files (*.*)|*.*";
		openFileDialog.FilterIndex = 1;
		openFileDialog.RestoreDirectory = true;
	label_redo:

		auto result = openFileDialog.ShowDialog();

		if (result == System::Windows::Forms::DialogResult::OK) {
			String^ filePath = openFileDialog.FileName;
			std::string name = msclr::interop::marshal_as<std::string>(filePath);
			std::string name_stay_put = name;
			//Remove filepath  and get only name
				const size_t last_slash_idx = name.find_last_of("\\/");
				if (std::string::npos != last_slash_idx) 
					name.erase(0, last_slash_idx + 1);
			//----------
			if (name[4] == 'y') {
				String^ message = "Error 5223:\nYou've picked m_e(y) for m_e(x) graph you Moron!!\nPick again!\n\nThanks :)";
				MessageBox::Show(message, "Error");
				goto label_redo;
			}
			else if (name[4] == 'x') goto label_continue;
			else {
				String^ message = "Error 5223:\nInvalid input file!!\nPick again!\n\nThanks :)";
				MessageBox::Show(message, "Error");
				goto label_redo;
			}
		label_continue:
			this->mass_x_chart->Series->Clear();
			System::Windows::Forms::DataVisualization::Charting::Series^ series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			series1->ChartArea = L"ChartArea1";
			series1->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series1->Legend = L"Legend1";
			series1->Name = L"electron\neffective\nmass\nm_e";
			this->mass_x_chart->Series->Add(series1);
			this->mass_x_chart->Series["electron\neffective\nmass\nm_e"]->BorderWidth = 3;

			std::ifstream loadfile(name_stay_put);

			//Reading data from file
			std::string content; int iterator = 0;
			double x, y;
			std::string structure;
			while (std::getline(loadfile, content)) {
				if (iterator == 0) {
					loadfile >> structure >> content;
					if (content[0] == 'A')
						this->mass_x_chart->Titles[L"Title1"]->Text = L"E(m) for AlₘGa₁₋ₘAsₙSb₁₋ₙ";
					else if (content[0] == 'G')
						this->mass_x_chart->Titles[L"Title1"]->Text = L"E(m) for GaₘIn₁₋ₘPₙAs₁₋ₙ";
					else {
						String^ message = "Error 892:\nUnknown structure in file or wrong input file chosen!\nPlease check, whether\
	 the input file is either\n\nGaInPAs\t\tor\tAlGaAsSb!\n\nThanks :)";
						MessageBox::Show(message, "Error");
						Application::Exit();
					}
				}
				if (iterator >= 6) {
					loadfile >> x >> y;
					this->mass_x_chart->Series["electron\neffective\nmass\nm_e"]->Points->AddXY(x, y);
				}
				iterator += 1;
			}
			loadfile.close();

			this->mass_x_chart->ChartAreas[0]->RecalculateAxesScale(); //autoscale
			this->mass_x_chart->ChartAreas[0]->AxisX->Minimum = 0;
			this->mass_x_chart->ChartAreas[0]->AxisX->Maximum = 1;
		}

		SetCurrentDirectory(Npath);
	}

	// Mass for y save
	private: System::Void save_mass_y_button_Click(System::Object^ sender, System::EventArgs^ e) {
		double temperature = static_cast<double>(numeric_temp_interpolation->Value);
		double percentage = static_cast<double>(num_m_const_mass->Value);

		//Define building blocks - material, e.g. GaAs
		std::ifstream read_file("GaAs.txt"); CreateMaterial GaAs(read_file, temperature); //inside constructor file is closed
		read_file.open("AlAs.txt"); CreateMaterial AlAs(read_file, temperature);
		read_file.open("AlSb.txt"); CreateMaterial AlSb(read_file, temperature);
		read_file.open("GaP.txt"); CreateMaterial GaP(read_file, temperature);
		if (temperature > 0) {
			double temp = (exp(164 / temperature) + exp(-164 / temperature)) / (exp(164 / temperature) - exp(-164 / temperature));
			GaP.Eg += 0.1081 * (1.0 - temp); //different temperature dependence - wierd shit by low temperature
		}
		read_file.open("GaSb.txt"); CreateMaterial GaSb(read_file, temperature);
		read_file.open("InAs.txt"); CreateMaterial InAs(read_file, temperature);
		read_file.open("InP.txt"); CreateMaterial InP(read_file, temperature);
		bool include_strain = true;

		SaveFileDialog saveFileDialog;
		std::string name = "./DATA/";
		TCHAR Npath[MAX_PATH];
		GetCurrentDirectory(MAX_PATH, Npath);
		CreateDirectory(L"./DATA/", NULL);
		SetCurrentDirectory(L"./DATA/");

		saveFileDialog.InitialDirectory = gcnew String(name.c_str());
		saveFileDialog.Filter = "txt files (*.txt)|*.txt|All files (*.*)|*.*";
		saveFileDialog.FilterIndex = 1;
		saveFileDialog.RestoreDirectory = true;

		std::ostringstream perc;
		perc << std::setprecision(2) << percentage;
		name = "m_e(y)__for_x=" + perc.str() + ".txt";

		saveFileDialog.FileName = gcnew String(name.c_str());
		if (this->comboBox2->SelectedIndex == 0 || this->comboBox2->SelectedIndex == 1) {
			if (saveFileDialog.ShowDialog() == System::Windows::Forms::DialogResult::OK) {

				//Writing to File
						//System::IO::StreamWriter^ outfile = gcnew System::IO::StreamWriter(saveFileDialog.FileName);
				System::IO::Stream^ strim = saveFileDialog.OpenFile();
				System::IO::StreamWriter^ outfile = gcnew System::IO::StreamWriter(strim);
				std::ostringstream energy_data;
				energy_data << std::fixed << std::setprecision(4);
				if (this->comboBox2->SelectedIndex == 0) {
					std::vector<std::vector<double>> GaInPAs_bowing(4);
					// -- GaInPAs
					GaInPAs_bowing[0] = std::vector<double>(5, 0.0); // WX - GaInP
					GaInPAs_bowing[0][0] = 0.65; GaInPAs_bowing[0][2] = 0.051;
					GaInPAs_bowing[1] = std::vector<double>(5, 0.0); // YZ - GaInAs
					GaInPAs_bowing[1][0] = 0.477; GaInPAs_bowing[1][1] = 0.155; GaInPAs_bowing[1][2] = 0.0091;
					GaInPAs_bowing[1][3] = -0.38; GaInPAs_bowing[1][4] = 2.61;
					GaInPAs_bowing[2] = std::vector<double>(5, 0.0); // WT - GaAsP
					GaInPAs_bowing[2][0] = 0.19;
					GaInPAs_bowing[3] = std::vector<double>(5, 0.0); // XZ - InAsP
					GaInPAs_bowing[3][0] = 0.1; GaInPAs_bowing[3][1] = 0.16;


					outfile->Write("-------------------------------------PARAMETERS: -------------------------------------\n");
					outfile->Write(L"Structure:\tGaₘIn₁₋ₘPₙAs₁₋ₙ\n");
					std::string file_write = "m = " + perc.str();
					outfile->Write(gcnew String(file_write.c_str()));
					outfile->Write("\n-------------------------------------ENERGY DATA: -------------------------------------\
	\n\nn\t\tm_e [in m_0 units]\n");
					for (double x = 0; x <= 1; x += 0.01) {
						CreateStructure GaInPAs(temperature, GaP, InP, GaAs, InAs, percentage, x, include_strain);
						GaInPAs.InitializeComponents(GaInPAs_bowing, GaAs.lattice_const);
						energy_data << x << "\t\t" << GaInPAs.m_e << std::endl;
					}
				}
				else if (this->comboBox2->SelectedIndex == 1) {
					std::vector<std::vector<double>> AlGaAsSb_bowing(4);
					// --AlGaAsSb
					AlGaAsSb_bowing[0] = std::vector<double>(5, 0.0); // WX - AlGaAs
					AlGaAsSb_bowing[0][0] = -0.127 + 1.21 * percentage;
					AlGaAsSb_bowing[1] = std::vector<double>(5, 0.0); // YZ - AlGaSb
					AlGaAsSb_bowing[1][0] = -0.044 + 1.22 * percentage; AlGaAsSb_bowing[1][1] = 0.3;
					AlGaAsSb_bowing[2] = std::vector<double>(5, 0.0); // WY - AlAsSb
					AlGaAsSb_bowing[2][0] = 0.8; AlGaAsSb_bowing[2][1] = 0.15; AlGaAsSb_bowing[2][3] = -1.71;
					AlGaAsSb_bowing[3] = std::vector<double>(5, 0.0);
					AlGaAsSb_bowing[3][0] = 1.43; AlGaAsSb_bowing[3][1] = 0.6; AlGaAsSb_bowing[3][3] = -1.06;

					outfile->Write("-------------------------------------PARAMETERS: -------------------------------------\n");
					outfile->Write(L"Structure:\tAlₘGa₁₋ₘAsₙSb₁₋ₙ\n");
					std::string file_write = "m = " + perc.str();
					outfile->Write(gcnew String(file_write.c_str()));
					outfile->Write("\n-------------------------------------ENERGY DATA: -------------------------------------\
	\n\nn\t\tm_e [in m_0 units]\n");
					for (double x = 0; x <= 1; x += 0.01) {
						CreateStructure AlGaAsSb(temperature, AlAs, GaAs, AlSb, GaSb, percentage, x, include_strain);
						AlGaAsSb.InitializeComponents(AlGaAsSb_bowing, GaAs.lattice_const);
						energy_data << x << "\t\t" << AlGaAsSb.m_e << std::endl;
					}
				}
				outfile->Write(gcnew String((energy_data.str()).c_str()));

				outfile->Close();
			}
		}
		else {
			String^ message = "Error 125:\n\nNo structure was chosen";
			MessageBox::Show(message, "Error");
		}
		SetCurrentDirectory(Npath);
	}

	// Mass for y load
	private: System::Void load_mass_y_button_Click(System::Object^ sender, System::EventArgs^ e) {
		TCHAR Npath[MAX_PATH];
		GetCurrentDirectory(MAX_PATH, Npath);
		CreateDirectory(L"./DATA/", NULL);
		SetCurrentDirectory(L"./DATA/");
		OpenFileDialog openFileDialog;
		openFileDialog.InitialDirectory = L"./DATA/";
		openFileDialog.Filter = "txt files (*.txt)|*.txt|All files (*.*)|*.*";
		openFileDialog.FilterIndex = 1;
		openFileDialog.RestoreDirectory = true;
	label_redo:

		auto result = openFileDialog.ShowDialog();

		if (result == System::Windows::Forms::DialogResult::OK) {
			String^ filePath = openFileDialog.FileName;
			std::string name = msclr::interop::marshal_as<std::string>(filePath);
			std::string name_stay_put = name;
			//Remove filepath  and get only name
			const size_t last_slash_idx = name.find_last_of("\\/");
			if (std::string::npos != last_slash_idx)
				name.erase(0, last_slash_idx + 1);
			//----------
			if (name[4] == 'x') {
				String^ message = "Error 5223:\nYou've picked m_e(x) for m_e(y) graph you Moron!!\nPick again!\n\nThanks :)";
				MessageBox::Show(message, "Error");
				goto label_redo;
			}
			else if (name[4] == 'y') goto label_continue;
			else {
				String^ message = "Error 5223:\nInvalid input file!!\nPick again!\n\nThanks :)";
				MessageBox::Show(message, "Error");
				goto label_redo;
			}
		label_continue:
			this->mass_y_chart->Series->Clear();
			System::Windows::Forms::DataVisualization::Charting::Series^ series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			series1->ChartArea = L"ChartArea1";
			series1->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series1->Legend = L"Legend1";
			series1->Name = L"electron\neffective\nmass\nm_e";
			this->mass_y_chart->Series->Add(series1);
			this->mass_y_chart->Series["electron\neffective\nmass\nm_e"]->BorderWidth = 3;

			std::ifstream loadfile(name_stay_put);

			//Reading data from file
			std::string content; int iterator = 0;
			double x, y;
			std::string structure;
			while (std::getline(loadfile, content)) {
				if (iterator == 0) {
					loadfile >> structure >> content;
					if (content[0] == 'A')
						this->mass_y_chart->Titles[L"Title1"]->Text = L"E(m) for AlₘGa₁₋ₘAsₙSb₁₋ₙ";
					else if (content[0] == 'G')
						this->mass_y_chart->Titles[L"Title1"]->Text = L"E(m) for GaₘIn₁₋ₘPₙAs₁₋ₙ";
					else {
						String^ message = "Error 892:\nUnknown structure in file or wrong input file chosen!\nPlease check, whether\
	 the input file is either\n\nGaInPAs\t\tor\tAlGaAsSb!\n\nThanks :)";
						MessageBox::Show(message, "Error");
						Application::Exit();
					}
				}
				if (iterator >= 6) {
					loadfile >> x >> y;
					this->mass_y_chart->Series["electron\neffective\nmass\nm_e"]->Points->AddXY(x, y);
				}
				iterator += 1;
			}
			loadfile.close();

			this->mass_y_chart->ChartAreas[0]->RecalculateAxesScale(); //autoscale
			this->mass_y_chart->ChartAreas[0]->AxisX->Minimum = 0;
			this->mass_y_chart->ChartAreas[0]->AxisX->Maximum = 1;
		}

		SetCurrentDirectory(Npath);
	}
};
}
