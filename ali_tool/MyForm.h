#pragma once
#include<opencv2/opencv.hpp>
#include<iostream>
#include<msclr/marshal.h>
#include<msclr\marshal_cppstd.h>
#include"math.h"

namespace alitool {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;
	using namespace cv;
	using namespace msclr::interop;

	Mat FI;
	int d0 = 0;
	Mat dst11, dst22, dst33, dst44, dst5, dst6, dst7, dst8, dst9, dst10, dst12;
	Mat DFTSHOW(Mat planes[2])
	{
		Mat mag;
		magnitude(planes[0], planes[1], mag);
		mag = mag + 1;
		log(mag, mag);
		normalize(mag, mag, 0, 1, CV_MINMAX);
		return mag;
	}

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
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
	private: System::Windows::Forms::Button^ showbutton;
	private: System::Windows::Forms::Button^ equ;
	private: System::Windows::Forms::Button^ bindd;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ xvalue;
	private: System::Windows::Forms::TextBox^ yvalue;

	private: System::Windows::Forms::Button^ button3;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::TextBox^ curve;
	private: System::Windows::Forms::Label^ fasd;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::Button^ button14;
	private: System::Windows::Forms::Button^ button15;
	private: System::Windows::Forms::Button^ button16;
	private: System::Windows::Forms::Button^ button17;
	private: System::Windows::Forms::Button^ button18;
	private: System::Windows::Forms::Button^ button19;
	private: System::Windows::Forms::Button^ button20;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::Button^ button21;
	private: System::Windows::Forms::TextBox^ ttbox;
	private: System::Windows::Forms::Button^ button22;
	private: System::Windows::Forms::TextBox^ begin;
	private: System::Windows::Forms::TextBox^ end;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ zoomBox1;
	private: System::Windows::Forms::TextBox^ zoomBox2;
	private: System::Windows::Forms::Button^ add_pic_2;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Button^ button23;
	private: System::Windows::Forms::Button^ button24;
	private: System::Windows::Forms::Button^ button25;
	private: System::Windows::Forms::Button^ button26;
	private: System::Windows::Forms::TextBox^ degree;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ mediann;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button27;
	private: System::Windows::Forms::TextBox^ skew1;

	private: System::Windows::Forms::Button^ button28;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Button^ button29;
	private: System::Windows::Forms::Button^ button30;
	private: System::Windows::Forms::TextBox^ skew2;
	private: System::Windows::Forms::TextBox^ skew3;
	private: System::Windows::Forms::TextBox^ skew4;
	private: System::Windows::Forms::TextBox^ skew5;
	private: System::Windows::Forms::TextBox^ skew6;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::TextBox^ threee;
	private: System::Windows::Forms::Label^ label20;
	private: System::Windows::Forms::Button^ button31;
private: System::Windows::Forms::TextBox^ zoombox3;
private: System::Windows::Forms::TextBox^ zoombox4;
private: System::Windows::Forms::Label^ label21;
private: System::Windows::Forms::Label^ label22;
private: System::Windows::Forms::Button^ button32;
private: System::Windows::Forms::Button^ button2;
private: System::Windows::Forms::TextBox^ jpgg;




