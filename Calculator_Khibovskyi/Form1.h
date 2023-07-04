#pragma once

namespace Calculator_Khibovskyi {
	
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	enum numericButton {
		number_0,
		number_1,
		number_2,
		number_3,
		number_4,
		number_5,
		number_6,
		number_7,
		number_8,
		number_9,
		coma			
	};
	numericButton GetNumber(String^ buttonName) {		
		if (buttonName == "label22") return number_0;
		if (buttonName == "label17") return number_1;
		if (buttonName == "label18") return number_2;
		if (buttonName == "label19") return number_3;
		if (buttonName == "label13") return number_4;
		if (buttonName == "label14") return number_5;
		if (buttonName == "label15") return number_6;
		if (buttonName ==  "label9") return number_7;
		if (buttonName == "label10") return number_8;
		if (buttonName == "label11") return number_9;
		if (buttonName == "label23") return coma;

	}
	numericButton GetNumber(char keyChar) {
		if (keyChar == 48) return number_0;
		if (keyChar == 49) return number_1;
		if (keyChar == 50) return number_2;
		if (keyChar == 51) return number_3;		
		if (keyChar == 52) return number_4;
		if (keyChar == 53) return number_5;
		if (keyChar == 54) return number_6;
		if (keyChar == 55) return number_7;
		if (keyChar == 56) return number_8;
		if (keyChar == 57) return number_9;				
		if (keyChar == 44) return coma;
	}

	enum functionButton {
		percent,
		negate,
		one_by_x,
		x_power_two,
		x_sqrt,
	
	};
	functionButton GetFunction(String^ buttonName) {
		if (buttonName == "label1") return percent;	
		if (buttonName == "label21") return negate;
		if (buttonName == "label5") return one_by_x;
		if (buttonName == "label6") return x_power_two;
		if (buttonName == "label7") return x_sqrt;		
	}
	functionButton GetFunction(Keys key) {
		if (key == Keys::D5) return percent;
		if (key == Keys::F9) return negate;
		if (key == Keys::R) return one_by_x;
		if (key == Keys::Q) return x_power_two;
		if (key == Keys::D2) return x_sqrt;	
	}

	enum actionButton {		
		division,
		multiplication,
		addition,
		subtraction,
		equal
	};
	actionButton GetAction(String^ buttonName) {
		if (buttonName == "label8") return division;
		if (buttonName == "label12") return multiplication;
		if (buttonName == "label16") return subtraction;
		if (buttonName == "label20") return addition;
		if (buttonName == "label24") return equal;
	}
	actionButton GetAction(char keyChar) {
		if (keyChar == 13) return equal;
		if (keyChar == 42) return multiplication;
		if (keyChar == 43) return addition;
		if (keyChar == 45) return subtraction;
		if (keyChar == 47) return division;
	}

	enum clearingButton {
		clear_current,
		clear_all,
		backspace	
	};
	clearingButton GetClearAction(String^ buttonName) {
		if (buttonName == "label2") return clear_current;
		if (buttonName == "label3") return clear_all;
		if (buttonName == "label4") return backspace;
	}
	clearingButton GetClearAction(Keys key) {
		if (key == Keys::Delete) return clear_current;
		if (key == Keys::Escape) return clear_all;
		if (key == Keys::Back) return backspace;		
	}

	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
		}

	protected:

		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::FlowLayoutPanel^ standardModeFLPanel;
	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::Label^ label20;
	private: System::Windows::Forms::Label^ label21;
	private: System::Windows::Forms::Label^ label22;
	private: System::Windows::Forms::Label^ label23;
	private: System::Windows::Forms::Label^ label24;
	private: System::Windows::Forms::Label^ mainTextLabel;
	private: System::Windows::Forms::TextBox^ subTextBox;
	private: System::ComponentModel::Container^ components;

	private:
		String^ A_value = "0";
		String^ B_value = "0";
		String^ A_represent = "0";
		String^ B_represent = "0";
		String^ actionSymbol = "empty";
		String^ result = "empty";
		
		bool isB_coreValueChanged = true;
		bool isA_coreValueChanged = true;
		bool isB_valueConfirmed = false;
		bool isA_valueConfirmed = false;
		bool isBufferClear = true;
		bool isLabelFull = false;
		actionButton previousAction = actionButton::equal;

