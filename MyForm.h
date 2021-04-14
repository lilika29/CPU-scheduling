#pragma once

//#include "iostream"
//#include "fstream""
// #include <sstream>
#include <math.h>
using namespace System;
using namespace System::Runtime::InteropServices;
#define max(a, b)  (((a) > (b)) ? (a) : (b)) 
using namespace System;

using namespace System::IO;

//using namespace System::IO::TextReader;
//using namespace System::IO;
using namespace std;



namespace testmmdi {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	const int n = 20;
	const int lifeTime = 10000;
	int rowN = 0;
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
	private: System::Windows::Forms::TextBox^ textBox3;
	protected:
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;

	private: System::Windows::Forms::Button^ button1;

	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ lb0;
	private: System::Windows::Forms::Label^ lb1;
	private: System::Windows::Forms::Label^ lb2;
	private: System::Windows::Forms::Label^ lb3;
	private: System::Windows::Forms::Label^ lb4;
	private: System::Windows::Forms::Label^ lb9;
	private: System::Windows::Forms::Label^ lb8;





	private: System::Windows::Forms::Label^ lb7;


	private: System::Windows::Forms::Label^ lb6;


	private: System::Windows::Forms::Label^ lb5;

	private: System::Windows::Forms::Label^ io1;
	private: System::Windows::Forms::Label^ lb19;

	private: System::Windows::Forms::Label^ lb18;

	private: System::Windows::Forms::Label^ lb17;

	private: System::Windows::Forms::Label^ lb16;

	private: System::Windows::Forms::Label^ lb15;

	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Label^ lb14;

	private: System::Windows::Forms::Label^ lb13;

	private: System::Windows::Forms::Label^ lb12;

	private: System::Windows::Forms::Label^ lb11;
	private: System::Windows::Forms::Label^ lb10;




	private: System::Windows::Forms::Label^ label23;
	private: System::Windows::Forms::Label^ lb29;

	private: System::Windows::Forms::Label^ lb28;

	private: System::Windows::Forms::Label^ lb27;

	private: System::Windows::Forms::Label^ lb26;

	private: System::Windows::Forms::Label^ lb25;

	private: System::Windows::Forms::Label^ label29;
	private: System::Windows::Forms::Label^ lb24;

	private: System::Windows::Forms::Label^ lb23;

	private: System::Windows::Forms::Label^ lb22;

	private: System::Windows::Forms::Label^ lb21;

	private: System::Windows::Forms::Label^ lb20;

	private: System::Windows::Forms::Label^ label35;
	private: System::Windows::Forms::Label^ lb39;

private: System::Windows::Forms::Label^ lb38;

private: System::Windows::Forms::Label^ lb37;

private: System::Windows::Forms::Label^ lb36;

	private: System::Windows::Forms::Label^ lb35;

	private: System::Windows::Forms::Label^ label41;
private: System::Windows::Forms::Label^ lb34;

private: System::Windows::Forms::Label^ lb33;


private: System::Windows::Forms::Label^ lb32;

private: System::Windows::Forms::Label^ lb31;

	private: System::Windows::Forms::Label^ lb30;

	private: System::Windows::Forms::Label^ label47;
private: System::Windows::Forms::Label^ lb49;

private: System::Windows::Forms::Label^ lb48;

private: System::Windows::Forms::Label^ lb47;

private: System::Windows::Forms::Label^ lb46;

private: System::Windows::Forms::Label^ lb45;

	private: System::Windows::Forms::Label^ label53;
private: System::Windows::Forms::Label^ lb44;

private: System::Windows::Forms::Label^ lb43;

private: System::Windows::Forms::Label^ lb42;

private: System::Windows::Forms::Label^ lb41;

private: System::Windows::Forms::Label^ lb40;

	private: System::Windows::Forms::Label^ label59;
private: System::Windows::Forms::Label^ lb59;

private: System::Windows::Forms::Label^ lb58;

private: System::Windows::Forms::Label^ lb57;

private: System::Windows::Forms::Label^ lb56;

private: System::Windows::Forms::Label^ lb55;


	private: System::Windows::Forms::Label^ label65;
private: System::Windows::Forms::Label^ lb54;

private: System::Windows::Forms::Label^ lb53;


private: System::Windows::Forms::Label^ lb52;

private: System::Windows::Forms::Label^ lb51;

private: System::Windows::Forms::Label^ lb50;

	private: System::Windows::Forms::Label^ label71;
private: System::Windows::Forms::Label^ lb64;

private: System::Windows::Forms::Label^ lb63;

private: System::Windows::Forms::Label^ lb62;

private: System::Windows::Forms::Label^ lb61;

private: System::Windows::Forms::Label^ lb60;