	protected:

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
			this->showbutton = (gcnew System::Windows::Forms::Button());
			this->equ = (gcnew System::Windows::Forms::Button());
			this->bindd = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->xvalue = (gcnew System::Windows::Forms::TextBox());
			this->yvalue = (gcnew System::Windows::Forms::TextBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->curve = (gcnew System::Windows::Forms::TextBox());
			this->fasd = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->button21 = (gcnew System::Windows::Forms::Button());
			this->ttbox = (gcnew System::Windows::Forms::TextBox());
			this->button22 = (gcnew System::Windows::Forms::Button());
			this->begin = (gcnew System::Windows::Forms::TextBox());
			this->end = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->zoomBox1 = (gcnew System::Windows::Forms::TextBox());
			this->zoomBox2 = (gcnew System::Windows::Forms::TextBox());
			this->add_pic_2 = (gcnew System::Windows::Forms::Button());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button23 = (gcnew System::Windows::Forms::Button());
			this->button24 = (gcnew System::Windows::Forms::Button());
			this->button25 = (gcnew System::Windows::Forms::Button());
			this->button26 = (gcnew System::Windows::Forms::Button());
			this->degree = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->mediann = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button27 = (gcnew System::Windows::Forms::Button());
			this->skew1 = (gcnew System::Windows::Forms::TextBox());
			this->button28 = (gcnew System::Windows::Forms::Button());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->button29 = (gcnew System::Windows::Forms::Button());
			this->button30 = (gcnew System::Windows::Forms::Button());
			this->skew2 = (gcnew System::Windows::Forms::TextBox());
			this->skew3 = (gcnew System::Windows::Forms::TextBox());
			this->skew4 = (gcnew System::Windows::Forms::TextBox());
			this->skew5 = (gcnew System::Windows::Forms::TextBox());
			this->skew6 = (gcnew System::Windows::Forms::TextBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->threee = (gcnew System::Windows::Forms::TextBox());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->button31 = (gcnew System::Windows::Forms::Button());
			this->zoombox3 = (gcnew System::Windows::Forms::TextBox());
			this->zoombox4 = (gcnew System::Windows::Forms::TextBox());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->button32 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->jpgg = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			this->SuspendLayout();
			// 
			// showbutton
			// 
			this->showbutton->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->showbutton->Font = (gcnew System::Drawing::Font(L"MV Boli", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->showbutton->Location = System::Drawing::Point(521, 121);
			this->showbutton->Name = L"showbutton";
			this->showbutton->Size = System::Drawing::Size(123, 60);
			this->showbutton->TabIndex = 0;
			this->showbutton->Text = L"save step";
			this->showbutton->UseVisualStyleBackColor = false;
			this->showbutton->Click += gcnew System::EventHandler(this, &MyForm::showbutton_Click);
			// 
			// equ
			// 
			this->equ->BackColor = System::Drawing::SystemColors::HotTrack;
			this->equ->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->equ->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->equ->Location = System::Drawing::Point(1174, 73);
			this->equ->Name = L"equ";
			this->equ->Size = System::Drawing::Size(114, 48);
			this->equ->TabIndex = 1;
			this->equ->Text = L"eqluiz";
			this->equ->UseVisualStyleBackColor = false;
			this->equ->Click += gcnew System::EventHandler(this, &MyForm::equ_Click);
			// 
			// bindd
			// 
			this->bindd->BackColor = System::Drawing::SystemColors::GrayText;
			this->bindd->Font = (gcnew System::Drawing::Font(L"Matura MT Script Capitals", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bindd->Location = System::Drawing::Point(163, 78);
			this->bindd->Name = L"bindd";
			this->bindd->Size = System::Drawing::Size(131, 47);
			this->bindd->TabIndex = 2;
			this->bindd->Text = L"blind ";
			this->bindd->UseVisualStyleBackColor = false;
			this->bindd->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Brown;
			this->button1->Font = (gcnew System::Drawing::Font(L"Rockwell", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::SystemColors::Control;
			this->button1->Location = System::Drawing::Point(9, 362);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(100, 57);
			this->button1->TabIndex = 3;
			this->button1->Text = L"translation ";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click_1);
			// 
			// xvalue
			// 
			this->xvalue->Location = System::Drawing::Point(9, 425);
			this->xvalue->Name = L"xvalue";
			this->xvalue->Size = System::Drawing::Size(52, 20);
			this->xvalue->TabIndex = 4;
			// 
			// yvalue
			// 
			this->yvalue->Location = System::Drawing::Point(10, 453);
			this->yvalue->Name = L"yvalue";
			this->yvalue->Size = System::Drawing::Size(52, 20);
			this->yvalue->TabIndex = 5;
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::Brown;
			this->button3->Font = (gcnew System::Drawing::Font(L"Rockwell", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::SystemColors::Control;
			this->button3->Location = System::Drawing::Point(9, 270);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(100, 41);
			this->button3->TabIndex = 7;
			this->button3->Text = L"rotate ";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Lucida Calligraphy", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(68, 425);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(66, 19);
			this->label1->TabIndex = 9;
			this->label1->Text = L"x value";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Lucida Calligraphy", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(68, 456);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(66, 19);
			this->label2->TabIndex = 10;
			this->label2->Text = L"y value";
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::Brown;
			this->button5->Font = (gcnew System::Drawing::Font(L"Rockwell", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->ForeColor = System::Drawing::SystemColors::Control;
			this->button5->Location = System::Drawing::Point(9, 74);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(100, 57);
			this->button5->TabIndex = 11;
			this->button5->Text = L"FLIP Y ";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::Brown;
			this->button6->Font = (gcnew System::Drawing::Font(L"Rockwell", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->ForeColor = System::Drawing::SystemColors::Control;
			this->button6->Location = System::Drawing::Point(9, 137);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(100, 57);
			this->button6->TabIndex = 12;
			this->button6->Text = L"FLIP X";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::Brown;
			this->button7->Font = (gcnew System::Drawing::Font(L"Rockwell", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button7->ForeColor = System::Drawing::SystemColors::Control;
			this->button7->Location = System::Drawing::Point(9, 200);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(100, 57);
			this->button7->TabIndex = 13;
			this->button7->Text = L"FLIP XY";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::Color::Brown;
			this->button8->Font = (gcnew System::Drawing::Font(L"Rockwell", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button8->ForeColor = System::Drawing::SystemColors::Control;
			this->button8->Location = System::Drawing::Point(17, 492);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(100, 57);
			this->button8->TabIndex = 14;
			this->button8->Text = L"Zoom";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->button9->Font = (gcnew System::Drawing::Font(L"Impact", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button9->Location = System::Drawing::Point(163, 137);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(131, 58);
			this->button9->TabIndex = 15;
			this->button9->Text = L"NEGATIVE";
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
			// 
			// button10
			// 
			this->button10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button10->Location = System::Drawing::Point(163, 213);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(151, 58);
			this->button10->TabIndex = 16;
			this->button10->Text = L"increase brightness with log";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::button10_Click);
			// 
			// button11
			// 
			this->button11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button11->Location = System::Drawing::Point(163, 291);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(120, 58);
			this->button11->TabIndex = 17;
			this->button11->Text = L"light or darkness";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm::button11_Click);
			// 
			// curve
			// 
			this->curve->Location = System::Drawing::Point(289, 291);
			this->curve->Name = L"curve";
			this->curve->Size = System::Drawing::Size(100, 20);
			this->curve->TabIndex = 18;
			// 
			// fasd
			// 
			this->fasd->AutoSize = true;
			this->fasd->Location = System::Drawing::Point(293, 317);
			this->fasd->Name = L"fasd";
			this->fasd->Size = System::Drawing::Size(96, 13);
			this->fasd->TabIndex = 19;
			this->fasd->Text = L"from 1 to 100 dark ";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(289, 336);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(100, 13);
			this->label3->TabIndex = 20;
			this->label3->Text = L"from -1 to -100 light ";
			// 
			// button12
			// 
			this->button12->BackColor = System::Drawing::Color::DarkCyan;
			this->button12->Font = (gcnew System::Drawing::Font(L"Franklin Gothic Heavy", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button12->Location = System::Drawing::Point(1169, 153);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(119, 55);
			this->button12->TabIndex = 21;
			this->button12->Text = L"Smothing (tradtional)";
			this->button12->UseVisualStyleBackColor = false;
			this->button12->Click += gcnew System::EventHandler(this, &MyForm::button12_Click);
			// 
			// button13
			// 
			this->button13->BackColor = System::Drawing::Color::DarkCyan;
			this->button13->Font = (gcnew System::Drawing::Font(L"Franklin Gothic Heavy", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button13->Location = System::Drawing::Point(1328, 153);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(119, 55);
			this->button13->TabIndex = 22;
			this->button13->Text = L"Smothing (pyrmidal)";
			this->button13->UseVisualStyleBackColor = false;
			this->button13->Click += gcnew System::EventHandler(this, &MyForm::button13_Click);
			// 
			// button14
			// 
			this->button14->BackColor = System::Drawing::Color::DarkCyan;
			this->button14->Font = (gcnew System::Drawing::Font(L"Franklin Gothic Heavy", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button14->Location = System::Drawing::Point(1169, 208);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(119, 56);
			this->button14->TabIndex = 23;
			this->button14->Text = L"Smothing (circular)";
			this->button14->UseVisualStyleBackColor = false;
			this->button14->Click += gcnew System::EventHandler(this, &MyForm::button14_Click);
			// 
			// button15
			// 
			this->button15->BackColor = System::Drawing::Color::DarkCyan;
			this->button15->Font = (gcnew System::Drawing::Font(L"Franklin Gothic Heavy", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button15->Location = System::Drawing::Point(1328, 277);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(119, 47);
			this->button15->TabIndex = 24;
			this->button15->Text = L"Smothing (cone)";
			this->button15->UseVisualStyleBackColor = false;
			this->button15->Click += gcnew System::EventHandler(this, &MyForm::button15_Click);
			// 
			// button16
			// 
			this->button16->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->button16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button16->Location = System::Drawing::Point(1133, 273);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(88, 48);
			this->button16->TabIndex = 25;
			this->button16->Text = L"median ";
			this->button16->UseVisualStyleBackColor = false;
			this->button16->Click += gcnew System::EventHandler(this, &MyForm::button16_Click);
			// 
			// button17
			// 
			this->button17->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->button17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button17->Location = System::Drawing::Point(1133, 333);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(88, 48);
			this->button17->TabIndex = 26;
			this->button17->Text = L"sobel vertical ";
			this->button17->UseVisualStyleBackColor = false;
			this->button17->Click += gcnew System::EventHandler(this, &MyForm::button17_Click);
			// 
			// button18
			// 
			this->button18->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->button18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button18->Location = System::Drawing::Point(1244, 336);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(88, 48);
			this->button18->TabIndex = 27;
			this->button18->Text = L"sobel horizontal";
			this->button18->UseVisualStyleBackColor = false;
			this->button18->Click += gcnew System::EventHandler(this, &MyForm::button18_Click);
			// 
			// button19
			// 
			this->button19->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->button19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button19->Location = System::Drawing::Point(1133, 390);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(88, 48);
			this->button19->TabIndex = 28;
			this->button19->Text = L"sobel XY";
			this->button19->UseVisualStyleBackColor = false;
			this->button19->Click += gcnew System::EventHandler(this, &MyForm::button19_Click);
			// 
			// button20
			// 
			this->button20->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button20->Font = (gcnew System::Drawing::Font(L"Cooper Black", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button20->ForeColor = System::Drawing::SystemColors::Control;
			this->button20->Location = System::Drawing::Point(685, 121);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(181, 87);
			this->button20->TabIndex = 29;
			this->button20->Text = L"add photo";
			this->button20->UseVisualStyleBackColor = false;
			this->button20->Click += gcnew System::EventHandler(this, &MyForm::button20_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pictureBox1->Location = System::Drawing::Point(445, 261);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(311, 454);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 30;
			this->pictureBox1->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pictureBox2->Location = System::Drawing::Point(785, 261);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(332, 454);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 31;
			this->pictureBox2->TabStop = false;
			// 
			// button21
			// 
			this->button21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button21->Location = System::Drawing::Point(163, 358);
			this->button21->Name = L"button21";
			this->button21->Size = System::Drawing::Size(75, 23);
			this->button21->TabIndex = 32;
			this->button21->Text = L"bit plane";
			this->button21->UseVisualStyleBackColor = true;
			this->button21->Click += gcnew System::EventHandler(this, &MyForm::button21_Click);
			// 
			// ttbox
			// 
			this->ttbox->Location = System::Drawing::Point(244, 361);
			this->ttbox->Name = L"ttbox";
			this->ttbox->Size = System::Drawing::Size(100, 20);
			this->ttbox->TabIndex = 33;
			// 
			// button22
			// 
			this->button22->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button22->Location = System::Drawing::Point(163, 395);
			this->button22->Name = L"button22";
			this->button22->Size = System::Drawing::Size(75, 35);
			this->button22->TabIndex = 34;
			this->button22->Text = L"grey level";
			this->button22->UseVisualStyleBackColor = true;
			this->button22->Click += gcnew System::EventHandler(this, &MyForm::button22_Click);
			// 
			// begin
			// 
			this->begin->Location = System::Drawing::Point(299, 397);
			this->begin->Name = L"begin";
			this->begin->Size = System::Drawing::Size(45, 20);
			this->begin->TabIndex = 35;
			// 
			// end
			// 
			this->end->Location = System::Drawing::Point(299, 426);
			this->end->Name = L"end";
			this->end->Size = System::Drawing::Size(45, 20);
			this->end->TabIndex = 36;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(251, 400);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(36, 17);
			this->label4->TabIndex = 37;
			this->label4->Text = L"from";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(258, 426);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(20, 17);
			this->label5->TabIndex = 38;
			this->label5->Text = L"to";
			// 
			// zoomBox1
			// 
			this->zoomBox1->Location = System::Drawing::Point(158, 554);
			this->zoomBox1->Name = L"zoomBox1";
			this->zoomBox1->Size = System::Drawing::Size(75, 20);
			this->zoomBox1->TabIndex = 39;
			// 
			// zoomBox2
			// 
			this->zoomBox2->Location = System::Drawing::Point(158, 592);
			this->zoomBox2->Name = L"zoomBox2";
			this->zoomBox2->Size = System::Drawing::Size(75, 20);
			this->zoomBox2->TabIndex = 40;
			// 
			// add_pic_2
			// 
			this->add_pic_2->BackColor = System::Drawing::Color::Maroon;
			this->add_pic_2->Font = (gcnew System::Drawing::Font(L"Matura MT Script Capitals", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->add_pic_2->ForeColor = System::Drawing::Color::White;
			this->add_pic_2->Location = System::Drawing::Point(1307, 610);
			this->add_pic_2->Name = L"add_pic_2";
			this->add_pic_2->Size = System::Drawing::Size(75, 105);
			this->add_pic_2->TabIndex = 41;
			this->add_pic_2->Text = L"add another photo";
			this->add_pic_2->UseVisualStyleBackColor = false;
			this->add_pic_2->Click += gcnew System::EventHandler(this, &MyForm::add_pic_2_Click);
			// 
			// pictureBox3
			// 
			this->pictureBox3->Location = System::Drawing::Point(1137, 503);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(151, 212);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox3->TabIndex = 42;
			this->pictureBox3->TabStop = false;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Lucida Calligraphy", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(97, 555);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(55, 19);
			this->label6->TabIndex = 43;
			this->label6->Text = L"x first";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Lucida Calligraphy", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(97, 592);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(55, 19);
			this->label7->TabIndex = 44;
			this->label7->Text = L"y first";
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::Maroon;
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Impact", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->ForeColor = System::Drawing::Color::Transparent;
			this->textBox1->Location = System::Drawing::Point(527, 223);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(117, 32);
			this->textBox1->TabIndex = 45;
			this->textBox1->Text = L"image ";
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::Color::Maroon;
			this->textBox2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Impact", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox2->ForeColor = System::Drawing::Color::Transparent;
			this->textBox2->Location = System::Drawing::Point(899, 223);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(117, 32);
			this->textBox2->TabIndex = 46;
			this->textBox2->Text = L"output";
			this->textBox2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// button23
			// 
			this->button23->BackColor = System::Drawing::SystemColors::HotTrack;
			this->button23->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button23->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button23->Location = System::Drawing::Point(1333, 73);
			this->button23->Name = L"button23";
			this->button23->Size = System::Drawing::Size(114, 48);
			this->button23->TabIndex = 47;
			this->button23->Text = L"histogram ";
			this->button23->UseVisualStyleBackColor = false;
			this->button23->Click += gcnew System::EventHandler(this, &MyForm::button23_Click);
			// 
			// button24
			// 
			this->button24->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->button24->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button24->Location = System::Drawing::Point(1244, 390);
			this->button24->Name = L"button24";
			this->button24->Size = System::Drawing::Size(88, 48);
			this->button24->TabIndex = 48;
			this->button24->Text = L"threehold";
			this->button24->UseVisualStyleBackColor = false;
			this->button24->Click += gcnew System::EventHandler(this, &MyForm::button24_Click);
			// 
			// button25
			// 
			this->button25->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->button25->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button25->Location = System::Drawing::Point(1244, 450);
			this->button25->Name = L"button25";
			this->button25->Size = System::Drawing::Size(88, 48);
			this->button25->TabIndex = 49;
			this->button25->Text = L"lablacian";
			this->button25->UseVisualStyleBackColor = false;
			this->button25->Click += gcnew System::EventHandler(this, &MyForm::button25_Click);
			// 
			// button26
			// 
			this->button26->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->button26->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button26->Location = System::Drawing::Point(1133, 450);
			this->button26->Name = L"button26";
			this->button26->Size = System::Drawing::Size(105, 48);
			this->button26->TabIndex = 50;
			this->button26->Text = L"segmantion ";
			this->button26->UseVisualStyleBackColor = false;
			this->button26->Click += gcnew System::EventHandler(this, &MyForm::button26_Click);
			// 
			// degree
			// 
			this->degree->Location = System::Drawing::Point(83, 317);
			this->degree->Name = L"degree";
			this->degree->Size = System::Drawing::Size(41, 20);
			this->degree->TabIndex = 51;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Lucida Calligraphy", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(8, 317);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(59, 19);
			this->label8->TabIndex = 52;
			this->label8->Text = L"degree";
			// 
			// mediann
			// 
			this->mediann->Location = System::Drawing::Point(1227, 301);
			this->mediann->Name = L"mediann";
			this->mediann->Size = System::Drawing::Size(68, 20);
			this->mediann->TabIndex = 53;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Lucida Calligraphy", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(1236, 279);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(51, 19);
			this->label9->TabIndex = 54;
			this->label9->Text = L"value";
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button4->Font = (gcnew System::Drawing::Font(L"Gill Sans Ultra Bold", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(919, 121);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(117, 60);
			this->button4->TabIndex = 55;
			this->button4->Text = L"Reset ";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button27
			// 
			this->button27->BackColor = System::Drawing::Color::Brown;
			this->button27->Font = (gcnew System::Drawing::Font(L"Rockwell", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button27->ForeColor = System::Drawing::SystemColors::Control;
			this->button27->Location = System::Drawing::Point(11, 628);
			this->button27->Name = L"button27";
			this->button27->Size = System::Drawing::Size(81, 45);
			this->button27->TabIndex = 56;
			this->button27->Text = L"skewing ";
			this->button27->UseVisualStyleBackColor = false;
			this->button27->Click += gcnew System::EventHandler(this, &MyForm::button27_Click);
			// 
			// skew1
			// 
			this->skew1->Location = System::Drawing::Point(110, 628);
			this->skew1->Name = L"skew1";
			this->skew1->Size = System::Drawing::Size(65, 20);
			this->skew1->TabIndex = 57;
			this->skew1->Text = L"0";
			// 
			// button28
			// 
			this->button28->BackColor = System::Drawing::Color::Transparent;
			this->button28->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button28->Location = System::Drawing::Point(1345, 336);
			this->button28->Name = L"button28";
			this->button28->Size = System::Drawing::Size(53, 39);
			this->button28->TabIndex = 58;
			this->button28->Text = L"freq";
			this->button28->UseVisualStyleBackColor = false;
			this->button28->Click += gcnew System::EventHandler(this, &MyForm::button28_Click);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->BackColor = System::Drawing::Color::Transparent;
			this->label10->Font = (gcnew System::Drawing::Font(L"Gill Sans Ultra Bold", 40, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::World,
				static_cast<System::Byte>(0)));
			this->label10->ForeColor = System::Drawing::Color::Turquoise;
			this->label10->Location = System::Drawing::Point(646, 9);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(252, 56);
			this->label10->TabIndex = 59;
			this->label10->Text = L"Ali Tools ";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->BackColor = System::Drawing::Color::Transparent;
			this->label11->Font = (gcnew System::Drawing::Font(L"Georgia", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::World,
				static_cast<System::Byte>(0)));
			this->label11->ForeColor = System::Drawing::Color::LightCyan;
			this->label11->Location = System::Drawing::Point(5, 35);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(160, 24);
			this->label11->TabIndex = 60;
			this->label11->Text = L"Transformations";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->BackColor = System::Drawing::Color::Transparent;
			this->label12->Font = (gcnew System::Drawing::Font(L"Georgia", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::World,
				static_cast<System::Byte>(0)));
			this->label12->ForeColor = System::Drawing::Color::LightCyan;
			this->label12->Location = System::Drawing::Point(199, 35);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(115, 24);
			this->label12->TabIndex = 61;
			this->label12->Text = L"color effect ";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->BackColor = System::Drawing::Color::Transparent;
			this->label13->Font = (gcnew System::Drawing::Font(L"Georgia", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::World,
				static_cast<System::Byte>(0)));
			this->label13->ForeColor = System::Drawing::Color::LightCyan;
			this->label13->Location = System::Drawing::Point(1240, 35);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(130, 24);
			this->label13->TabIndex = 62;
			this->label13->Text = L"Enhancment ";
			// 
			// button29
			// 
			this->button29->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button29->Location = System::Drawing::Point(10, 696);
			this->button29->Name = L"button29";
			this->button29->Size = System::Drawing::Size(101, 49);
			this->button29->TabIndex = 63;
			this->button29->Text = L"Adding two image";
			this->button29->UseVisualStyleBackColor = true;
			this->button29->Click += gcnew System::EventHandler(this, &MyForm::button29_Click);
			// 
			// button30
			// 
			this->button30->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button30->Location = System::Drawing::Point(117, 696);
			this->button30->Name = L"button30";
			this->button30->Size = System::Drawing::Size(101, 49);
			this->button30->TabIndex = 64;
			this->button30->Text = L"Sub two image";
			this->button30->UseVisualStyleBackColor = true;
			this->button30->Click += gcnew System::EventHandler(this, &MyForm::button30_Click);
			// 
			// skew2
			// 
			this->skew2->Location = System::Drawing::Point(110, 654);
			this->skew2->Name = L"skew2";
			this->skew2->Size = System::Drawing::Size(65, 20);
			this->skew2->TabIndex = 65;
			this->skew2->Text = L"0";
			// 
			// skew3
			// 
			this->skew3->Location = System::Drawing::Point(213, 628);
			this->skew3->Name = L"skew3";
			this->skew3->Size = System::Drawing::Size(65, 20);
			this->skew3->TabIndex = 66;
			this->skew3->Text = L"1";
			// 
			// skew4
			// 
			this->skew4->Location = System::Drawing::Point(213, 654);
			this->skew4->Name = L"skew4";
			this->skew4->Size = System::Drawing::Size(65, 20);
			this->skew4->TabIndex = 67;
			this->skew4->Text = L"0";
			// 
			// skew5
			// 
			this->skew5->Location = System::Drawing::Point(324, 628);
			this->skew5->Name = L"skew5";
			this->skew5->Size = System::Drawing::Size(65, 20);
			this->skew5->TabIndex = 68;
			this->skew5->Text = L"value ";
			// 
			// skew6
			// 
			this->skew6->Location = System::Drawing::Point(324, 654);
			this->skew6->Name = L"skew6";
			this->skew6->Size = System::Drawing::Size(65, 20);
			this->skew6->TabIndex = 69;
			this->skew6->Text = L"1";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->Location = System::Drawing::Point(181, 628);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(16, 17);
			this->label14->TabIndex = 70;
			this->label14->Text = L"1";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label15->Location = System::Drawing::Point(181, 654);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(16, 17);
			this->label15->TabIndex = 71;
			this->label15->Text = L"2";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label16->Location = System::Drawing::Point(289, 629);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(16, 17);
			this->label16->TabIndex = 72;
			this->label16->Text = L"3";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label17->Location = System::Drawing::Point(289, 657);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(16, 17);
			this->label17->TabIndex = 73;
			this->label17->Text = L"4";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label18->Location = System::Drawing::Point(407, 628);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(16, 17);
			this->label18->TabIndex = 74;
			this->label18->Text = L"5";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label19->Location = System::Drawing::Point(407, 654);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(16, 17);
			this->label19->TabIndex = 75;
			this->label19->Text = L"6";
			// 
			// threee
			// 
			this->threee->Location = System::Drawing::Point(1338, 418);
			this->threee->Name = L"threee";
			this->threee->Size = System::Drawing::Size(68, 20);
			this->threee->TabIndex = 76;
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Font = (gcnew System::Drawing::Font(L"Lucida Calligraphy", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label20->Location = System::Drawing::Point(1347, 390);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(51, 19);
			this->label20->TabIndex = 77;
			this->label20->Text = L"value";
			// 
			// button31
			// 
			this->button31->BackColor = System::Drawing::Color::DarkCyan;
			this->button31->Font = (gcnew System::Drawing::Font(L"Franklin Gothic Heavy", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button31->Location = System::Drawing::Point(1351, 450);
			this->button31->Name = L"button31";
			this->button31->Size = System::Drawing::Size(88, 100);
			this->button31->TabIndex = 78;
			this->button31->Text = L"lablacian of guessian ";
			this->button31->UseVisualStyleBackColor = false;
			this->button31->Click += gcnew System::EventHandler(this, &MyForm::button31_Click);
			// 
			// zoombox3
			// 
			this->zoombox3->Location = System::Drawing::Point(17, 555);
			this->zoombox3->Name = L"zoombox3";
			this->zoombox3->Size = System::Drawing::Size(75, 20);
			this->zoombox3->TabIndex = 79;
			// 
			// zoombox4
			// 
			this->zoombox4->Location = System::Drawing::Point(16, 592);
			this->zoombox4->Name = L"zoombox4";
			this->zoombox4->Size = System::Drawing::Size(75, 20);
			this->zoombox4->TabIndex = 80;
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Font = (gcnew System::Drawing::Font(L"Lucida Calligraphy", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label21->Location = System::Drawing::Point(240, 555);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(50, 19);
			this->label21->TabIndex = 81;
			this->label21->Text = L"x last";
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Font = (gcnew System::Drawing::Font(L"Lucida Calligraphy", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label22->Location = System::Drawing::Point(240, 592);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(50, 19);
			this->label22->TabIndex = 82;
			this->label22->Text = L"y last";
			// 
			// button32
			// 
			this->button32->BackColor = System::Drawing::Color::DarkCyan;
			this->button32->Font = (gcnew System::Drawing::Font(L"Franklin Gothic Heavy", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button32->Location = System::Drawing::Point(1328, 216);
			this->button32->Name = L"button32";
			this->button32->Size = System::Drawing::Size(119, 55);
			this->button32->TabIndex = 83;
			this->button32->Text = L"Smothing (guessian)";
			this->button32->UseVisualStyleBackColor = false;
			this->button32->Click += gcnew System::EventHandler(this, &MyForm::button32_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button2->Font = (gcnew System::Drawing::Font(L"MV Boli", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(224, 695);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(144, 50);
			this->button2->TabIndex = 84;
			this->button2->Text = L"Compression";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click_1);
			// 
			// jpgg
			// 
			this->jpgg->Location = System::Drawing::Point(374, 711);
			this->jpgg->Name = L"jpgg";
			this->jpgg->Size = System::Drawing::Size(65, 20);
			this->jpgg->TabIndex = 85;
			this->jpgg->Text = L"80";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1477, 757);
			this->Controls->Add(this->jpgg);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button32);
			this->Controls->Add(this->label22);
			this->Controls->Add(this->label21);
			this->Controls->Add(this->zoombox4);
			this->Controls->Add(this->zoombox3);
			this->Controls->Add(this->button31);
			this->Controls->Add(this->label20);
			this->Controls->Add(this->threee);
			this->Controls->Add(this->label19);
			this->Controls->Add(this->label18);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->skew6);
			this->Controls->Add(this->skew5);
			this->Controls->Add(this->skew4);
			this->Controls->Add(this->skew3);
			this->Controls->Add(this->skew2);
			this->Controls->Add(this->button30);
			this->Controls->Add(this->button29);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->button28);
			this->Controls->Add(this->skew1);
			this->Controls->Add(this->button27);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->mediann);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->degree);
			this->Controls->Add(this->button26);
			this->Controls->Add(this->button25);
			this->Controls->Add(this->button24);
			this->Controls->Add(this->button23);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->add_pic_2);
			this->Controls->Add(this->zoomBox2);
			this->Controls->Add(this->zoomBox1);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->end);
			this->Controls->Add(this->begin);
			this->Controls->Add(this->button22);
			this->Controls->Add(this->ttbox);
			this->Controls->Add(this->button21);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->button20);
			this->Controls->Add(this->button19);
			this->Controls->Add(this->button18);
			this->Controls->Add(this->button17);
			this->Controls->Add(this->button16);
			this->Controls->Add(this->button15);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->fasd);
			this->Controls->Add(this->curve);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->yvalue);
			this->Controls->Add(this->xvalue);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->bindd);
			this->Controls->Add(this->equ);
			this->Controls->Add(this->showbutton);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void showbutton_Click(System::Object^ sender, System::EventArgs^ e) {
		marshal_context^ context = gcnew marshal_context();
		const char* src_path = context->marshal_as<const char*>(image_path);

		Mat src = imread(src_path, 0);
		dst7 = src;
		imwrite("orignal image.jpg", src);
		imwrite(src_path, src);
		pictureBox1->ImageLocation = image_path;

	}
	private: System::Void equ_Click(System::Object^ sender, System::EventArgs^ e) {
		marshal_context^ context = gcnew marshal_context();
		const char* src_path = context->marshal_as<const char*>(image_path);
		Mat src = imread(src_path, 0);
		equalizeHist(src, src);
		namedWindow("show", 0);
		imshow("show", src);
		
		imwrite("equlize.jpg", src);
		imwrite(src_path, src);
		pictureBox2->ImageLocation = image_path;
		
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		
		marshal_context^ context = gcnew marshal_context();
		const char* src_path = context->marshal_as<const char*>(image_path);
		Mat src = imread(src_path, 0);

		marshal_context^ context2 = gcnew marshal_context();
		const char* src_path2 = context2->marshal_as<const char*>(image_path2);
		Mat src_2 = imread(src_path2, 0);

		Mat dst_1(src.rows, src.cols, CV_8UC1);
		resize(src_2, src_2,src.size());
		for (int i = 0; i < src.rows; i++) {
			for (int j = 0; j < src.cols; j++) {
				dst_1.at<uchar>(i, j) = src.at<uchar>(i, j) * 0.6 + src_2.at<uchar>(i, j) * 0.4;
			}
		}
			src = dst_1;
		imwrite("blend.jpg", src);
		
		imwrite(src_path, src);
		pictureBox2->ImageLocation = image_path;

	}
	
private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {

	marshal_context^ context = gcnew marshal_context();
	const char* src_path = context->marshal_as<const char*>(image_path);

	Mat src = imread(src_path, 0);
	Mat dst3;
	int tx = Convert::ToInt32(xvalue->Text);
	int	ty = Convert::ToInt32(yvalue->Text);
	Mat TM = (Mat_<float>(2, 3) << 1, 0, tx, 0, 1, ty);
	warpAffine(src, src, TM, src.size());
	
	imwrite("transtion.jpg", src);
	
	imwrite(src_path, src);
	pictureBox2->ImageLocation = image_path;

}

private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	marshal_context^ context = gcnew marshal_context();
	const char* src_path = context->marshal_as<const char*>(image_path);
	Mat src = imread(src_path, 0);
	int deg = Convert::ToInt32(degree->Text);
	resize(src, src, cv::Size(src.cols,src.cols));
	Mat R = getRotationMatrix2D(Point2f(src.cols/2 , src.rows/2), deg, 1);
	warpAffine(src, src, R, src.size());
	imwrite(src_path, src);
	pictureBox2->ImageLocation = image_path;
}


private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	marshal_context^ context = gcnew marshal_context();
	const char* src_path = context->marshal_as<const char*>(image_path);
	Mat src = imread(src_path, 0);
	Mat dst_f;
 	flip(src, src, 0);
	imwrite("flipedx.jpg", src);
	imwrite(src_path, src);
	pictureBox2->ImageLocation = image_path;
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	marshal_context^ context = gcnew marshal_context();
	const char* src_path = context->marshal_as<const char*>(image_path);
	Mat src = imread(src_path, 0);
	Mat dst_f;
	flip(src, src, 1);
	imwrite("flipedy.jpg", src);
	imwrite(src_path, src);
	pictureBox2->ImageLocation = image_path;
}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	marshal_context^ context = gcnew marshal_context();
	const char* src_path = context->marshal_as<const char*>(image_path);

	Mat src = imread(src_path, 0);
	Mat dst_f;
	flip(src, src, -1);
	imwrite("flippedxy.jpg", src);
	imwrite(src_path, src);
	pictureBox2->ImageLocation = image_path;

}
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
	marshal_context^ context = gcnew marshal_context();
	const char* src_path = context->marshal_as<const char*>(image_path);
	Mat src = imread(src_path, 0);
	int box1 = Convert::ToInt32(zoomBox1->Text);
	int box2 = Convert::ToInt32(zoomBox2->Text);
	int box3 = Convert::ToInt32(zoombox3->Text);
	int box4 = Convert::ToInt32(zoombox4->Text);

	Mat dst_z;
	Mat src_zoom = src(Rect(box3, box4, box1, box2 ));
	resize(src_zoom, src, cv::Size(), 2, 2, 0);
	namedWindow("image_zoom", 0);
	imshow("image_zoom", src);
	waitKey(0);
	imwrite("zoom.jpg", src);
	imwrite(src_path, src);
	pictureBox2->ImageLocation = image_path;
}
private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
	marshal_context^ context = gcnew marshal_context();
	const char* src_path = context->marshal_as<const char*>(image_path);

	Mat src = imread(src_path, 0);
	for (int i = 0; i < src.rows; i++) {
		for (int j = 0; j < src.cols; j++) {
			src.at<uchar>(i, j) = 255 - src.at<uchar>(i, j);
		}
	}
	imwrite("negative.jpg", src);
	imwrite(src_path, src);
	pictureBox2->ImageLocation = image_path;
}
private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
	marshal_context^ context = gcnew marshal_context();
	const char* src_path = context->marshal_as<const char*>(image_path);

	Mat src = imread(src_path, 0);
	src.convertTo(src, CV_32F);
	src = src + 1;
	for (int i = 0; i < src.rows; i++) {
		for (int j = 0; j < src.cols; j++) {
			src.at<float>(i, j) = log(src.at<float>(i, j));
		}
	}
	normalize(src, src, 0, 255, NORM_MINMAX);
	convertScaleAbs(src, src);
	imwrite("log brightness.jpg", src);
	imwrite(src_path, src);
	pictureBox2->ImageLocation = image_path;
}
private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e) {
	marshal_context^ context = gcnew marshal_context();
	const char* src_path = context->marshal_as<const char*>(image_path);
	Mat src = imread(src_path, 0);
	float gg= Convert::ToDouble(curve->Text);
	src.convertTo(src, CV_32F);
	for (int i = 0; i < src.rows; i++) {
		for (int j = 0; j < src.cols; j++) {
			src.at<float>(i, j) = powf(src.at<float>(i, j), gg);
		}
	}
	normalize(src, src, 0, 255, NORM_MINMAX);
	convertScaleAbs(src, src);
	imwrite("powf pic.jpg", src);
	imwrite(src_path, src);
	pictureBox2->ImageLocation = image_path;
}
private: System::Void button12_Click(System::Object^ sender, System::EventArgs^ e) {
	marshal_context^ context = gcnew marshal_context();
	const char* src_path = context->marshal_as<const char*>(image_path);
	Mat src = imread(src_path, 0);
	Mat kernel_t = (Mat_<float>(3, 3) << 1, 1, 1, 1, 1, 1, 1, 1, 1);
	kernel_t = kernel_t / 9;
	filter2D(src, src, CV_8UC1, kernel_t);
	imwrite("smoothing tradiotonal.jpg", src);
	imwrite(src_path, src);
	pictureBox2->ImageLocation = image_path;
}
private: System::Void button13_Click(System::Object^ sender, System::EventArgs^ e) {
	marshal_context^ context = gcnew marshal_context();
	const char* src_path = context->marshal_as<const char*>(image_path);

	Mat src = imread(src_path, 0);
	
	Mat kernel_p = (Mat_<float>(5, 5) << 1, 2, 3, 2, 1, 2, 4, 6, 4, 2, 3, 6, 9, 6, 3, 2, 4, 6, 4, 2, 1, 2, 3, 2, 1);

	kernel_p = kernel_p / 81;
	filter2D(src, src, CV_8UC1, kernel_p);
	imwrite("smoothing prym.jpg", src);
	imwrite(src_path, src);
	pictureBox2->ImageLocation = image_path;
}

private: System::Void button14_Click(System::Object^ sender, System::EventArgs^ e) {
	marshal_context^ context = gcnew marshal_context();
	const char* src_path = context->marshal_as<const char*>(image_path);

	Mat src = imread(src_path, 0);

	Mat kernel_c = (Mat_<float>(5, 5) << 0, 1, 1, 1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 0);
	kernel_c = kernel_c / 21;
	filter2D(src, src, CV_8UC1, kernel_c);
	imwrite("smoothing circ.jpg", src);
	imwrite(src_path, src);
	pictureBox2->ImageLocation = image_path;
}
private: System::Void button15_Click(System::Object^ sender, System::EventArgs^ e) {
	marshal_context^ context = gcnew marshal_context();
	const char* src_path = context->marshal_as<const char*>(image_path);

	Mat src = imread(src_path, 0);
	
	Mat kernel_co = (Mat_<float>(5, 5) << 0, 0, 1, 0, 0, 0, 2, 2, 2, 0, 1, 2, 5, 2, 1, 0, 2, 2, 2, 0, 0, 0, 1, 0, 0);
	kernel_co = kernel_co / 81;
	filter2D(src, src, CV_8UC1, kernel_co);
	imwrite("smoothing cone.jpg", src);
	imwrite(src_path, src);
	pictureBox2->ImageLocation = image_path;
}
private: System::Void button16_Click(System::Object^ sender, System::EventArgs^ e) {
	int mm = Convert::ToInt32(mediann->Text);
	marshal_context^ context = gcnew marshal_context();
	const char* src_path = context->marshal_as<const char*>(image_path);
	Mat src = imread(src_path, 0);
	medianBlur(src, src, mm);
	imwrite("median.jpg", src);
	imwrite(src_path, src);
	pictureBox2->ImageLocation = image_path;
}
private: System::Void button17_Click(System::Object^ sender, System::EventArgs^ e) {
	marshal_context^ context = gcnew marshal_context();
	const char* src_path = context->marshal_as<const char*>(image_path);
	Mat src = imread(src_path, 0);
	Mat sobx;
	Sobel(src, sobx, CV_16UC1, 1, 0, 5);
	convertScaleAbs(sobx, sobx);
	src = sobx;
	imwrite("sobel x.jpg", src);
	imwrite(src_path, src);
	pictureBox2->ImageLocation = image_path;
}
private: System::Void button18_Click(System::Object^ sender, System::EventArgs^ e) {
	marshal_context^ context = gcnew marshal_context();
	const char* src_path = context->marshal_as<const char*>(image_path);
	Mat src = imread(src_path, 0);
	Mat soby;
	Sobel(src, soby, CV_16UC1, 0, 1, 5);
	convertScaleAbs(soby, soby);
	src = soby;
	imwrite("sobel y.jpg", src);
	imwrite(src_path, src);
	pictureBox2->ImageLocation = image_path;
}
private: System::Void button19_Click(System::Object^ sender, System::EventArgs^ e) {
	marshal_context^ context = gcnew marshal_context();
	const char* src_path = context->marshal_as<const char*>(image_path);
	Mat src = imread(src_path, 0);
	Mat dstv, dsth, dst;
	Sobel(src, dstv, CV_16UC1, 1, 0, 5);
	convertScaleAbs(dstv, dstv);
	namedWindow("v edge", 0);
	imshow("v edge", dstv);
	Sobel(src, dsth, CV_16UC1, 0, 1, 5);
	convertScaleAbs(dsth, dsth);
	namedWindow("h edge", 0);
	imshow("h edge", dsth);
	addWeighted(dstv, 1, dsth, 1, 0, src);
	namedWindow("edges", 0);
	imshow("edges", src);
	waitKey(0);
	imwrite("sobel xy.jpg", src);
	imwrite(src_path, src);
	pictureBox2->ImageLocation = image_path;
}
	   System::String^ image_path;
	   System::String^ image_path2;


private: System::Void button20_Click(System::Object^ sender, System::EventArgs^ e) {
	OpenFileDialog^ openFileDialog1 = gcnew OpenFileDialog;
	
	openFileDialog1->InitialDirectory = "c:\\";
	openFileDialog1->Filter = "PNG (*.png)|*.png|JPG (*.jpg)|*.jpg";
	openFileDialog1->FilterIndex = 2;
	openFileDialog1->RestoreDirectory = true;

	if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
		pictureBox1->ImageLocation = openFileDialog1->FileName;
		image_path = openFileDialog1->FileName;
	}

}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	marshal_context^ context = gcnew marshal_context();
	const char* src_path = context->marshal_as<const char*>(image_path);
	Mat src = imread(src_path, 0);
	Mat dst33 = imread("orignal image.jpg");
	imwrite("orignal image.jpg", dst33);
	src = dst33;
	imwrite(src_path, src);
}
private: System::Void button21_Click(System::Object^ sender, System::EventArgs^ e) {
	marshal_context^ context = gcnew marshal_context();
	const char* src_path = context->marshal_as<const char*>(image_path);
	Mat src = imread(src_path, 0);
	int tt = Convert::ToInt32(ttbox->Text);
	for (int i = 0; i < src.rows; i++) {
		for (int j = 0; j < src.cols; j++) {
			if (src.at<uchar>(i, j) & tt)
				src.at<uchar>(i, j) = 255;
			else src.at<uchar>(i, j) = 0;
		}}
	imwrite("bit plane.jpg", src);
	imwrite(src_path, src);
	pictureBox2->ImageLocation = image_path;
}
private: System::Void button22_Click(System::Object^ sender, System::EventArgs^ e) {
	marshal_context^ context = gcnew marshal_context();
	const char* src_path = context->marshal_as<const char*>(image_path);
	Mat src = imread(src_path, 0);
	int tbegin = Convert::ToInt32(begin->Text);
	int tend = Convert::ToInt32(end->Text);
	for (int i = 0; i < src.rows; i++) {
		for (int j = 0; j < src.cols; j++) {
			if (src.at<uchar>(i, j) > tbegin && src.at<uchar>(i, j) < tend)
				src.at<uchar>(i, j) = 255;
		else src.at<uchar>(i, j) = src.at<uchar>(i, j);
		}
	}
	imwrite("grey.jpg", src);
	imwrite(src_path, src);
	pictureBox2->ImageLocation = image_path;
}
private: System::Void add_pic_2_Click(System::Object^ sender, System::EventArgs^ e) {
	OpenFileDialog^ openFileDialog2 = gcnew OpenFileDialog;

	openFileDialog2->InitialDirectory = "c:\\";
	openFileDialog2->Filter = "PNG (*.png)|*.png|JPG (*.jpg)|*.jpg";
	openFileDialog2->FilterIndex = 2;
	openFileDialog2->RestoreDirectory = true;

	if (openFileDialog2->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
		pictureBox3->ImageLocation = openFileDialog2->FileName;
		image_path2 = openFileDialog2->FileName;
	}
}
private: System::Void button23_Click(System::Object^ sender, System::EventArgs^ e) {
	marshal_context^ context = gcnew marshal_context();
	const char* src_path = context->marshal_as<const char*>(image_path);
	Mat src = imread(src_path,0);
	int histSize = 256;
	float range[] = { 0, 256 }; //the upper boundary is exclusive
	const float* histRange[] = { range };
	bool uniform = true, accumulate = false;

	Mat b_hist;
	calcHist(&src, 1, 0, Mat(), b_hist, 1, &histSize, histRange, uniform, accumulate);

	int hist_w = 512, hist_h = 400;
	int bin_w = cvRound((double)hist_w / histSize);

	Mat histImage(hist_h, hist_w, CV_8UC1, Scalar(0, 0, 0));
	normalize(b_hist, b_hist, 0, histImage.rows, NORM_MINMAX, -1, Mat());

	for (int i = 1; i < histSize; i++)
	{
		line(histImage, cvPoint(bin_w * (i - 1), hist_h - cvRound(b_hist.at<float>(i - 1))),
			cvPoint(bin_w * (i), hist_h - cvRound(b_hist.at<float>(i))),
			Scalar(255, 255, 255), 2, 8, 0);
	}
	namedWindow("Histogram of Image 1", 0);
	imshow("Histogram of Image 1", histImage);
}
private: System::Void button24_Click(System::Object^ sender, System::EventArgs^ e) {
	marshal_context^ context = gcnew marshal_context();
	const char* src_path = context->marshal_as<const char*>(image_path);
	Mat src = imread(src_path, 0);
	int three = Convert::ToInt32(threee->Text);
	threshold(src, src, three, 255, THRESH_BINARY);
	imwrite("thresh.jpg", src);
	imwrite(src_path, src);
	pictureBox2->ImageLocation = image_path;
}
private: System::Void button25_Click(System::Object^ sender, System::EventArgs^ e) {
	marshal_context^ context = gcnew marshal_context();
	const char* src_path = context->marshal_as<const char*>(image_path);
	Mat src = imread(src_path, 0);
	Mat kernel_E = (Mat_<float>(3, 3) << -1, -1, -1, -1, 8, -1, -1, -1, -1);
	filter2D(src, src, CV_8UC1, kernel_E);
	imwrite("edge passed.jpg", src);
	imwrite(src_path, src);
	pictureBox2->ImageLocation = image_path;
}
private: System::Void button26_Click(System::Object^ sender, System::EventArgs^ e) {
	marshal_context^ context = gcnew marshal_context();
	const char* src_path = context->marshal_as<const char*>(image_path);
	Mat src = imread(src_path, 0);
	Mat kernel_S = (Mat_<float>(3, 3) << 1, 2, 1, 2, 4, 2, 1, 2, 1);
	kernel_S = kernel_S / 16;
	filter2D(src, src, CV_8UC1, kernel_S);
	threshold(src, src, 100, 255, THRESH_BINARY);
	Mat kernel_E = (Mat_<float>(3, 3) << -1, -1, -1, -1, 8, -1, -1, -1, -1);
	filter2D(src ,src, CV_8UC1, kernel_E);
	imwrite("segmantion.jpg", src);
	imwrite(src_path, src);
	pictureBox2->ImageLocation = image_path;

}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	marshal_context^ context = gcnew marshal_context();
	const char* src_path = context->marshal_as<const char*>(image_path);
	Mat src = imread(src_path, 0);
	src=dst7;
	imwrite("undo image.jpg", src);
	imwrite(src_path, src);
	pictureBox2->ImageLocation = image_path;
}
private: System::Void button27_Click(System::Object^ sender, System::EventArgs^ e) {
	marshal_context^ context = gcnew marshal_context();
	const char* src_path = context->marshal_as<const char*>(image_path);
	Mat src = imread(src_path, 0);
	int skk1 = Convert::ToInt32(skew1->Text);
	int skk2 = Convert::ToInt32(skew2->Text);
	int skk3 = Convert::ToInt32(skew3->Text);
	int skk4 = Convert::ToInt32(skew4->Text);
	int skk5 = Convert::ToInt32(skew5->Text);
	int skk6 = Convert::ToInt32(skew6->Text);

	Point2f src_P[3];
	src_P[0] = Point2f(skk1,skk2);
	src_P[1] = Point2f(src.cols - skk3, skk4);
	src_P[2] = Point2f(skk5, src.rows - skk6);
	Point2f dst_p[3];
	dst_p[0] = Point2f(0, 0);
	dst_p[1] = Point2f(src.cols - 1, 0);
	dst_p[2] = Point2f(0, src.rows - 1);
	Mat sk = getAffineTransform(src_P, dst_p);
	warpAffine(src, src, sk, src.size());

	imwrite("skewing.jpg", src);
	imwrite(src_path, src);
	pictureBox2->ImageLocation = image_path;
	
}
private: System::Void button28_Click(System::Object^ sender, System::EventArgs^ e) {
	marshal_context^ context = gcnew marshal_context();
	const char* src_path = context->marshal_as<const char*>(image_path);
	Mat src = imread(src_path, 0);
	while (1)
	{
		int m = getOptimalDFTSize(src.rows);
		int n = getOptimalDFTSize(src.cols);
		Mat padded;
		copyMakeBorder(src, padded, 0, m - src.rows, 0, n - src.cols, 0);
		padded.convertTo(padded, CV_32FC1, 1.0 / 255.0);
		Mat planes[2] = { padded,Mat::zeros(padded.size(),CV_32FC1) };
		Mat complexI;
		merge(planes, 2, complexI);
		dft(complexI, complexI);
		split(complexI, planes);
		FI = DFTSHOW(planes);
		namedWindow("before", 0);
		imshow("before", FI);
		int cx = complexI.cols / 2;
		int cy = complexI.rows / 2;
		Mat p1(complexI, Rect(0, 0, cx, cy));
		Mat p2(complexI, Rect(cx, 0, cx, cy));
		Mat p3(complexI, Rect(0, cy, cx, cy));
		Mat p4(complexI, Rect(cx, cy, cx, cy));
		Mat temp;
		p1.copyTo(temp);
		p4.copyTo(p1);
		temp.copyTo(p4);
		p2.copyTo(temp);
		p3.copyTo(p2);
		temp.copyTo(p3);
		split(complexI, planes);

		FI = DFTSHOW(planes);
		namedWindow("after", 0);
		imshow("after", FI);

		Mat Lfilter(complexI.size(), CV_32FC1);
		namedWindow("after IDFT", 0);
		createTrackbar("d0", "after IDFT", &d0, 200);
		for (int i = 0; i < Lfilter.rows; i++)
			for (int j = 0; j < Lfilter.cols; j++)
			{
				double z1 = i - Lfilter.rows / 2;
				double z2 = j - Lfilter.cols / 2;
				if (sqrt(pow(z1, 2) + pow(z2, 2)) < d0)
					Lfilter.at<float>(i, j) = 0;
				else
					Lfilter.at<float>(i, j) = 1;
			}
		namedWindow("filter", 0);
		imshow("filter", Lfilter);
		Mat outR, outI;
		multiply(planes[0], Lfilter, outR);
		multiply(planes[1], Lfilter, outI);
		Mat out_planes[2] = { outR,outI };
		Mat out_complexI;
		merge(out_planes, 2, out_complexI);
		idft(out_complexI, out_complexI);

		split(out_complexI, planes);
		Mat out;
		magnitude(planes[0], planes[1], out);
		normalize(out, out, 1, 0, CV_MINMAX);
		imshow("after IDFT", out);
		waitKey(0);
		imwrite("after.jpg", out);
		CloseWindow;
	}
	imwrite(src_path, src);
}
private: System::Void button29_Click(System::Object^ sender, System::EventArgs^ e) {
	marshal_context^ context = gcnew marshal_context();
	const char* src_path = context->marshal_as<const char*>(image_path);
	Mat src = imread(src_path, 0);
	marshal_context^ context2 = gcnew marshal_context();
	const char* src_path2 = context2->marshal_as<const char*>(image_path2);
	Mat src_2 = imread(src_path2, 0);
	src = src + src_2;
	imwrite("new image adding.jpg", src);
	imwrite(src_path, src);
	pictureBox2->ImageLocation = image_path;
}
private: System::Void button30_Click(System::Object^ sender, System::EventArgs^ e) {
	marshal_context^ context = gcnew marshal_context();
	const char* src_path = context->marshal_as<const char*>(image_path);
	Mat src = imread(src_path, 0);

	marshal_context^ context2 = gcnew marshal_context();
	const char* src_path2 = context2->marshal_as<const char*>(image_path2);
	Mat src_2 = imread(src_path2, 0);

	src = src - src_2;
	imwrite("new image adding.jpg", src);

	imwrite(src_path, src);
	pictureBox2->ImageLocation = image_path;
}
private: System::Void button31_Click(System::Object^ sender, System::EventArgs^ e) {
	marshal_context^ context = gcnew marshal_context();
	const char* src_path = context->marshal_as<const char*>(image_path);
	Mat src = imread(src_path, 0);
	Mat LOGKernel = (Mat_<double>(3, 3) << 0.4038, 0.8021, 0.4038, 0.8021, -4.8233, 0.8021, 0.4038, 0.8021, 0.4038);
	
	filter2D(src, src, CV_8UC1, LOGKernel);
	imwrite("lablacian of guessian.jpg", src);
	imwrite(src_path, src);
	pictureBox2->ImageLocation = image_path;
}
private: System::Void button32_Click(System::Object^ sender, System::EventArgs^ e) {
	marshal_context^ context = gcnew marshal_context();
	const char* src_path = context->marshal_as<const char*>(image_path);

	Mat src = imread(src_path, 0);

	Mat kernel_g = (Mat_<float>(3, 3) << 1, 2, 1, 2, 4, 2, 1, 2, 1);

	kernel_g = kernel_g / 16;
	filter2D(src, src, CV_8UC1, kernel_g);
	imwrite("smoothing guessian.jpg", src);
	imwrite(src_path, src);
	pictureBox2->ImageLocation = image_path;
}
private: System::Void button2_Click_1(System::Object^ sender, System::EventArgs^ e) {
	marshal_context^ context = gcnew marshal_context();
	const char* src_path = context->marshal_as<const char*>(image_path);
	Mat src = imread(src_path, 0);
	imwrite(src_path, src);
	std::vector<int>params;
	params.push_back(CV_IMWRITE_JPEG_QUALITY);
	params.push_back(Convert::ToInt32(jpgg->Text));
	imwrite("compress.jpg", src);
	pictureBox2->ImageLocation = image_path;
}
};
}