#pragma region Windows Form Designer generated code	
		void InitializeComponent(void)
		{
			this->standardModeFLPanel = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->subTextBox = (gcnew System::Windows::Forms::TextBox());
			this->mainTextLabel = (gcnew System::Windows::Forms::Label());
			this->standardModeFLPanel->SuspendLayout();
			this->SuspendLayout();
			// 
			// standardModeFLPanel
			// 
			this->standardModeFLPanel->BackColor = System::Drawing::Color::Transparent;
			this->standardModeFLPanel->Controls->Add(this->label1);
			this->standardModeFLPanel->Controls->Add(this->label2);
			this->standardModeFLPanel->Controls->Add(this->label3);
			this->standardModeFLPanel->Controls->Add(this->label4);
			this->standardModeFLPanel->Controls->Add(this->label5);
			this->standardModeFLPanel->Controls->Add(this->label6);
			this->standardModeFLPanel->Controls->Add(this->label7);
			this->standardModeFLPanel->Controls->Add(this->label8);
			this->standardModeFLPanel->Controls->Add(this->label9);
			this->standardModeFLPanel->Controls->Add(this->label10);
			this->standardModeFLPanel->Controls->Add(this->label11);
			this->standardModeFLPanel->Controls->Add(this->label12);
			this->standardModeFLPanel->Controls->Add(this->label13);
			this->standardModeFLPanel->Controls->Add(this->label14);
			this->standardModeFLPanel->Controls->Add(this->label15);
			this->standardModeFLPanel->Controls->Add(this->label16);
			this->standardModeFLPanel->Controls->Add(this->label17);
			this->standardModeFLPanel->Controls->Add(this->label18);
			this->standardModeFLPanel->Controls->Add(this->label19);
			this->standardModeFLPanel->Controls->Add(this->label20);
			this->standardModeFLPanel->Controls->Add(this->label21);
			this->standardModeFLPanel->Controls->Add(this->label22);
			this->standardModeFLPanel->Controls->Add(this->label23);
			this->standardModeFLPanel->Controls->Add(this->label24);
			this->standardModeFLPanel->Font = (gcnew System::Drawing::Font(L"Segoe UI Light", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->standardModeFLPanel->Location = System::Drawing::Point(4, 208);
			this->standardModeFLPanel->Name = L"standardModeFLPanel";
			this->standardModeFLPanel->Size = System::Drawing::Size(425, 370);
			this->standardModeFLPanel->TabIndex = 11;
			// 
			// label1
			// 
			this->label1->BackColor = System::Drawing::Color::WhiteSmoke;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(0, 0);
			this->label1->Margin = System::Windows::Forms::Padding(0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(97, 60);
			this->label1->TabIndex = 1;
			this->label1->Text = L"%";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label1->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &Form1::functionButton_MouseDown);
			this->label1->MouseEnter += gcnew System::EventHandler(this, &Form1::grayButton_MouseEnter);
			this->label1->MouseLeave += gcnew System::EventHandler(this, &Form1::grayButton_MouseLeave);
			// 
			// label2
			// 
			this->label2->BackColor = System::Drawing::Color::WhiteSmoke;
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe UI Semilight", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(99, 0);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 0, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(97, 60);
			this->label2->TabIndex = 2;
			this->label2->Text = L"CE";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label2->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &Form1::clearingActionButton_MouseDown);
			this->label2->MouseEnter += gcnew System::EventHandler(this, &Form1::grayButton_MouseEnter);
			this->label2->MouseLeave += gcnew System::EventHandler(this, &Form1::grayButton_MouseLeave);
			// 
			// label3
			// 
			this->label3->BackColor = System::Drawing::Color::WhiteSmoke;
			this->label3->Font = (gcnew System::Drawing::Font(L"Segoe UI Semilight", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(198, 0);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 0, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(97, 60);
			this->label3->TabIndex = 3;
			this->label3->Text = L"C";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label3->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &Form1::clearingActionButton_MouseDown);
			this->label3->MouseEnter += gcnew System::EventHandler(this, &Form1::grayButton_MouseEnter);
			this->label3->MouseLeave += gcnew System::EventHandler(this, &Form1::grayButton_MouseLeave);
			// 
			// label4
			// 
			this->label4->BackColor = System::Drawing::Color::WhiteSmoke;
			this->label4->Font = (gcnew System::Drawing::Font(L"Segoe UI Semilight", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(297, 0);
			this->label4->Margin = System::Windows::Forms::Padding(2, 0, 0, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(96, 60);
			this->label4->TabIndex = 4;
			this->label4->Text = L"⌫";
			this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label4->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &Form1::clearingActionButton_MouseDown);
			this->label4->MouseEnter += gcnew System::EventHandler(this, &Form1::grayButton_MouseEnter);
			this->label4->MouseLeave += gcnew System::EventHandler(this, &Form1::grayButton_MouseLeave);
			// 
			// label5
			// 
			this->label5->BackColor = System::Drawing::Color::WhiteSmoke;
			this->label5->Font = (gcnew System::Drawing::Font(L"Segoe UI Semilight", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(0, 62);
			this->label5->Margin = System::Windows::Forms::Padding(0, 2, 0, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(97, 60);
			this->label5->TabIndex = 35;
			this->label5->Text = L"¹⁄ᵪ";
			this->label5->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label5->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &Form1::functionButton_MouseDown);
			this->label5->MouseEnter += gcnew System::EventHandler(this, &Form1::grayButton_MouseEnter);
			this->label5->MouseLeave += gcnew System::EventHandler(this, &Form1::grayButton_MouseLeave);
			// 
			// label6
			// 
			this->label6->BackColor = System::Drawing::Color::WhiteSmoke;
			this->label6->Font = (gcnew System::Drawing::Font(L"Segoe UI Semilight", 12));
			this->label6->Location = System::Drawing::Point(99, 62);
			this->label6->Margin = System::Windows::Forms::Padding(2, 2, 0, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(97, 60);
			this->label6->TabIndex = 37;
			this->label6->Text = L"x²";
			this->label6->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label6->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &Form1::functionButton_MouseDown);
			this->label6->MouseEnter += gcnew System::EventHandler(this, &Form1::grayButton_MouseEnter);
			this->label6->MouseLeave += gcnew System::EventHandler(this, &Form1::grayButton_MouseLeave);
			// 
			// label7
			// 
			this->label7->BackColor = System::Drawing::Color::WhiteSmoke;
			this->label7->Font = (gcnew System::Drawing::Font(L"Segoe UI Semilight", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->Location = System::Drawing::Point(198, 62);
			this->label7->Margin = System::Windows::Forms::Padding(2, 2, 0, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(97, 60);
			this->label7->TabIndex = 36;
			this->label7->Text = L"²√x";
			this->label7->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label7->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &Form1::functionButton_MouseDown);
			this->label7->MouseEnter += gcnew System::EventHandler(this, &Form1::grayButton_MouseEnter);
			this->label7->MouseLeave += gcnew System::EventHandler(this, &Form1::grayButton_MouseLeave);
			// 
			// label8
			// 
			this->label8->BackColor = System::Drawing::Color::WhiteSmoke;
			this->label8->Font = (gcnew System::Drawing::Font(L"Segoe UI Light", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label8->Location = System::Drawing::Point(297, 62);
			this->label8->Margin = System::Windows::Forms::Padding(2, 2, 0, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(96, 60);
			this->label8->TabIndex = 14;
			this->label8->Text = L"÷";
			this->label8->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label8->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &Form1::actionButton_MouseDown);
			this->label8->MouseEnter += gcnew System::EventHandler(this, &Form1::grayButton_MouseEnter);
			this->label8->MouseLeave += gcnew System::EventHandler(this, &Form1::grayButton_MouseLeave);
			// 
			// label9
			// 
			this->label9->BackColor = System::Drawing::Color::White;
			this->label9->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label9->Location = System::Drawing::Point(0, 124);
			this->label9->Margin = System::Windows::Forms::Padding(0, 2, 0, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(97, 60);
			this->label9->TabIndex = 16;
			this->label9->Text = L"7";
			this->label9->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label9->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &Form1::numericButton_MouseDown);
			this->label9->MouseEnter += gcnew System::EventHandler(this, &Form1::grayButton_MouseEnter);
			this->label9->MouseLeave += gcnew System::EventHandler(this, &Form1::whiteButton_MouseLeave);
			// 
			// label10
			// 
			this->label10->BackColor = System::Drawing::Color::White;
			this->label10->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label10->Location = System::Drawing::Point(99, 124);
			this->label10->Margin = System::Windows::Forms::Padding(2, 2, 0, 0);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(97, 60);
			this->label10->TabIndex = 17;
			this->label10->Text = L"8";
			this->label10->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label10->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &Form1::numericButton_MouseDown);
			this->label10->MouseEnter += gcnew System::EventHandler(this, &Form1::grayButton_MouseEnter);
			this->label10->MouseLeave += gcnew System::EventHandler(this, &Form1::whiteButton_MouseLeave);
			// 
			// label11
			// 
			this->label11->BackColor = System::Drawing::Color::White;
			this->label11->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label11->Location = System::Drawing::Point(198, 124);
			this->label11->Margin = System::Windows::Forms::Padding(2, 2, 0, 0);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(97, 60);
			this->label11->TabIndex = 18;
			this->label11->Text = L"9";
			this->label11->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label11->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &Form1::numericButton_MouseDown);
			this->label11->MouseEnter += gcnew System::EventHandler(this, &Form1::grayButton_MouseEnter);
			this->label11->MouseLeave += gcnew System::EventHandler(this, &Form1::whiteButton_MouseLeave);
			// 
			// label12
			// 
			this->label12->BackColor = System::Drawing::Color::WhiteSmoke;
			this->label12->Font = (gcnew System::Drawing::Font(L"Segoe UI Light", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label12->Location = System::Drawing::Point(297, 124);
			this->label12->Margin = System::Windows::Forms::Padding(2, 2, 0, 0);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(96, 60);
			this->label12->TabIndex = 19;
			this->label12->Text = L"✕";
			this->label12->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label12->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &Form1::actionButton_MouseDown);
			this->label12->MouseEnter += gcnew System::EventHandler(this, &Form1::grayButton_MouseEnter);
			this->label12->MouseLeave += gcnew System::EventHandler(this, &Form1::grayButton_MouseLeave);
			// 
			// label13
			// 
			this->label13->BackColor = System::Drawing::Color::White;
			this->label13->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label13->Location = System::Drawing::Point(0, 186);
			this->label13->Margin = System::Windows::Forms::Padding(0, 2, 0, 0);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(97, 60);
			this->label13->TabIndex = 21;
			this->label13->Text = L"4";
			this->label13->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label13->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &Form1::numericButton_MouseDown);
			this->label13->MouseEnter += gcnew System::EventHandler(this, &Form1::grayButton_MouseEnter);
			this->label13->MouseLeave += gcnew System::EventHandler(this, &Form1::whiteButton_MouseLeave);
			// 
			// label14
			// 
			this->label14->BackColor = System::Drawing::Color::White;
			this->label14->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label14->Location = System::Drawing::Point(99, 186);
			this->label14->Margin = System::Windows::Forms::Padding(2, 2, 0, 0);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(97, 60);
			this->label14->TabIndex = 22;
			this->label14->Text = L"5";
			this->label14->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label14->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &Form1::numericButton_MouseDown);
			this->label14->MouseEnter += gcnew System::EventHandler(this, &Form1::grayButton_MouseEnter);
			this->label14->MouseLeave += gcnew System::EventHandler(this, &Form1::whiteButton_MouseLeave);
			// 
			// label15
			// 
			this->label15->BackColor = System::Drawing::Color::White;
			this->label15->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label15->Location = System::Drawing::Point(198, 186);
			this->label15->Margin = System::Windows::Forms::Padding(2, 2, 0, 0);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(97, 60);
			this->label15->TabIndex = 23;
			this->label15->Text = L"6";
			this->label15->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label15->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &Form1::numericButton_MouseDown);
			this->label15->MouseEnter += gcnew System::EventHandler(this, &Form1::grayButton_MouseEnter);
			this->label15->MouseLeave += gcnew System::EventHandler(this, &Form1::whiteButton_MouseLeave);
			// 
			// label16
			// 
			this->label16->BackColor = System::Drawing::Color::WhiteSmoke;
			this->label16->Font = (gcnew System::Drawing::Font(L"Segoe UI Light", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label16->Location = System::Drawing::Point(297, 186);
			this->label16->Margin = System::Windows::Forms::Padding(2, 2, 0, 0);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(96, 60);
			this->label16->TabIndex = 24;
			this->label16->Text = L"−";
			this->label16->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label16->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &Form1::actionButton_MouseDown);
			this->label16->MouseEnter += gcnew System::EventHandler(this, &Form1::grayButton_MouseEnter);
			this->label16->MouseLeave += gcnew System::EventHandler(this, &Form1::grayButton_MouseLeave);
			// 
			// label17
			// 
			this->label17->BackColor = System::Drawing::Color::White;
			this->label17->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label17->Location = System::Drawing::Point(0, 248);
			this->label17->Margin = System::Windows::Forms::Padding(0, 2, 0, 0);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(97, 60);
			this->label17->TabIndex = 26;
			this->label17->Text = L"1";
			this->label17->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label17->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &Form1::numericButton_MouseDown);
			this->label17->MouseEnter += gcnew System::EventHandler(this, &Form1::grayButton_MouseEnter);
			this->label17->MouseLeave += gcnew System::EventHandler(this, &Form1::whiteButton_MouseLeave);
			// 
			// label18
			// 
			this->label18->BackColor = System::Drawing::Color::White;
			this->label18->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label18->Location = System::Drawing::Point(99, 248);
			this->label18->Margin = System::Windows::Forms::Padding(2, 2, 0, 0);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(97, 60);
			this->label18->TabIndex = 27;
			this->label18->Text = L"2";
			this->label18->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label18->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &Form1::numericButton_MouseDown);
			this->label18->MouseEnter += gcnew System::EventHandler(this, &Form1::grayButton_MouseEnter);
			this->label18->MouseLeave += gcnew System::EventHandler(this, &Form1::whiteButton_MouseLeave);
			// 
			// label19
			// 
			this->label19->BackColor = System::Drawing::Color::White;
			this->label19->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label19->Location = System::Drawing::Point(198, 248);
			this->label19->Margin = System::Windows::Forms::Padding(2, 2, 0, 0);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(97, 60);
			this->label19->TabIndex = 28;
			this->label19->Text = L"3";
			this->label19->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label19->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &Form1::numericButton_MouseDown);
			this->label19->MouseEnter += gcnew System::EventHandler(this, &Form1::grayButton_MouseEnter);
			this->label19->MouseLeave += gcnew System::EventHandler(this, &Form1::whiteButton_MouseLeave);
			// 
			// label20
			// 
			this->label20->BackColor = System::Drawing::Color::WhiteSmoke;
			this->label20->Font = (gcnew System::Drawing::Font(L"Segoe UI Light", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label20->Location = System::Drawing::Point(297, 248);
			this->label20->Margin = System::Windows::Forms::Padding(2, 2, 0, 0);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(96, 60);
			this->label20->TabIndex = 29;
			this->label20->Text = L"+";
			this->label20->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label20->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &Form1::actionButton_MouseDown);
			this->label20->MouseEnter += gcnew System::EventHandler(this, &Form1::grayButton_MouseEnter);
			this->label20->MouseLeave += gcnew System::EventHandler(this, &Form1::grayButton_MouseLeave);
			// 
			// label21
			// 
			this->label21->BackColor = System::Drawing::Color::White;
			this->label21->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label21->Location = System::Drawing::Point(0, 310);
			this->label21->Margin = System::Windows::Forms::Padding(0, 2, 0, 0);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(97, 60);
			this->label21->TabIndex = 31;
			this->label21->Text = L"⁺⁄₋";
			this->label21->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label21->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &Form1::functionButton_MouseDown);
			this->label21->MouseEnter += gcnew System::EventHandler(this, &Form1::grayButton_MouseEnter);
			this->label21->MouseLeave += gcnew System::EventHandler(this, &Form1::whiteButton_MouseLeave);
			// 
			// label22
			// 
			this->label22->BackColor = System::Drawing::Color::White;
			this->label22->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label22->Location = System::Drawing::Point(99, 310);
			this->label22->Margin = System::Windows::Forms::Padding(2, 2, 0, 0);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(97, 60);
			this->label22->TabIndex = 32;
			this->label22->Text = L"0";
			this->label22->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label22->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &Form1::numericButton_MouseDown);
			this->label22->MouseEnter += gcnew System::EventHandler(this, &Form1::grayButton_MouseEnter);
			this->label22->MouseLeave += gcnew System::EventHandler(this, &Form1::whiteButton_MouseLeave);
			// 
			// label23
			// 
			this->label23->BackColor = System::Drawing::Color::White;
			this->label23->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label23->Location = System::Drawing::Point(198, 310);
			this->label23->Margin = System::Windows::Forms::Padding(2, 2, 0, 0);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(97, 60);
			this->label23->TabIndex = 33;
			this->label23->Text = L",";
			this->label23->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label23->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &Form1::numericButton_MouseDown);
			this->label23->MouseEnter += gcnew System::EventHandler(this, &Form1::grayButton_MouseEnter);
			this->label23->MouseLeave += gcnew System::EventHandler(this, &Form1::whiteButton_MouseLeave);
			// 
			// label24
			// 
			this->label24->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(138)), static_cast<System::Int32>(static_cast<System::Byte>(186)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->label24->Font = (gcnew System::Drawing::Font(L"Segoe UI Light", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label24->Location = System::Drawing::Point(297, 310);
			this->label24->Margin = System::Windows::Forms::Padding(2, 2, 0, 0);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(96, 60);
			this->label24->TabIndex = 34;
			this->label24->Text = L"=";
			this->label24->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label24->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &Form1::actionButton_MouseDown);
			this->label24->MouseEnter += gcnew System::EventHandler(this, &Form1::blueButton_MouseEnter);
			this->label24->MouseLeave += gcnew System::EventHandler(this, &Form1::blueButton_MouseLeave);
			// 
			// subTextBox
			// 
			this->subTextBox->BackColor = System::Drawing::Color::White;
			this->subTextBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->subTextBox->Enabled = false;
			this->subTextBox->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->subTextBox->HideSelection = false;
			this->subTextBox->Location = System::Drawing::Point(21, 50);
			this->subTextBox->Name = L"subTextBox";
			this->subTextBox->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->subTextBox->Size = System::Drawing::Size(356, 24);
			this->subTextBox->TabIndex = 12;
			this->subTextBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// mainTextBox
			// 
			this->mainTextLabel->BackColor = System::Drawing::Color::White;
			this->mainTextLabel->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->mainTextLabel->Location = System::Drawing::Point(0, 77);
			this->mainTextLabel->Margin = System::Windows::Forms::Padding(0);
			this->mainTextLabel->Name = L"mainTextBox";
			this->mainTextLabel->Size = System::Drawing::Size(401, 80);
			this->mainTextLabel->TabIndex = 17;
			this->mainTextLabel->Text = L"0";
			this->mainTextLabel->TextAlign = System::Drawing::ContentAlignment::TopRight;
			this->mainTextLabel->TextChanged += gcnew System::EventHandler(this, &Form1::mainTextLabel_TextChanged);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Silver;
			this->ClientSize = System::Drawing::Size(401, 582);
			this->Controls->Add(this->mainTextLabel);
			this->Controls->Add(this->subTextBox);
			this->Controls->Add(this->standardModeFLPanel);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->KeyPreview = true;
			this->MinimumSize = System::Drawing::Size(419, 629);
			this->Name = L"Form1";
			this->ShowIcon = false;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Calculator";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Form1::Form1_KeyDown);
			this->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Form1::Form1_KeyPress);
			this->standardModeFLPanel->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		
private: System::Void Form1_Load(System::Object^ sender, System::EventArgs^ e) {				
		this->BackColor = Color::FromArgb(235, 235, 235);
		this->Width = this->MinimumSize.Width;

		subTextBox->BackColor = Color::FromArgb(235, 235, 235);
		mainTextLabel->BackColor = Color::FromArgb(235, 235, 235);
		mainTextLabel->BackColor = Color::Transparent;		
	}
	   void SetStartParameters() {
		   A_value = "0";
		   B_value = "0";
		   A_represent = "0";
		   B_represent = "0";	  
		   actionSymbol = "empty";
		   result = "empty";
		  
		   isB_coreValueChanged = true;
		   isA_coreValueChanged = true;
		   isB_valueConfirmed = false;
		   isA_valueConfirmed = false;
		   isBufferClear = true;
		  	   
		   previousAction = actionButton::equal;	  		 
	   }	

private: System::Void mainTextLabel_TextChanged(System::Object^ sender, System::EventArgs^ e) {	
	float textWidth = TextRenderer::MeasureText(mainTextLabel->Text, mainTextLabel->Font).Width;

	if (textWidth > mainTextLabel->Width) {
		mainTextLabel->Font = gcnew System::Drawing::Font(mainTextLabel->Font->FontFamily, (mainTextLabel->Font->Size - 2), mainTextLabel->Font->Style);
	}
	else {
		if (mainTextLabel->Font->Size < 36) {
			mainTextLabel->Font = gcnew System::Drawing::Font(mainTextLabel->Font->FontFamily, (mainTextLabel->Font->Size + 2), mainTextLabel->Font->Style);
		}
	}		
}
  
						//NUMERICS NUMERICS NUMERICS
private: System::Void numericButton_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	Label^ lbl = safe_cast<Label^>(sender);
	
	HandleNumericButton(GetNumber(lbl->Name));	
}
	   void HandleNumericButton(numericButton numButton) {
		   if (mainTextLabel->Text->Length >= 16) {
			   isLabelFull = true;
		   }
		   if (isA_valueConfirmed == true) {
			   isB_valueConfirmed = true;
		   }
		   if (isA_coreValueChanged == false) {
			   if (isBufferClear == false) {
				   subTextBox->Text = "";
			   }
			   mainTextLabel->Text = "0";
			   isLabelFull = false;
			   isA_coreValueChanged = true;

			   isB_coreValueChanged = true;
		   }

		   if (numButton == coma) {
			   if (!mainTextLabel->Text->Contains(",")) {			  
				   mainTextLabel->Text += (",");
			   }
			   if (isB_coreValueChanged == false) {
				   subTextBox->Text = A_represent + " " + actionSymbol;
				   mainTextLabel->Text = "0,";
				   isLabelFull = false;

				   isB_coreValueChanged = true;
			   }
		   }
		   else {
			   if (mainTextLabel->Text->Length == 1 && mainTextLabel->Text[0] == '0') {
				   mainTextLabel->Text = "";
				   isLabelFull = false;
			   }
			   if (isB_coreValueChanged == false) {
				   subTextBox->Text = A_represent + " " + actionSymbol;
				   mainTextLabel->Text = "";
				   isLabelFull = false;

				   isB_coreValueChanged = true;
			   }

			   if(isLabelFull == false){
				   switch (numButton) {
				   case number_1:					  
					   mainTextLabel->Text += ("1");
					   break;
				   case number_2:					  
					   mainTextLabel->Text += ("2");
					   break;
				   case number_3:					  
					   mainTextLabel->Text += ("3");
					   break;
				   case number_4:					   
					   mainTextLabel->Text += ("4");
					   break;
				   case number_5:					  
					   mainTextLabel->Text += ("5");
					   break;
				   case number_6:					  
					   mainTextLabel->Text += ("6");
					   break;
				   case number_7:					  
					   mainTextLabel->Text += ("7");
					   break;
				   case number_8:					   
					   mainTextLabel->Text += ("8");
					   break;
				   case number_9:					   
					   mainTextLabel->Text += ("9");
					   break;
				   case number_0:					   
					   mainTextLabel->Text += ("0");
					   break;
				   }

				   if (isA_valueConfirmed == false) {
					   A_value = Convert::ToString(Convert::ToDouble(mainTextLabel->Text));
					   A_represent = A_value;
				   }
				   else {
					   B_value = Convert::ToString(Convert::ToDouble(mainTextLabel->Text));
					   B_represent = B_value;
				   }
			   }
			   
		   }
	}

						//ACTIONS ACTIONS ACTIONS
private: System::Void actionButton_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	Label^ lbl = safe_cast<Label^>(sender);
	HandleActionButton(GetAction(lbl->Name));
}
	   void HandleActionButton(actionButton action) {
		   switch (action) {
		   case addition:
			   SimpleActions(addition);
			   break;
		   case subtraction:
			   SimpleActions(subtraction);
			   break;
		   case multiplication:
			   SimpleActions(multiplication);
			   break;
		   case division:
			   SimpleActions(division);
			   break;
		   case equal:
			   if (previousAction == addition || previousAction == subtraction
				   || previousAction == multiplication || previousAction == division) {

				   result = GetResultOfAction(previousAction);

				   mainTextLabel->Text = result;

				   subTextBox->Text = A_represent + " " + actionSymbol + " " + B_represent + " =";
				   A_value = result;
				   A_represent = result;
				   B_represent = B_value;

				   isA_valueConfirmed = false;
				   isB_valueConfirmed = false;

				   isBufferClear = false;
			   }
			   else if (isBufferClear == true) {
				   subTextBox->Text = A_represent + " =";
				   A_represent = A_value;
				   mainTextLabel->Text = A_value;
			   }

			   isA_coreValueChanged = false;
			   break;
		   }
		   if (isA_valueConfirmed == false) {
			   A_value = Convert::ToString(Convert::ToDouble(mainTextLabel->Text));
		   }
		   else {
			   B_value = Convert::ToString(Convert::ToDouble(mainTextLabel->Text));
		   }
	   }
	   void SimpleActions(actionButton action) {
		   actionSymbol = "empty";

		   switch (action) {
		   case addition:
			   actionSymbol = L"+";
			   break;
		   case subtraction:
			   actionSymbol = L"-";
			   break;
		   case multiplication:
			   actionSymbol = L"×";
			   break;
		   case division:
			   actionSymbol = L"÷";
			   break;
		   }
		 
		   if (isB_valueConfirmed == false) {
			   isA_valueConfirmed = true;

			   previousAction = action;

			   mainTextLabel->Text = Convert::ToString(Convert::ToDouble(mainTextLabel->Text));
			   A_value = mainTextLabel->Text;			  
			   B_value = A_value;
			   B_represent = A_value;
			   result = A_value;

			   subTextBox->Text = A_represent + " " + actionSymbol;

			   if (isA_coreValueChanged == false) {
				   isA_coreValueChanged = true;
			   }
		   }
		   else if (isB_valueConfirmed == true) {
			   previousAction = action;

			   result = GetResultOfAction(previousAction);

			   A_value = result;
			   A_represent = A_value;
			   B_represent = result;
			  
			   subTextBox->Text = result + " " + actionSymbol;
			   mainTextLabel->Text = result;

			   isB_valueConfirmed = false;
		   }
		 
		   isB_coreValueChanged = false;
	   }
	   String^ GetResultOfAction(actionButton action) {
		   switch (action) {
		   case addition:
			   return Convert::ToString(Convert::ToDouble(A_value) + Convert::ToDouble(B_value));
		   case subtraction:
			   return Convert::ToString(Convert::ToDouble(A_value) - Convert::ToDouble(B_value));
		   case multiplication:
			   return Convert::ToString(Convert::ToDouble(A_value) * Convert::ToDouble(B_value));
		   case division:
			   return Convert::ToString(Convert::ToDouble(A_value) / Convert::ToDouble(B_value));
		   }
	   }

						//FUNCTIONS FUNCTIONS FUNCTIONS
private: System::Void functionButton_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	Label^ lbl = safe_cast<Label^>(sender);
	HandleFuncButton(GetFunction(lbl->Name));
}
	   void HandleFuncButton(functionButton funcButton) {
		   interior_ptr <String^> pValue;
		   interior_ptr <String^> pVal_represent;

		   if (isA_valueConfirmed == false) {
			   pValue = &A_value;
			   pVal_represent = &A_represent;
		   }
		   else {
			   pValue = &B_value;
			   pVal_represent = &B_represent;
		   }


		   switch (funcButton) {
		   case percent:
			   if (isA_valueConfirmed == false) {
				   if (previousAction == multiplication || previousAction == division) {
					   mainTextLabel->Text = Convert::ToString(Convert::ToDouble(A_value) / 100);
				   }
				   else if (previousAction == addition || previousAction == subtraction) {
					   mainTextLabel->Text = Convert::ToString((Convert::ToDouble(result) * Convert::ToDouble(A_value)) / 100);
				   }
				   else {
					   mainTextLabel->Text = "0";
				   }
				   A_represent = mainTextLabel->Text;
				   subTextBox->Text = A_represent;
			   }
			   else {
				   if (previousAction == multiplication || previousAction == division) {
					   mainTextLabel->Text = Convert::ToString(Convert::ToDouble(B_value) / 100);
					   B_represent = mainTextLabel->Text;
					   subTextBox->Text = A_represent + " " + actionSymbol + " " + B_represent;
				   }
				   else if (previousAction == addition || previousAction == subtraction) {
					   mainTextLabel->Text = Convert::ToString((Convert::ToDouble(A_value) * Convert::ToDouble(B_value)) / 100);
					   B_represent = mainTextLabel->Text;
					   result = mainTextLabel->Text;
					   subTextBox->Text = A_represent + " " + actionSymbol + " " + B_represent;
				   }
			   }
			   break;
		   case negate:
			   if (isA_coreValueChanged == false || isB_coreValueChanged == false) {
				   if (isA_coreValueChanged == false) {
					   A_represent = "negate( " + A_represent + " )";
					   subTextBox->Text = A_represent;
				   }
				   else if (isB_coreValueChanged == false) {
					   B_represent = "negate( " + B_represent + " )";
					   subTextBox->Text = A_represent + " " + actionSymbol + " " + B_represent;
					   isB_valueConfirmed = true;
				   }
				   mainTextLabel->Text = Convert::ToString((-1) * Convert::ToDouble(mainTextLabel->Text));
			   }
			   else {
				   if (!mainTextLabel->Text->Contains("-")) {
					   if (!(mainTextLabel->Text->Length == 1 && mainTextLabel->Text[0] == '0')) {
						   mainTextLabel->Text = "-" + mainTextLabel->Text;
						   *pVal_represent = Convert::ToString(Convert::ToDouble(mainTextLabel->Text));
					   }
				   }
				   else {
					   mainTextLabel->Text = mainTextLabel->Text->Substring(1, mainTextLabel->Text->Length - 1);
					   *pVal_represent = Convert::ToString(Convert::ToDouble(mainTextLabel->Text));
				   }
			   }
			   break;
		   case one_by_x:
			   SetRepesentations("1/( ");
			   mainTextLabel->Text = Convert::ToString(1 / Convert::ToDouble(mainTextLabel->Text));
			   break;
		   case x_power_two:
			   SetRepesentations("sqr( ");
			   mainTextLabel->Text = Convert::ToString(Math::Pow(Convert::ToDouble(mainTextLabel->Text), 2));
			   break;
		   case x_sqrt:
			   SetRepesentations(L"√" + "( ");
			   mainTextLabel->Text = Convert::ToString(Math::Sqrt(Convert::ToDouble(mainTextLabel->Text)));
			   break;
		   }

		   *pValue = Convert::ToString(Convert::ToDouble(mainTextLabel->Text));
	   }
	   void SetRepesentations(String^ expression) {
	if (isA_valueConfirmed == false) {
		A_represent = expression + A_represent + " )";
		subTextBox->Text = A_represent;
		isA_coreValueChanged = false;
	}
	else {	
		B_represent = expression + B_represent + " )";
		subTextBox->Text = A_represent + " " + actionSymbol + " " + B_represent;
		isB_coreValueChanged = false;
	}
}

						//CLEARING CLEARING CLEARING