	private: System::Windows::Forms::Label^ label83;

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
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->lb0 = (gcnew System::Windows::Forms::Label());
			this->lb1 = (gcnew System::Windows::Forms::Label());
			this->lb2 = (gcnew System::Windows::Forms::Label());
			this->lb3 = (gcnew System::Windows::Forms::Label());
			this->lb4 = (gcnew System::Windows::Forms::Label());
			this->lb9 = (gcnew System::Windows::Forms::Label());
			this->lb8 = (gcnew System::Windows::Forms::Label());
			this->lb7 = (gcnew System::Windows::Forms::Label());
			this->lb6 = (gcnew System::Windows::Forms::Label());
			this->lb5 = (gcnew System::Windows::Forms::Label());
			this->io1 = (gcnew System::Windows::Forms::Label());
			this->lb19 = (gcnew System::Windows::Forms::Label());
			this->lb18 = (gcnew System::Windows::Forms::Label());
			this->lb17 = (gcnew System::Windows::Forms::Label());
			this->lb16 = (gcnew System::Windows::Forms::Label());
			this->lb15 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->lb14 = (gcnew System::Windows::Forms::Label());
			this->lb13 = (gcnew System::Windows::Forms::Label());
			this->lb12 = (gcnew System::Windows::Forms::Label());
			this->lb11 = (gcnew System::Windows::Forms::Label());
			this->lb10 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->lb29 = (gcnew System::Windows::Forms::Label());
			this->lb28 = (gcnew System::Windows::Forms::Label());
			this->lb27 = (gcnew System::Windows::Forms::Label());
			this->lb26 = (gcnew System::Windows::Forms::Label());
			this->lb25 = (gcnew System::Windows::Forms::Label());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->lb24 = (gcnew System::Windows::Forms::Label());
			this->lb23 = (gcnew System::Windows::Forms::Label());
			this->lb22 = (gcnew System::Windows::Forms::Label());
			this->lb21 = (gcnew System::Windows::Forms::Label());
			this->lb20 = (gcnew System::Windows::Forms::Label());
			this->label35 = (gcnew System::Windows::Forms::Label());
			this->lb39 = (gcnew System::Windows::Forms::Label());
			this->lb38 = (gcnew System::Windows::Forms::Label());
			this->lb37 = (gcnew System::Windows::Forms::Label());
			this->lb36 = (gcnew System::Windows::Forms::Label());
			this->lb35 = (gcnew System::Windows::Forms::Label());
			this->label41 = (gcnew System::Windows::Forms::Label());
			this->lb34 = (gcnew System::Windows::Forms::Label());
			this->lb33 = (gcnew System::Windows::Forms::Label());
			this->lb32 = (gcnew System::Windows::Forms::Label());
			this->lb31 = (gcnew System::Windows::Forms::Label());
			this->lb30 = (gcnew System::Windows::Forms::Label());
			this->label47 = (gcnew System::Windows::Forms::Label());
			this->lb49 = (gcnew System::Windows::Forms::Label());
			this->lb48 = (gcnew System::Windows::Forms::Label());
			this->lb47 = (gcnew System::Windows::Forms::Label());
			this->lb46 = (gcnew System::Windows::Forms::Label());
			this->lb45 = (gcnew System::Windows::Forms::Label());
			this->label53 = (gcnew System::Windows::Forms::Label());
			this->lb44 = (gcnew System::Windows::Forms::Label());
			this->lb43 = (gcnew System::Windows::Forms::Label());
			this->lb42 = (gcnew System::Windows::Forms::Label());
			this->lb41 = (gcnew System::Windows::Forms::Label());
			this->lb40 = (gcnew System::Windows::Forms::Label());
			this->label59 = (gcnew System::Windows::Forms::Label());
			this->lb59 = (gcnew System::Windows::Forms::Label());
			this->lb58 = (gcnew System::Windows::Forms::Label());
			this->lb57 = (gcnew System::Windows::Forms::Label());
			this->lb56 = (gcnew System::Windows::Forms::Label());
			this->lb55 = (gcnew System::Windows::Forms::Label());
			this->label65 = (gcnew System::Windows::Forms::Label());
			this->lb54 = (gcnew System::Windows::Forms::Label());
			this->lb53 = (gcnew System::Windows::Forms::Label());
			this->lb52 = (gcnew System::Windows::Forms::Label());
			this->lb51 = (gcnew System::Windows::Forms::Label());
			this->lb50 = (gcnew System::Windows::Forms::Label());
			this->label71 = (gcnew System::Windows::Forms::Label());
			this->lb64 = (gcnew System::Windows::Forms::Label());
			this->lb63 = (gcnew System::Windows::Forms::Label());
			this->lb62 = (gcnew System::Windows::Forms::Label());
			this->lb61 = (gcnew System::Windows::Forms::Label());
			this->lb60 = (gcnew System::Windows::Forms::Label());
			this->label83 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(0, 348);
			this->textBox3->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->textBox3->Multiline = true;
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(252, 380);
			this->textBox3->TabIndex = 3;
			this->textBox3->Text = L"C:\\Users\\laghd\\source\\repos\\testmmdi\\file.txt";
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox3_TextChanged);
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::Yellow;
			this->textBox1->Location = System::Drawing::Point(525, 554);
			this->textBox1->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(55, 35);
			this->textBox1->TabIndex = 4;
			this->textBox1->Text = L"time";
			// 
			// label5
			// 
			this->label5->Location = System::Drawing::Point(1453, 13);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(93, 20);
			this->label5->TabIndex = 7;
			this->label5->Text = L"Terminated";
			this->label5->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// label4
			// 
			this->label4->Location = System::Drawing::Point(1378, 13);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(69, 20);
			this->label4->TabIndex = 5;
			this->label4->Text = L"Waiting";
			this->label4->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->label4->Click += gcnew System::EventHandler(this, &MyForm::label4_Click);
			// 
			// label3
			// 
			this->label3->Location = System::Drawing::Point(1294, 13);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(76, 20);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Running";
			this->label3->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// label2
			// 
			this->label2->Location = System::Drawing::Point(1212, 13);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(74, 20);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Ready";
			this->label2->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->label2->Click += gcnew System::EventHandler(this, &MyForm::label2_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(367, 498);
			this->button1->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(112, 35);
			this->button1->TabIndex = 8;
			this->button1->Text = L"FCFS";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click_2);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(84, 11);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(40, 20);
			this->label6->TabIndex = 0;
			this->label6->Text = L"New";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(25, 43);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(48, 20);
			this->label1->TabIndex = 9;
			this->label1->Text = L"cpu 1";
			// 
			// lb0
			// 
			this->lb0->AutoSize = true;
			this->lb0->Location = System::Drawing::Point(84, 44);
			this->lb0->Name = L"lb0";
			this->lb0->Size = System::Drawing::Size(14, 20);
			this->lb0->TabIndex = 10;
			this->lb0->Text = L"-";
			// 
			// lb1
			// 
			this->lb1->AutoSize = true;
			this->lb1->Location = System::Drawing::Point(1235, 43);
			this->lb1->Name = L"lb1";
			this->lb1->Size = System::Drawing::Size(14, 20);
			this->lb1->TabIndex = 11;
			this->lb1->Text = L"-";
			// 
			// lb2
			// 
			this->lb2->AutoSize = true;
			this->lb2->Location = System::Drawing::Point(1308, 43);
			this->lb2->Name = L"lb2";
			this->lb2->Size = System::Drawing::Size(14, 20);
			this->lb2->TabIndex = 12;
			this->lb2->Text = L"-";
			// 
			// lb3
			// 
			this->lb3->AutoSize = true;
			this->lb3->Location = System::Drawing::Point(1394, 43);
			this->lb3->Name = L"lb3";
			this->lb3->Size = System::Drawing::Size(14, 20);
			this->lb3->TabIndex = 13;
			this->lb3->Text = L"-";
			// 
			// lb4
			// 
			this->lb4->AutoSize = true;
			this->lb4->Location = System::Drawing::Point(1471, 43);
			this->lb4->Name = L"lb4";
			this->lb4->Size = System::Drawing::Size(14, 20);
			this->lb4->TabIndex = 14;
			this->lb4->Text = L"-";
			// 
			// lb9
			// 
			this->lb9->AutoSize = true;
			this->lb9->Location = System::Drawing::Point(1471, 63);
			this->lb9->Name = L"lb9";
			this->lb9->Size = System::Drawing::Size(14, 20);
			this->lb9->TabIndex = 20;
			this->lb9->Text = L"-";
			// 
			// lb8
			// 
			this->lb8->AutoSize = true;
			this->lb8->Location = System::Drawing::Point(1394, 63);
			this->lb8->Name = L"lb8";
			this->lb8->Size = System::Drawing::Size(14, 20);
			this->lb8->TabIndex = 19;
			this->lb8->Text = L"-";
			// 
			// lb7
			// 
			this->lb7->AutoSize = true;
			this->lb7->Location = System::Drawing::Point(1308, 63);
			this->lb7->Name = L"lb7";
			this->lb7->Size = System::Drawing::Size(14, 20);
			this->lb7->TabIndex = 18;
			this->lb7->Text = L"-";
			// 
			// lb6
			// 
			this->lb6->AutoSize = true;
			this->lb6->Location = System::Drawing::Point(1235, 63);
			this->lb6->Name = L"lb6";
			this->lb6->Size = System::Drawing::Size(14, 20);
			this->lb6->TabIndex = 17;
			this->lb6->Text = L"-";
			// 
			// lb5
			// 
			this->lb5->AutoSize = true;
			this->lb5->Location = System::Drawing::Point(84, 63);
			this->lb5->Name = L"lb5";
			this->lb5->Size = System::Drawing::Size(14, 20);
			this->lb5->TabIndex = 16;
			this->lb5->Text = L"-";
			// 
			// io1
			// 
			this->io1->AutoSize = true;
			this->io1->Location = System::Drawing::Point(25, 63);
			this->io1->Name = L"io1";
			this->io1->Size = System::Drawing::Size(38, 20);
			this->io1->TabIndex = 15;
			this->io1->Text = L"i/o 1";
			// 
			// lb19
			// 
			this->lb19->AutoSize = true;
			this->lb19->Location = System::Drawing::Point(1471, 107);
			this->lb19->Name = L"lb19";
			this->lb19->Size = System::Drawing::Size(14, 20);
			this->lb19->TabIndex = 32;
			this->lb19->Text = L"-";
			// 
			// lb18
			// 
			this->lb18->AutoSize = true;
			this->lb18->Location = System::Drawing::Point(1394, 107);
			this->lb18->Name = L"lb18";
			this->lb18->Size = System::Drawing::Size(14, 20);
			this->lb18->TabIndex = 31;
			this->lb18->Text = L"-";
			// 
			// lb17
			// 
			this->lb17->AutoSize = true;
			this->lb17->Location = System::Drawing::Point(1308, 107);
			this->lb17->Name = L"lb17";
			this->lb17->Size = System::Drawing::Size(14, 20);
			this->lb17->TabIndex = 30;
			this->lb17->Text = L"-";
			// 
			// lb16
			// 
			this->lb16->AutoSize = true;
			this->lb16->Location = System::Drawing::Point(1235, 107);
			this->lb16->Name = L"lb16";
			this->lb16->Size = System::Drawing::Size(14, 20);
			this->lb16->TabIndex = 29;
			this->lb16->Text = L"-";
			// 
			// lb15
			// 
			this->lb15->AutoSize = true;
			this->lb15->Location = System::Drawing::Point(84, 107);
			this->lb15->Name = L"lb15";
			this->lb15->Size = System::Drawing::Size(14, 20);
			this->lb15->TabIndex = 28;
			this->lb15->Text = L"-";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(25, 107);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(38, 20);
			this->label17->TabIndex = 27;
			this->label17->Text = L"i/o 2";
			// 
			// lb14
			// 
			this->lb14->AutoSize = true;
			this->lb14->Location = System::Drawing::Point(1471, 87);
			this->lb14->Name = L"lb14";
			this->lb14->Size = System::Drawing::Size(14, 20);
			this->lb14->TabIndex = 26;
			this->lb14->Text = L"-";
			// 
			// lb13
			// 
			this->lb13->AutoSize = true;
			this->lb13->Location = System::Drawing::Point(1394, 87);
			this->lb13->Name = L"lb13";
			this->lb13->Size = System::Drawing::Size(14, 20);
			this->lb13->TabIndex = 25;
			this->lb13->Text = L"-";
			// 
			// lb12
			// 
			this->lb12->AutoSize = true;
			this->lb12->Location = System::Drawing::Point(1308, 87);
			this->lb12->Name = L"lb12";
			this->lb12->Size = System::Drawing::Size(14, 20);
			this->lb12->TabIndex = 24;
			this->lb12->Text = L"-";
			// 
			// lb11
			// 
			this->lb11->AutoSize = true;
			this->lb11->Location = System::Drawing::Point(1235, 87);
			this->lb11->Name = L"lb11";
			this->lb11->Size = System::Drawing::Size(14, 20);
			this->lb11->TabIndex = 23;
			this->lb11->Text = L"-";
			// 
			// lb10
			// 
			this->lb10->AutoSize = true;
			this->lb10->Location = System::Drawing::Point(84, 87);
			this->lb10->Name = L"lb10";
			this->lb10->Size = System::Drawing::Size(14, 20);
			this->lb10->TabIndex = 22;
			this->lb10->Text = L"-";
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Location = System::Drawing::Point(25, 87);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(48, 20);
			this->label23->TabIndex = 21;
			this->label23->Text = L"cpu 2";
			// 
			// lb29
			// 
			this->lb29->AutoSize = true;
			this->lb29->Location = System::Drawing::Point(1471, 150);
			this->lb29->Name = L"lb29";
			this->lb29->Size = System::Drawing::Size(14, 20);
			this->lb29->TabIndex = 44;
			this->lb29->Text = L"-";
			// 
			// lb28
			// 
			this->lb28->AutoSize = true;
			this->lb28->Location = System::Drawing::Point(1394, 150);
			this->lb28->Name = L"lb28";
			this->lb28->Size = System::Drawing::Size(14, 20);
			this->lb28->TabIndex = 43;
			this->lb28->Text = L"-";
			// 
			// lb27
			// 
			this->lb27->AutoSize = true;
			this->lb27->Location = System::Drawing::Point(1308, 150);
			this->lb27->Name = L"lb27";
			this->lb27->Size = System::Drawing::Size(14, 20);
			this->lb27->TabIndex = 42;
			this->lb27->Text = L"-";
			// 
			// lb26
			// 
			this->lb26->AutoSize = true;
			this->lb26->Location = System::Drawing::Point(1235, 150);
			this->lb26->Name = L"lb26";
			this->lb26->Size = System::Drawing::Size(14, 20);
			this->lb26->TabIndex = 41;
			this->lb26->Text = L"-";
			// 
			// lb25
			// 
			this->lb25->AutoSize = true;
			this->lb25->Location = System::Drawing::Point(84, 150);
			this->lb25->Name = L"lb25";
			this->lb25->Size = System::Drawing::Size(14, 20);
			this->lb25->TabIndex = 40;
			this->lb25->Text = L"-";
			// 
			// label29
			// 
			this->label29->AutoSize = true;
			this->label29->Location = System::Drawing::Point(25, 150);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(38, 20);
			this->label29->TabIndex = 39;
			this->label29->Text = L"i/o 3";
			// 
			// lb24
			// 
			this->lb24->AutoSize = true;
			this->lb24->Location = System::Drawing::Point(1471, 130);
			this->lb24->Name = L"lb24";
			this->lb24->Size = System::Drawing::Size(14, 20);
			this->lb24->TabIndex = 38;
			this->lb24->Text = L"-";
			// 
			// lb23
			// 
			this->lb23->AutoSize = true;
			this->lb23->Location = System::Drawing::Point(1394, 130);
			this->lb23->Name = L"lb23";
			this->lb23->Size = System::Drawing::Size(14, 20);
			this->lb23->TabIndex = 37;
			this->lb23->Text = L"-";
			// 
			// lb22
			// 
			this->lb22->AutoSize = true;
			this->lb22->Location = System::Drawing::Point(1308, 130);
			this->lb22->Name = L"lb22";
			this->lb22->Size = System::Drawing::Size(14, 20);
			this->lb22->TabIndex = 36;
			this->lb22->Text = L"-";
			// 
			// lb21
			// 
			this->lb21->AutoSize = true;
			this->lb21->Location = System::Drawing::Point(1235, 130);
			this->lb21->Name = L"lb21";
			this->lb21->Size = System::Drawing::Size(14, 20);
			this->lb21->TabIndex = 35;
			this->lb21->Text = L"-";
			// 
			// lb20
			// 
			this->lb20->AutoSize = true;
			this->lb20->Location = System::Drawing::Point(84, 130);
			this->lb20->Name = L"lb20";
			this->lb20->Size = System::Drawing::Size(14, 20);
			this->lb20->TabIndex = 34;
			this->lb20->Text = L"-";
			// 
			// label35
			// 
			this->label35->AutoSize = true;
			this->label35->Location = System::Drawing::Point(25, 130);
			this->label35->Name = L"label35";
			this->label35->Size = System::Drawing::Size(48, 20);
			this->label35->TabIndex = 33;
			this->label35->Text = L"cpu 3";
			// 
			// lb39
			// 
			this->lb39->AutoSize = true;
			this->lb39->Location = System::Drawing::Point(1471, 195);
			this->lb39->Name = L"lb39";
			this->lb39->Size = System::Drawing::Size(14, 20);
			this->lb39->TabIndex = 56;
			this->lb39->Text = L"-";
			// 
			// lb38
			// 
			this->lb38->AutoSize = true;
			this->lb38->Location = System::Drawing::Point(1394, 195);
			this->lb38->Name = L"lb38";
			this->lb38->Size = System::Drawing::Size(14, 20);
			this->lb38->TabIndex = 55;
			this->lb38->Text = L"-";
			// 
			// lb37
			// 
			this->lb37->AutoSize = true;
			this->lb37->Location = System::Drawing::Point(1308, 195);
			this->lb37->Name = L"lb37";
			this->lb37->Size = System::Drawing::Size(14, 20);
			this->lb37->TabIndex = 54;
			this->lb37->Text = L"-";
			// 
			// lb36
			// 
			this->lb36->AutoSize = true;
			this->lb36->Location = System::Drawing::Point(1235, 195);
			this->lb36->Name = L"lb36";
			this->lb36->Size = System::Drawing::Size(14, 20);
			this->lb36->TabIndex = 53;
			this->lb36->Text = L"-";
			// 
			// lb35
			// 
			this->lb35->AutoSize = true;
			this->lb35->Location = System::Drawing::Point(84, 195);
			this->lb35->Name = L"lb35";
			this->lb35->Size = System::Drawing::Size(14, 20);
			this->lb35->TabIndex = 52;
			this->lb35->Text = L"-";
			// 
			// label41
			// 
			this->label41->AutoSize = true;
			this->label41->Location = System::Drawing::Point(25, 195);
			this->label41->Name = L"label41";
			this->label41->Size = System::Drawing::Size(38, 20);
			this->label41->TabIndex = 51;
			this->label41->Text = L"i/o 4";
			// 
			// lb34
			// 
			this->lb34->AutoSize = true;
			this->lb34->Location = System::Drawing::Point(1471, 175);
			this->lb34->Name = L"lb34";
			this->lb34->Size = System::Drawing::Size(14, 20);
			this->lb34->TabIndex = 50;
			this->lb34->Text = L"-";
			// 
			// lb33
			// 
			this->lb33->AutoSize = true;
			this->lb33->Location = System::Drawing::Point(1394, 175);
			this->lb33->Name = L"lb33";
			this->lb33->Size = System::Drawing::Size(14, 20);
			this->lb33->TabIndex = 49;
			this->lb33->Text = L"-";
			// 
			// lb32
			// 
			this->lb32->AutoSize = true;
			this->lb32->Location = System::Drawing::Point(1308, 175);
			this->lb32->Name = L"lb32";
			this->lb32->Size = System::Drawing::Size(14, 20);
			this->lb32->TabIndex = 48;
			this->lb32->Text = L"-";
			// 
			// lb31
			// 
			this->lb31->AutoSize = true;
			this->lb31->Location = System::Drawing::Point(1235, 175);
			this->lb31->Name = L"lb31";
			this->lb31->Size = System::Drawing::Size(14, 20);
			this->lb31->TabIndex = 47;
			this->lb31->Text = L"-";
			// 
			// lb30
			// 
			this->lb30->AutoSize = true;
			this->lb30->Location = System::Drawing::Point(84, 175);
			this->lb30->Name = L"lb30";
			this->lb30->Size = System::Drawing::Size(14, 20);
			this->lb30->TabIndex = 46;
			this->lb30->Text = L"-";
			// 
			// label47
			// 
			this->label47->AutoSize = true;
			this->label47->Location = System::Drawing::Point(25, 175);
			this->label47->Name = L"label47";
			this->label47->Size = System::Drawing::Size(48, 20);
			this->label47->TabIndex = 45;
			this->label47->Text = L"cpu 4";
			// 
			// lb49
			// 
			this->lb49->AutoSize = true;
			this->lb49->Location = System::Drawing::Point(1471, 241);
			this->lb49->Name = L"lb49";
			this->lb49->Size = System::Drawing::Size(14, 20);
			this->lb49->TabIndex = 68;
			this->lb49->Text = L"-";
			// 
			// lb48
			// 
			this->lb48->AutoSize = true;
			this->lb48->Location = System::Drawing::Point(1394, 241);
			this->lb48->Name = L"lb48";
			this->lb48->Size = System::Drawing::Size(14, 20);
			this->lb48->TabIndex = 67;
			this->lb48->Text = L"-";
			// 
			// lb47
			// 
			this->lb47->AutoSize = true;
			this->lb47->Location = System::Drawing::Point(1308, 241);
			this->lb47->Name = L"lb47";
			this->lb47->Size = System::Drawing::Size(14, 20);
			this->lb47->TabIndex = 66;
			this->lb47->Text = L"-";
			// 
			// lb46
			// 
			this->lb46->AutoSize = true;
			this->lb46->Location = System::Drawing::Point(1235, 241);
			this->lb46->Name = L"lb46";
			this->lb46->Size = System::Drawing::Size(14, 20);
			this->lb46->TabIndex = 65;
			this->lb46->Text = L"-";
			// 
			// lb45
			// 
			this->lb45->AutoSize = true;
			this->lb45->Location = System::Drawing::Point(84, 241);
			this->lb45->Name = L"lb45";
			this->lb45->Size = System::Drawing::Size(14, 20);
			this->lb45->TabIndex = 64;
			this->lb45->Text = L"-";
			// 
			// label53
			// 
			this->label53->AutoSize = true;
			this->label53->Location = System::Drawing::Point(25, 241);
			this->label53->Name = L"label53";
			this->label53->Size = System::Drawing::Size(38, 20);
			this->label53->TabIndex = 63;
			this->label53->Text = L"i/o 5";
			// 
			// lb44
			// 
			this->lb44->AutoSize = true;
			this->lb44->Location = System::Drawing::Point(1471, 221);
			this->lb44->Name = L"lb44";
			this->lb44->Size = System::Drawing::Size(14, 20);
			this->lb44->TabIndex = 62;
			this->lb44->Text = L"-";
			// 
			// lb43
			// 
			this->lb43->AutoSize = true;
			this->lb43->Location = System::Drawing::Point(1394, 221);
			this->lb43->Name = L"lb43";
			this->lb43->Size = System::Drawing::Size(14, 20);
			this->lb43->TabIndex = 61;
			this->lb43->Text = L"-";
			// 
			// lb42
			// 
			this->lb42->AutoSize = true;
			this->lb42->Location = System::Drawing::Point(1308, 221);
			this->lb42->Name = L"lb42";
			this->lb42->Size = System::Drawing::Size(14, 20);
			this->lb42->TabIndex = 60;
			this->lb42->Text = L"-";
			// 
			// lb41
			// 
			this->lb41->AutoSize = true;
			this->lb41->Location = System::Drawing::Point(1235, 221);
			this->lb41->Name = L"lb41";
			this->lb41->Size = System::Drawing::Size(14, 20);
			this->lb41->TabIndex = 59;
			this->lb41->Text = L"-";
			// 
			// lb40
			// 
			this->lb40->AutoSize = true;
			this->lb40->Location = System::Drawing::Point(84, 221);
			this->lb40->Name = L"lb40";
			this->lb40->Size = System::Drawing::Size(14, 20);
			this->lb40->TabIndex = 58;
			this->lb40->Text = L"-";
			// 
			// label59
			// 
			this->label59->AutoSize = true;
			this->label59->Location = System::Drawing::Point(25, 221);
			this->label59->Name = L"label59";
			this->label59->Size = System::Drawing::Size(48, 20);
			this->label59->TabIndex = 57;
			this->label59->Text = L"cpu 5";
			// 
			// lb59
			// 
			this->lb59->AutoSize = true;
			this->lb59->Location = System::Drawing::Point(1471, 285);
			this->lb59->Name = L"lb59";
			this->lb59->Size = System::Drawing::Size(14, 20);
			this->lb59->TabIndex = 80;
			this->lb59->Text = L"-";
			// 
			// lb58
			// 
			this->lb58->AutoSize = true;
			this->lb58->Location = System::Drawing::Point(1394, 285);
			this->lb58->Name = L"lb58";
			this->lb58->Size = System::Drawing::Size(14, 20);
			this->lb58->TabIndex = 79;
			this->lb58->Text = L"-";
			// 
			// lb57
			// 
			this->lb57->AutoSize = true;
			this->lb57->Location = System::Drawing::Point(1308, 285);
			this->lb57->Name = L"lb57";
			this->lb57->Size = System::Drawing::Size(14, 20);
			this->lb57->TabIndex = 78;
			this->lb57->Text = L"-";
			// 
			// lb56
			// 
			this->lb56->AutoSize = true;
			this->lb56->Location = System::Drawing::Point(1235, 285);
			this->lb56->Name = L"lb56";
			this->lb56->Size = System::Drawing::Size(14, 20);
			this->lb56->TabIndex = 77;
			this->lb56->Text = L"-";
			// 
			// lb55
			// 
			this->lb55->AutoSize = true;
			this->lb55->Location = System::Drawing::Point(84, 285);
			this->lb55->Name = L"lb55";
			this->lb55->Size = System::Drawing::Size(14, 20);
			this->lb55->TabIndex = 76;
			this->lb55->Text = L"-";
			// 
			// label65
			// 
			this->label65->AutoSize = true;
			this->label65->Location = System::Drawing::Point(25, 285);
			this->label65->Name = L"label65";
			this->label65->Size = System::Drawing::Size(38, 20);
			this->label65->TabIndex = 75;
			this->label65->Text = L"i/o 6";
			// 
			// lb54
			// 
			this->lb54->AutoSize = true;
			this->lb54->Location = System::Drawing::Point(1471, 265);
			this->lb54->Name = L"lb54";
			this->lb54->Size = System::Drawing::Size(14, 20);
			this->lb54->TabIndex = 74;
			this->lb54->Text = L"-";
			// 
			// lb53
			// 
			this->lb53->AutoSize = true;
			this->lb53->Location = System::Drawing::Point(1394, 265);
			this->lb53->Name = L"lb53";
			this->lb53->Size = System::Drawing::Size(14, 20);
			this->lb53->TabIndex = 73;
			this->lb53->Text = L"-";
			// 
			// lb52
			// 
			this->lb52->AutoSize = true;
			this->lb52->Location = System::Drawing::Point(1308, 265);
			this->lb52->Name = L"lb52";
			this->lb52->Size = System::Drawing::Size(14, 20);
			this->lb52->TabIndex = 72;
			this->lb52->Text = L"-";
			// 
			// lb51
			// 
			this->lb51->AutoSize = true;
			this->lb51->Location = System::Drawing::Point(1235, 265);
			this->lb51->Name = L"lb51";
			this->lb51->Size = System::Drawing::Size(14, 20);
			this->lb51->TabIndex = 71;
			this->lb51->Text = L"-";
			// 
			// lb50
			// 
			this->lb50->AutoSize = true;
			this->lb50->Location = System::Drawing::Point(84, 266);
			this->lb50->Name = L"lb50";
			this->lb50->Size = System::Drawing::Size(14, 20);
			this->lb50->TabIndex = 70;
			this->lb50->Text = L"-";
			// 
			// label71
			// 
			this->label71->AutoSize = true;
			this->label71->Location = System::Drawing::Point(25, 265);
			this->label71->Name = L"label71";
			this->label71->Size = System::Drawing::Size(48, 20);
			this->label71->TabIndex = 69;
			this->label71->Text = L"cpu 6";
			// 
			// lb64
			// 
			this->lb64->AutoSize = true;
			this->lb64->Location = System::Drawing::Point(1471, 310);
			this->lb64->Name = L"lb64";
			this->lb64->Size = System::Drawing::Size(14, 20);
			this->lb64->TabIndex = 86;
			this->lb64->Text = L"-";
			// 
			// lb63
			// 
			this->lb63->AutoSize = true;
			this->lb63->Location = System::Drawing::Point(1394, 310);
			this->lb63->Name = L"lb63";
			this->lb63->Size = System::Drawing::Size(14, 20);
			this->lb63->TabIndex = 85;
			this->lb63->Text = L"-";
			// 
			// lb62
			// 
			this->lb62->AutoSize = true;
			this->lb62->Location = System::Drawing::Point(1308, 310);
			this->lb62->Name = L"lb62";
			this->lb62->Size = System::Drawing::Size(14, 20);
			this->lb62->TabIndex = 84;
			this->lb62->Text = L"-";
			// 
			// lb61
			// 
			this->lb61->AutoSize = true;
			this->lb61->Location = System::Drawing::Point(1235, 310);
			this->lb61->Name = L"lb61";
			this->lb61->Size = System::Drawing::Size(14, 20);
			this->lb61->TabIndex = 83;
			this->lb61->Text = L"-";
			// 
			// lb60
			// 
			this->lb60->AutoSize = true;
			this->lb60->Location = System::Drawing::Point(84, 310);
			this->lb60->Name = L"lb60";
			this->lb60->Size = System::Drawing::Size(14, 20);
			this->lb60->TabIndex = 82;
			this->lb60->Text = L"-";
			// 
			// label83
			// 
			this->label83->AutoSize = true;
			this->label83->Location = System::Drawing::Point(25, 310);
			this->label83->Name = L"label83";
			this->label83->Size = System::Drawing::Size(48, 20);
			this->label83->TabIndex = 81;
			this->label83->Text = L"cpu 7";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1856, 808);
			this->Controls->Add(this->lb64);
			this->Controls->Add(this->lb63);
			this->Controls->Add(this->lb62);
			this->Controls->Add(this->lb61);
			this->Controls->Add(this->lb60);
			this->Controls->Add(this->label83);
			this->Controls->Add(this->lb59);
			this->Controls->Add(this->lb58);
			this->Controls->Add(this->lb57);
			this->Controls->Add(this->lb56);
			this->Controls->Add(this->lb55);
			this->Controls->Add(this->label65);
			this->Controls->Add(this->lb54);
			this->Controls->Add(this->lb53);
			this->Controls->Add(this->lb52);
			this->Controls->Add(this->lb51);
			this->Controls->Add(this->lb50);
			this->Controls->Add(this->label71);
			this->Controls->Add(this->lb49);
			this->Controls->Add(this->lb48);
			this->Controls->Add(this->lb47);
			this->Controls->Add(this->lb46);
			this->Controls->Add(this->lb45);
			this->Controls->Add(this->label53);
			this->Controls->Add(this->lb44);
			this->Controls->Add(this->lb43);
			this->Controls->Add(this->lb42);
			this->Controls->Add(this->lb41);
			this->Controls->Add(this->lb40);
			this->Controls->Add(this->label59);
			this->Controls->Add(this->lb39);
			this->Controls->Add(this->lb38);
			this->Controls->Add(this->lb37);
			this->Controls->Add(this->lb36);
			this->Controls->Add(this->lb35);
			this->Controls->Add(this->label41);
			this->Controls->Add(this->lb34);
			this->Controls->Add(this->lb33);
			this->Controls->Add(this->lb32);
			this->Controls->Add(this->lb31);
			this->Controls->Add(this->lb30);
			this->Controls->Add(this->label47);
			this->Controls->Add(this->lb29);
			this->Controls->Add(this->lb28);
			this->Controls->Add(this->lb27);
			this->Controls->Add(this->lb26);
			this->Controls->Add(this->lb25);
			this->Controls->Add(this->label29);
			this->Controls->Add(this->lb24);
			this->Controls->Add(this->lb23);
			this->Controls->Add(this->lb22);
			this->Controls->Add(this->lb21);
			this->Controls->Add(this->lb20);
			this->Controls->Add(this->label35);
			this->Controls->Add(this->lb19);
			this->Controls->Add(this->lb18);
			this->Controls->Add(this->lb17);
			this->Controls->Add(this->lb16);
			this->Controls->Add(this->lb15);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->lb14);
			this->Controls->Add(this->lb13);
			this->Controls->Add(this->lb12);
			this->Controls->Add(this->lb11);
			this->Controls->Add(this->lb10);
			this->Controls->Add(this->label23);
			this->Controls->Add(this->lb9);
			this->Controls->Add(this->lb8);
			this->Controls->Add(this->lb7);
			this->Controls->Add(this->lb6);
			this->Controls->Add(this->lb5);
			this->Controls->Add(this->io1);
			this->Controls->Add(this->lb4);
			this->Controls->Add(this->lb3);
			this->Controls->Add(this->lb2);
			this->Controls->Add(this->lb1);
			this->Controls->Add(this->lb0);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label2);
			this->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load_1);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		///*
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}//****************************************************************************************************************************************
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		
		
		// go find the file in the 1st textbox :fileAddress		
		// fstream -> read fileAddress->Text
		// read it and put in a
		//write them in 2nd text box
		// displayPcs->Text = a;
	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void trackBar1_Scroll(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox1_TextChanged_1(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}//*/
	private: System::Void textBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void textBox2_TextChanged_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void MyForm_Load_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox2_TextChanged_2(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
}
	   
	private: System::Void button1_Click_2(System::Object^ sender, System::EventArgs^ e) {
		/*const int n = 20;
		const int lifeTime = 10000;*/
		int matrix[1000][n]{};
		int lim[n];
		System::String^ ads = textBox3->Text;
		
		int maxTime = 1;
		for (int i = 0; i < n; i++)
			lim[i] = 0;
		try {
			//reading the file:
			StreamReader^ reader = gcnew   StreamReader(ads);

			do
			{
				String^ line = reader->ReadLine();
				// 0 0  6  8 15 6 10 7 10 8 13 7 15 3 spilte(line,' ')
				// newE ? 0 -> 0
				
				String^ tp = "";
				int clmn = 0;
				for (int j = 0; j < line->Length; j++) {
					if (line[j] != ' ')
						tp += line[j];
					else if(line[j] == ' ') {
						// tp convert to int 
						int IntTp = int::Parse(tp); // string to int
						tp = "";
						// tp saved in matrix[row][j]
						matrix[rowN][clmn] = IntTp;
						if (clmn == 0)
							
							lim[0] = max(lim[0], IntTp);
						else {
							lim[clmn] += IntTp;
						}
						clmn++;
					}
				}
				
				if (tp != "") {
					int IntTp = int::Parse(tp); //  string^ to int
					tp = "";
					// tp saved in matrix[row][j]
					matrix[rowN][clmn] = IntTp;
					if (clmn == 0)
						lim[0] = max(lim[0], IntTp);
					else {
						lim[clmn] += IntTp;
					}
					clmn++;
				}
				//concerting string^ to strong: string^ line to string line
				using namespace Runtime::InteropServices;
				const char* chars =
					(const char*)(Marshal::StringToHGlobalAnsi(line)).ToPointer();
			    
		        textBox3->Text = textBox3->Text + "\r\n" + line;
				rowN++;
			} while (reader->Peek() != -1); // using do while to read till end of file
			
			for (int i = 3; i < n; i++)
				maxTime = max(maxTime, lim[i]);
			maxTime += lim[0];
		}
		catch (System::Exception^  e) {}
		int c = 1;
		int time = -1;
		textBox1->Text = time.ToString();
		this->Refresh();
		int runExp[n];
		for (int t = 0; t < n; t++)
			runExp[t] = -2;
		while(true) {
			c++;
			if (time > maxTime)
				break;
			String^ temp = time.ToString() + ":" + floor(c * 59 / 9).ToString(); //59 is sec
			textBox1->Text = temp;
			this->Refresh();
			
			if (c == 9) {
				time++;
				c = 1;
				// ready to go to running 
				// int running vacant =12 
				for (int i = 0; i < rowN; i++) {
					for (int j = 0; j < n; j++)
						
						if (time == runExp[j]) {
							//String^ lblName = "lb" + (j * 5 + 2).ToString(); // find label name of cpu/io j lb+ j*5+2 
							Control^ r = getEl(j, 2);
							textBox3->Text += "\r\n label: "+ r->Text;
							Control^ t = getEl(j, 4);
							if (r->Text == "-")
								continue;
							if (t->Text == "-")								
								t->Text = r->Text;
							else 
								t->Text += "," + r->Text;
							r->Text = "-";
							this->Refresh();
							Control^ nw = getEl(j, 0);
							String^ newbees = nw->Text;
							if (newbees=="-")
								continue;
							int kamai= newbees->IndexOf(","); // 1,1,4  -> 1,4   // 1 -> -
							String^ newTop = "";
							if (kamai == -1) {
								newTop = newbees;
								newbees = "-";
							}
							else {
								newTop = newbees->Substring(0,kamai);  //?
								newbees = newbees->Substring(kamai+1);
							}
							nw->Text = newbees;
							this->Refresh();
							
							r->Text = newTop;
							nw->Text = newbees;
							this->Refresh();
							// empty and fill with head of new
							runExp[j] += matrix[System::Convert::ToInt32(newTop)][j]; // update runexp for new running proc: runexp[j]+=matrix[head of new][j]
							
				         }
					// running :
					if (matrix[i][0] == time) {  // arrival is matching with time						
						for (int j = 3; j < n && matrix[i][j]!=0 ; j++) {
							Control^ runningPcs = getEl(j-3,2); // state 2= running
							if(runningPcs->Text=="-"){  // running of resource j is vacant
								runningPcs->Text = "";
								runningPcs->Text+= matrix[i][1];// put id in running
								
								runExp[j - 3] = time + matrix[i][j];  // now + duration
								this->Refresh();
								continue;
							}
							
							//if (matrix[i][j] != 0) { // j=4 -> "lb(j-3)*5   
								String^ labelName = "lb" + ((j - 3) * 5).ToString();
								textBox3->Text += "\r\n label: " + labelName;
								for each (Control ^ c in this->Controls)
									if (c->Name == labelName) {
										textBox3->Text += "\r\n label: " + labelName +"Found!";
										if (c->Text == "-") {
											c->Text = "";
											c->Text += matrix[i][1];
										}
										else c->Text += ", " + matrix[i][1];
										this->Refresh();
									}
							
						}
					}
				}
			}
			
		
		}
	}
	 Control^ getEl( int rsc, int state) { // (1,2) 2-> lable running 1-> rsc (cpu1,i/o1,cpu2,....)
		 String^ labelName = "lb" + (rsc* 5 + state).ToString();
		 textBox3->Text += "\r\n label: " + labelName;
		 for each (Control ^ c in this->Controls)
			 if (c->Name == labelName) {//c->Name is all the labels under new ... runnng waiting terminate
				 textBox3->Text += "\r\n label: " + labelName+ "FOUND!";
				 return c;
			 }
		 textBox3->Text += "\r\n label: " + labelName + " NOT FOUND!";
	}

};
}
/*
*/
