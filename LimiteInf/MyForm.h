#pragma once

namespace LimiteInf {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
			this->comboBox1->SelectedIndex=0;
			
		}

		

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén utilizando.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^  groupBox1;
	protected: 


	private: System::Windows::Forms::Button^  button18;

	private: System::Windows::Forms::Button^  button16;
	private: System::Windows::Forms::Button^  button15;
	private: System::Windows::Forms::Button^  button14;
	private: System::Windows::Forms::Button^  button13;
	private: System::Windows::Forms::Button^  button12;
	private: System::Windows::Forms::Button^  button11;
	private: System::Windows::Forms::Button^  button10;
	private: System::Windows::Forms::Button^  button9;
	private: System::Windows::Forms::Button^  button8;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::GroupBox^  gbracional;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  txtdenominador;

	private: System::Windows::Forms::TextBox^  txtnumerador;

	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::GroupBox^  gbpolinomica;
	private: System::Windows::Forms::TextBox^  txtpolinomica;
	private: System::Windows::Forms::Label^  respuesta;
	private: System::Windows::Forms::Label^  rnumerador1;
	private: System::Windows::Forms::GroupBox^  respracional;
	private: System::Windows::Forms::Label^  rfinal;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  rdenominador2;
	private: System::Windows::Forms::Label^  rnumerador2;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  rdenominador1;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::GroupBox^  resppolinomica;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label8;

	private:
		/// <summary>
		/// Variable del diseñador requerida.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido del método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->gbracional = (gcnew System::Windows::Forms::GroupBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->txtdenominador = (gcnew System::Windows::Forms::TextBox());
			this->txtnumerador = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->gbpolinomica = (gcnew System::Windows::Forms::GroupBox());
			this->txtpolinomica = (gcnew System::Windows::Forms::TextBox());
			this->respuesta = (gcnew System::Windows::Forms::Label());
			this->rnumerador1 = (gcnew System::Windows::Forms::Label());
			this->respracional = (gcnew System::Windows::Forms::GroupBox());
			this->rfinal = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->rdenominador2 = (gcnew System::Windows::Forms::Label());
			this->rnumerador2 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->rdenominador1 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->resppolinomica = (gcnew System::Windows::Forms::GroupBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->groupBox1->SuspendLayout();
			this->gbracional->SuspendLayout();
			this->gbpolinomica->SuspendLayout();
			this->respracional->SuspendLayout();
			this->resppolinomica->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->button18);
			this->groupBox1->Controls->Add(this->button16);
			this->groupBox1->Controls->Add(this->button15);
			this->groupBox1->Controls->Add(this->button14);
			this->groupBox1->Controls->Add(this->button13);
			this->groupBox1->Controls->Add(this->button12);
			this->groupBox1->Controls->Add(this->button11);
			this->groupBox1->Controls->Add(this->button10);
			this->groupBox1->Controls->Add(this->button9);
			this->groupBox1->Controls->Add(this->button8);
			this->groupBox1->Controls->Add(this->button7);
			this->groupBox1->Controls->Add(this->button6);
			this->groupBox1->Controls->Add(this->button5);
			this->groupBox1->Controls->Add(this->button4);
			this->groupBox1->Controls->Add(this->button3);
			this->groupBox1->Controls->Add(this->button2);
			this->groupBox1->Enabled = false;
			this->groupBox1->Location = System::Drawing::Point(109, 166);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(401, 136);
			this->groupBox1->TabIndex = 6;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Valores que se Aceptan";
			// 
			// button18
			// 
			this->button18->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button18->Location = System::Drawing::Point(333, 39);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(47, 23);
			this->button18->TabIndex = 15;
			this->button18->Text = L" ^";
			this->button18->UseVisualStyleBackColor = false;
			this->button18->Click += gcnew System::EventHandler(this, &MyForm::button18_Click);
			// 
			// button16
			// 
			this->button16->BackColor = System::Drawing::SystemColors::Highlight;
			this->button16->Location = System::Drawing::Point(333, 63);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(47, 28);
			this->button16->TabIndex = 14;
			this->button16->Text = L"X";
			this->button16->UseVisualStyleBackColor = false;
			this->button16->Click += gcnew System::EventHandler(this, &MyForm::button16_Click);
			// 
			// button15
			// 
			this->button15->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button15->Location = System::Drawing::Point(280, 68);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(47, 23);
			this->button15->TabIndex = 13;
			this->button15->Text = L"-";
			this->button15->UseVisualStyleBackColor = false;
			this->button15->Click += gcnew System::EventHandler(this, &MyForm::button15_Click);
			// 
			// button14
			// 
			this->button14->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button14->Location = System::Drawing::Point(227, 68);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(47, 23);
			this->button14->TabIndex = 12;
			this->button14->Text = L"+";
			this->button14->UseVisualStyleBackColor = false;
			this->button14->Click += gcnew System::EventHandler(this, &MyForm::button14_Click);
			// 
			// button13
			// 
			this->button13->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button13->Location = System::Drawing::Point(280, 39);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(47, 23);
			this->button13->TabIndex = 11;
			this->button13->Text = L"*";
			this->button13->UseVisualStyleBackColor = false;
			this->button13->Click += gcnew System::EventHandler(this, &MyForm::button13_Click);
			// 
			// button12
			// 
			this->button12->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button12->Location = System::Drawing::Point(227, 39);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(47, 23);
			this->button12->TabIndex = 10;
			this->button12->Text = L"/";
			this->button12->UseVisualStyleBackColor = false;
			this->button12->Click += gcnew System::EventHandler(this, &MyForm::button12_Click);
			// 
			// button11
			// 
			this->button11->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button11->Location = System::Drawing::Point(84, 114);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(47, 23);
			this->button11->TabIndex = 9;
			this->button11->Text = L"0";
			this->button11->UseVisualStyleBackColor = false;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm::button11_Click);
			// 
			// button10
			// 
			this->button10->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button10->Location = System::Drawing::Point(137, 85);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(47, 23);
			this->button10->TabIndex = 8;
			this->button10->Text = L"9";
			this->button10->UseVisualStyleBackColor = false;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::button10_Click);
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button9->Location = System::Drawing::Point(84, 85);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(47, 23);
			this->button9->TabIndex = 7;
			this->button9->Text = L"8";
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button8->Location = System::Drawing::Point(31, 85);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(47, 23);
			this->button8->TabIndex = 6;
			this->button8->Text = L"7";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button7->Location = System::Drawing::Point(138, 56);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(47, 23);
			this->button7->TabIndex = 5;
			this->button7->Text = L"6";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button6->Location = System::Drawing::Point(84, 56);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(47, 23);
			this->button6->TabIndex = 4;
			this->button6->Text = L"5";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button5->Location = System::Drawing::Point(31, 56);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(47, 23);
			this->button5->TabIndex = 3;
			this->button5->Text = L"4";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button4->Location = System::Drawing::Point(137, 27);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(47, 23);
			this->button4->TabIndex = 2;
			this->button4->Text = L"3";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button3->Location = System::Drawing::Point(84, 27);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(47, 23);
			this->button3->TabIndex = 1;
			this->button3->Text = L"2";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button2->Location = System::Drawing::Point(31, 27);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(47, 23);
			this->button2->TabIndex = 0;
			this->button2->Text = L"1";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button1->Location = System::Drawing::Point(502, 106);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 25);
			this->button1->TabIndex = 12;
			this->button1->Text = L"Resolver";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// gbracional
			// 
			this->gbracional->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->gbracional->Controls->Add(this->label3);
			this->gbracional->Controls->Add(this->txtdenominador);
			this->gbracional->Controls->Add(this->txtnumerador);
			this->gbracional->Location = System::Drawing::Point(170, 84);
			this->gbracional->Name = L"gbracional";
			this->gbracional->Size = System::Drawing::Size(316, 73);
			this->gbracional->TabIndex = 8;
			this->gbracional->TabStop = false;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 3.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::Maroon;
			this->label3->Location = System::Drawing::Point(6, 29);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(315, 6);
			this->label3->TabIndex = 2;
			this->label3->Text = L"______________________________________________________________________________";
			// 
			// txtdenominador
			// 
			this->txtdenominador->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->txtdenominador->Location = System::Drawing::Point(7, 38);
			this->txtdenominador->Name = L"txtdenominador";
			this->txtdenominador->Size = System::Drawing::Size(304, 26);
			this->txtdenominador->TabIndex = 1;
			this->txtdenominador->TextChanged += gcnew System::EventHandler(this, &MyForm::txtdenominador_TextChanged);
			this->txtdenominador->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::txtdenominador_KeyPress);
			// 
			// txtnumerador
			// 
			this->txtnumerador->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->txtnumerador->Location = System::Drawing::Point(6, 0);
			this->txtnumerador->Name = L"txtnumerador";
			this->txtnumerador->Size = System::Drawing::Size(304, 26);
			this->txtnumerador->TabIndex = 0;
			this->txtnumerador->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::txtnumerador_KeyPress);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Georgia", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(104, 113);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(60, 25);
			this->label2->TabIndex = 11;
			this->label2->Text = L"x->∞";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Georgia", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(104, 84);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(55, 29);
			this->label1->TabIndex = 10;
			this->label1->Text = L"Lim";
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(2) {L"Polinomica", L"Racional"});
			this->comboBox1->Location = System::Drawing::Point(109, 12);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 21);
			this->comboBox1->TabIndex = 9;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox1_SelectedIndexChanged);
			// 
			// gbpolinomica
			// 
			this->gbpolinomica->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->gbpolinomica->Controls->Add(this->txtpolinomica);
			this->gbpolinomica->Location = System::Drawing::Point(170, 96);
			this->gbpolinomica->Name = L"gbpolinomica";
			this->gbpolinomica->Size = System::Drawing::Size(316, 42);
			this->gbpolinomica->TabIndex = 7;
			this->gbpolinomica->TabStop = false;
			// 
			// txtpolinomica
			// 
			this->txtpolinomica->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->txtpolinomica->Location = System::Drawing::Point(6, 7);
			this->txtpolinomica->Name = L"txtpolinomica";
			this->txtpolinomica->Size = System::Drawing::Size(304, 29);
			this->txtpolinomica->TabIndex = 0;
			this->txtpolinomica->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::txtpolinomica_KeyPress);
			// 
			// respuesta
			// 
			this->respuesta->AutoSize = true;
			this->respuesta->Location = System::Drawing::Point(62, 16);
			this->respuesta->Name = L"respuesta";
			this->respuesta->Size = System::Drawing::Size(35, 13);
			this->respuesta->TabIndex = 13;
			this->respuesta->Text = L"label4";
			// 
			// rnumerador1
			// 
			this->rnumerador1->AutoSize = true;
			this->rnumerador1->Location = System::Drawing::Point(74, 16);
			this->rnumerador1->Name = L"rnumerador1";
			this->rnumerador1->Size = System::Drawing::Size(35, 13);
			this->rnumerador1->TabIndex = 14;
			this->rnumerador1->Text = L"label4";
			// 
			// respracional
			// 
			this->respracional->Controls->Add(this->label4);
			this->respracional->Controls->Add(this->label8);
			this->respracional->Controls->Add(this->rfinal);
			this->respracional->Controls->Add(this->label9);
			this->respracional->Controls->Add(this->rdenominador2);
			this->respracional->Controls->Add(this->rnumerador2);
			this->respracional->Controls->Add(this->label7);
			this->respracional->Controls->Add(this->rdenominador1);
			this->respracional->Controls->Add(this->rnumerador1);
			this->respracional->Location = System::Drawing::Point(60, 364);
			this->respracional->Name = L"respracional";
			this->respracional->Size = System::Drawing::Size(517, 70);
			this->respracional->TabIndex = 15;
			this->respracional->TabStop = false;
			// 
			// rfinal
			// 
			this->rfinal->AutoSize = true;
			this->rfinal->Location = System::Drawing::Point(476, 32);
			this->rfinal->Name = L"rfinal";
			this->rfinal->Size = System::Drawing::Size(35, 13);
			this->rfinal->TabIndex = 22;
			this->rfinal->Text = L"label4";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(279, 32);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(199, 13);
			this->label9->TabIndex = 21;
			this->label9->Text = L"_______________________________=";
			// 
			// rdenominador2
			// 
			this->rdenominador2->AutoSize = true;
			this->rdenominador2->Location = System::Drawing::Point(279, 45);
			this->rdenominador2->Name = L"rdenominador2";
			this->rdenominador2->Size = System::Drawing::Size(35, 13);
			this->rdenominador2->TabIndex = 20;
			this->rdenominador2->Text = L"label4";
			// 
			// rnumerador2
			// 
			this->rnumerador2->AutoSize = true;
			this->rnumerador2->Location = System::Drawing::Point(279, 16);
			this->rnumerador2->Name = L"rnumerador2";
			this->rnumerador2->Size = System::Drawing::Size(35, 13);
			this->rnumerador2->TabIndex = 19;
			this->rnumerador2->Text = L"label4";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(74, 29);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(199, 13);
			this->label7->TabIndex = 18;
			this->label7->Text = L"_______________________________=";
			// 
			// rdenominador1
			// 
			this->rdenominador1->AutoSize = true;
			this->rdenominador1->Location = System::Drawing::Point(74, 45);
			this->rdenominador1->Name = L"rdenominador1";
			this->rdenominador1->Size = System::Drawing::Size(35, 13);
			this->rdenominador1->TabIndex = 15;
			this->rdenominador1->Text = L"label4";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Georgia", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(11, 25);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(45, 18);
			this->label5->TabIndex = 17;
			this->label5->Text = L"x->∞";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Georgia", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(11, 7);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(36, 18);
			this->label6->TabIndex = 16;
			this->label6->Text = L"Lim";
			// 
			// resppolinomica
			// 
			this->resppolinomica->Controls->Add(this->respuesta);
			this->resppolinomica->Controls->Add(this->label6);
			this->resppolinomica->Controls->Add(this->label5);
			this->resppolinomica->Location = System::Drawing::Point(137, 309);
			this->resppolinomica->Name = L"resppolinomica";
			this->resppolinomica->Size = System::Drawing::Size(316, 52);
			this->resppolinomica->TabIndex = 16;
			this->resppolinomica->TabStop = false;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Georgia", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(15, 25);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(36, 18);
			this->label4->TabIndex = 18;
			this->label4->Text = L"Lim";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Georgia", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(15, 43);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(45, 18);
			this->label8->TabIndex = 19;
			this->label8->Text = L"x->∞";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(615, 446);
			this->Controls->Add(this->resppolinomica);
			this->Controls->Add(this->respracional);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->gbracional);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->gbpolinomica);
			this->Controls->Add(this->groupBox1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->groupBox1->ResumeLayout(false);
			this->gbracional->ResumeLayout(false);
			this->gbracional->PerformLayout();
			this->gbpolinomica->ResumeLayout(false);
			this->gbpolinomica->PerformLayout();
			this->respracional->ResumeLayout(false);
			this->respracional->PerformLayout();
			this->resppolinomica->ResumeLayout(false);
			this->resppolinomica->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
private: System::Void button2_Click_1(System::Object^  sender, System::EventArgs^  e) {
			 
			 
		 }
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			 txtpolinomica->Text=txtpolinomica->Text+"1";
		 }
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
			 txtpolinomica->Text=txtpolinomica->Text+"2";
		 }
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
			 txtpolinomica->Text=txtpolinomica->Text+"3";
		 }
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
			 txtpolinomica->Text=txtpolinomica->Text+"4";
		 }