private: System::Void clearingActionButton_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	Label^ lbl = safe_cast<Label^>(sender);
	HandleClearingActButton(GetClearAction(lbl->Name));	
}
	   void HandleClearingActButton(clearingButton clearingAct) {
		   switch (clearingAct) {

		   case clear_current:
			   if (isA_coreValueChanged == false) {
				   if (isBufferClear == false) {
					   subTextBox->Text = "";
				   }
				   A_value = "0";
				   A_represent = "0";
			   }
			   else {
				   if (isA_valueConfirmed == false) {
					   A_value = "0";
					   A_represent = "0";
				   }
				   else {
					   subTextBox->Text = A_represent + " " + actionSymbol;
					   B_value = "0";
					   B_represent = "0";
				   }
			   }
			   mainTextLabel->Text = "0";
			   isLabelFull = false;
			   break;
		   case clear_all:
			   SetStartParameters();
			   mainTextLabel->Text = "0";
			   isLabelFull = false;
			   subTextBox->Text = "";
			   break;
		   case backspace:
			   if (isA_coreValueChanged == false && isBufferClear == false) {
				   subTextBox->Text = "";
			   }
			   else {
				   if (isA_valueConfirmed == false) {
					   if (isA_coreValueChanged == true) {
						   if (mainTextLabel->Text->Length > 1) {
							   mainTextLabel->Text = mainTextLabel->Text->Substring(0, mainTextLabel->Text->Length - 1);
						   }
						   else {
							   mainTextLabel->Text = "0";
						   }
						   isLabelFull = false;
						   A_value = mainTextLabel->Text;
						   A_represent = A_value;
					   }
				   }
				   else {
					   if (isB_coreValueChanged == true) {
						   if (mainTextLabel->Text->Length > 1) {
							   mainTextLabel->Text = mainTextLabel->Text->Substring(0, mainTextLabel->Text->Length - 1);
						   }
						   else {
							   mainTextLabel->Text = "0";
						   }
						   isLabelFull = false;
						   B_value = mainTextLabel->Text;
						   B_represent = B_value;
					   }
				   }
			   }
			   break;
		   }
	   }