private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
			 txtpolinomica->Text=txtpolinomica->Text+"5";
		 }
private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {
			 txtpolinomica->Text=txtpolinomica->Text+"6";
		 }
private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e) {
			 txtpolinomica->Text=txtpolinomica->Text+"7";
		 }
private: System::Void button9_Click(System::Object^  sender, System::EventArgs^  e) {
			 txtpolinomica->Text=txtpolinomica->Text+"8";
		 }
private: System::Void button10_Click(System::Object^  sender, System::EventArgs^  e) {
			 txtpolinomica->Text=txtpolinomica->Text+"9";
		 }
private: System::Void button11_Click(System::Object^  sender, System::EventArgs^  e) {
			 txtpolinomica->Text=txtpolinomica->Text+"0";
		 }
private: System::Void button12_Click(System::Object^  sender, System::EventArgs^  e) {
			 txtpolinomica->Text=txtpolinomica->Text+"/";
		 }
private: System::Void button13_Click(System::Object^  sender, System::EventArgs^  e) {
			 txtpolinomica->Text=txtpolinomica->Text+"*";
		 }
private: System::Void button19_Click(System::Object^  sender, System::EventArgs^  e) {
			 txtpolinomica->Text=txtpolinomica->Text+"(";
		 }
private: System::Void button14_Click(System::Object^  sender, System::EventArgs^  e) {
			 txtpolinomica->Text=txtpolinomica->Text+"+";
		 }