private: System::Void Form1_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	if ((e->KeyChar >= 48 && e->KeyChar <= 57) || e->KeyChar == 44) {		
		HandleNumericButton(GetNumber(e->KeyChar));		
	}
	switch (e->KeyChar) {
	case (char)13:
	case (char)42:
	case (char)43:
	case (char)45:
	case (char)47:
		HandleActionButton(GetAction(e->KeyChar));
		break;
	}
}
private: System::Void Form1_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
	switch (e->KeyCode) {
	case Keys::D5:
	case Keys::D2:
		if (e->Shift != true) break;
	case Keys::R:
	case Keys::Q:
	case Keys::F9:
		HandleFuncButton(GetFunction(e->KeyCode));
		break;
	case Keys::Escape:
	case Keys::Delete:
	case Keys::Back:
		HandleClearingActButton(GetClearAction(e->KeyCode));
		break;
	}
}

#pragma region MOUSE ENTER/LEAVE EFFECTS
private: System::Void whiteButton_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
	Label^ lbl = safe_cast<Label^>(sender);

	lbl->BackColor = Color::White;
}

private: System::Void grayButton_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
	Label^ lbl = safe_cast<Label^>(sender);

	lbl->BackColor = Color::LightGray;
}
private: System::Void grayButton_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
	Label^ lbl = safe_cast<Label^>(sender);

	lbl->BackColor = Color::WhiteSmoke;
}

private: System::Void blueButton_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
	Label^ lbl = safe_cast<Label^>(sender);

	lbl->BackColor = Color::FromArgb(58, 142, 208);
}
private: System::Void blueButton_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
	Label^ lbl = safe_cast<Label^>(sender);

	lbl->BackColor = Color::FromArgb(138, 186, 224);
}
#pragma endregion
};
}