private: System::Void button15_Click(System::Object^  sender, System::EventArgs^  e) {
			 txtpolinomica->Text=txtpolinomica->Text+"-";
		 }
private: System::Void button20_Click(System::Object^  sender, System::EventArgs^  e) {
			 txtpolinomica->Text=txtpolinomica->Text+")";
		 }
private: System::Void button17_Click(System::Object^  sender, System::EventArgs^  e) {
			 txtpolinomica->Text=txtpolinomica->Text+"√ ";
		 }
private: System::Void button18_Click(System::Object^  sender, System::EventArgs^  e) {
			 txtpolinomica->Text=txtpolinomica->Text+"^";
		 }
private: System::Void button16_Click(System::Object^  sender, System::EventArgs^  e) {
			 txtpolinomica->Text=txtpolinomica->Text+"X";
		 }
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			 
			 String ^formula;
			 String ^remplazado;
			 String ^numerador;
			 String ^denominador;

				 

			 if(this->comboBox1->SelectedIndex==0){
				 formula=txtpolinomica->Text;
				 for (int i = 0; i < txtpolinomica->TextLength; i++)
				 {
					 if(Convert::ToString(formula[i])=="X"){
					 remplazado=remplazado+ "(Inf)";
					 }else{
						 remplazado=remplazado+Convert::ToString(formula[i]);
					 }

					 

				 }
             this->respuesta->Text=Convert::ToString(remplazado)+ " = Inf";
				

			 }else{

				 numerador=txtnumerador->Text;
				 denominador=txtdenominador->Text;
				 int potencianumerador=1,potenciadenominador=1;
				 int compararPotencia;
				 for (int i = 0; i < numerador->Length; i++){
					if(Convert::ToString(numerador[i])=="^" && Convert::ToString(numerador[i-1])=="X"){
						
						compararPotencia=recursividad(numerador,i);
							if(potencianumerador<compararPotencia) potencianumerador=compararPotencia;
					}
				 }

				  for (int i = 0; i < denominador->Length; i++){
					if(Convert::ToString(denominador[i])=="^" && Convert::ToString(denominador[i-1])=="X"){
							compararPotencia=recursividad(denominador,i);
							if(potenciadenominador<compararPotencia) potenciadenominador=compararPotencia;
					}
				 }

				  if(potenciadenominador>potencianumerador){
					  darSolucion(numerador,potenciadenominador,1);
					  darSolucion(denominador,potenciadenominador,2);

					  rfinal->Text=Convert::ToString("0");
				  
				  }else if(potenciadenominador<potencianumerador){
				   darSolucion(numerador,potencianumerador,1);
					  darSolucion(denominador,potencianumerador,2);
					  rfinal->Text=Convert::ToString("Inf");
				  }else{
				  darSolucion(numerador,potencianumerador,1);
					  darSolucion(denominador,potencianumerador,2);
					  darsolucioniguales(numerador,potenciadenominador);



				  }

				 




				 //respuesta->Text=Convert::ToString(potencianumerador)+" "+Convert::ToString(potenciadenominador) ;

				 

			 }

		 }


		 void darsolucioniguales(String ^cadena, int valorll){
			 int valor,jj;
			 String ^valorstring;
			 String ^sacarExponente;
			 bool coeficiente=false;
			 
			 for (int i = 0; i < cadena->Length; i++){
				 if(Convert::ToString( cadena[i]) == "X" ){
					 if(i==0)valorstring="1";
					 
					 //pasamos  a encontrar el exponente de la X
						 
						 for (int j = i+2; j < cadena->Length; j++){
							 
							 if(Convert::ToString(cadena[j])=="+" || Convert::ToString(cadena[j])=="-")
							 {

								valor=Convert::ToInt16(sacarExponente);

								 if(valorll != valor) valorstring=Convert::ToString(cadena[j]);

								 break;
							 }else{

								 sacarExponente=sacarExponente+Convert::ToString(cadena[j]);
							 }
							 
						 }

					 

				 }else{
					 if(Convert::ToString(cadena[i]) == "+" || Convert::ToString(cadena[i])=="-"){
						valorstring=Convert::ToString(cadena[i]) ;
						
					 }else{
				 valorstring = valorstring+Convert::ToString(cadena[i]);

					 }
				 }
			 
			 }
			 rfinal->Text=valorstring;

		 }

		 void darSolucion(String ^cadena, int valor, int fracion){
			
			 String ^cadena1;
			 String ^cadena2;
			 cadena1="(";
			 cadena2="(";

			 for (int i = 0; i < cadena->Length; i++){
				
			 if(((Convert::ToString( cadena[i]) == "+" || Convert::ToString( cadena[i]) == "-" ||Convert::ToString( cadena[i]) == "*"  || Convert::ToString( cadena[i]) == "/" ))&& i>0) {
			 cadena1=cadena1+ ")/X^"+valor+Convert::ToString(cadena[i])+"(";
			cadena2=cadena2+ ")/Inf^"+valor+Convert::ToString(cadena[i])+"(";

			 }else{
			 cadena1=cadena1+Convert::ToString(cadena[i]);
			 cadena2=cadena2+Convert::ToString(cadena[i]);
			 }
		 }
			 cadena1=cadena1+ ")/X^"+valor;
			cadena2=cadena2+ ")/Inf^"+valor;

			 if(fracion==1){
			 rnumerador1->Text=cadena1;
			 rnumerador2->Text=cadena2;
			 }else{
			 rdenominador1->Text=cadena1;
			 rdenominador2->Text=cadena2;
			 }



		 }


		 int recursividad(String ^cadena, int indice){
				String ^valor;
			 for (int i = indice+1; i < cadena->Length; i++){

				 if(Convert::ToString( cadena[i]) == "+" || Convert::ToString( cadena[i]) == "-" ||Convert::ToString( cadena[i]) == "*"  || Convert::ToString( cadena[i]) == "/"){
					break;
				 }else{
				 valor=valor+cadena[i];
				 }

				 }
			 return Convert::ToInt16(valor);
		}

		private: System::Void txtnumerador_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {

					 if(e->KeyChar>39 && e->KeyChar<58 || e->KeyChar==88  || e->KeyChar==94  ){
						e->Handled=false;
					 }else{
						 e->Handled=true;
					 }

		 }
private: System::Void txtdenominador_TextChanged(System::Object^  sender, System::EventArgs^  e) {

		 }
private: System::Void txtdenominador_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
			  if(e->KeyChar>39 && e->KeyChar<58 || e->KeyChar==88 || e->KeyChar==94 ){
						e->Handled=false;
					 }else{
						 e->Handled=true;
					 }
		 }
private: System::Void txtpolinomica_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
			  if(e->KeyChar>39 && e->KeyChar<58 || e->KeyChar==88  || e->KeyChar==94){
						e->Handled=false;
					 }else{
						 e->Handled=true;
					 }
		 }
private: System::Void comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
			 if(comboBox1->SelectedIndex==0){
				 gbpolinomica->Visible=true;
			 gbracional->Visible=false;
			 respracional->Visible=false;
			 resppolinomica->Visible=true;
			 }
			 else{
			 gbpolinomica->Visible=false;
			 gbracional->Visible=true;
			 respracional->Visible=true;
			 resppolinomica->Visible=false;
			 }

		 }
};
}
