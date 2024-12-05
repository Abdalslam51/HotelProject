#pragma once
#include"clsManagementClient.h"

namespace HotelProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Collections::Generic;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	/// <summary>
	/// Summary for frmClientManagement
	/// </summary>
	public ref class frmClientManagement : public System::Windows::Forms::Form
	{
	public:
		frmClientManagement(void)
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
		~frmClientManagement()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TabControl^ tbClientManagement;
	protected:











	private: System::Windows::Forms::TabPage^ tpShowClient;
	private: System::Windows::Forms::DataGridView^ dataGridView1;





	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TabPage^ tpDeleteClient;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ txbNameForDelete;

	private: System::Windows::Forms::TabPage^ tpAddNewClient;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ tbxIDCard;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ tbxDetailClient;


	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ tbClientsName;
	private: System::Windows::Forms::Label^ label1;



	private: System::Windows::Forms::DataGridView^ DGVForDelete;




	private: System::Windows::Forms::Button^ btnCloseRoomManagement;
	private: System::Windows::Forms::Label^ lblError;
	private: System::Windows::Forms::Label^ lblDetailError;
	private: System::Windows::Forms::Label^ lblIDError;






	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ txbProfession;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ txbNationality;












	private: System::Windows::Forms::Label^ lblNationalityError;
	private: System::Windows::Forms::Label^ lblProfessionError;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ CIDNumber;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ CName;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ C_Contact_Info;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ cNationality;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ cProfession;
private: System::Windows::Forms::Button^ btnUpdateClient;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn2;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn1;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn3;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ cNationalityD;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ cProfessionD;







































































	protected:

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
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle3 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(frmClientManagement::typeid));
			this->tbClientManagement = (gcnew System::Windows::Forms::TabControl());
			this->tpAddNewClient = (gcnew System::Windows::Forms::TabPage());
			this->lblNationalityError = (gcnew System::Windows::Forms::Label());
			this->lblProfessionError = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->txbProfession = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->txbNationality = (gcnew System::Windows::Forms::TextBox());
			this->lblDetailError = (gcnew System::Windows::Forms::Label());
			this->lblIDError = (gcnew System::Windows::Forms::Label());
			this->lblError = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->tbxIDCard = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->tbxDetailClient = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->tbClientsName = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tpShowClient = (gcnew System::Windows::Forms::TabPage());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->CIDNumber = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->CName = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->C_Contact_Info = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->cNationality = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->cProfession = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->tpDeleteClient = (gcnew System::Windows::Forms::TabPage());
			this->btnUpdateClient = (gcnew System::Windows::Forms::Button());
			this->DGVForDelete = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridViewTextBoxColumn2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->cNationalityD = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->cProfessionD = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->txbNameForDelete = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->btnCloseRoomManagement = (gcnew System::Windows::Forms::Button());
			this->tbClientManagement->SuspendLayout();
			this->tpAddNewClient->SuspendLayout();
			this->tpShowClient->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->tpDeleteClient->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DGVForDelete))->BeginInit();
			this->SuspendLayout();
			// 
			// tbClientManagement
			// 
			this->tbClientManagement->Alignment = System::Windows::Forms::TabAlignment::Bottom;
			this->tbClientManagement->Controls->Add(this->tpAddNewClient);
			this->tbClientManagement->Controls->Add(this->tpShowClient);
			this->tbClientManagement->Controls->Add(this->tpDeleteClient);
			this->tbClientManagement->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbClientManagement->Location = System::Drawing::Point(12, 40);
			this->tbClientManagement->Name = L"tbClientManagement";
			this->tbClientManagement->SelectedIndex = 0;
			this->tbClientManagement->Size = System::Drawing::Size(1280, 549);
			this->tbClientManagement->TabIndex = 7;
			this->tbClientManagement->SelectedIndexChanged += gcnew System::EventHandler(this, &frmClientManagement::tbClientManagement_SelectedIndexChanged);
			// 
			// tpAddNewClient
			// 
			this->tpAddNewClient->BackColor = System::Drawing::Color::Silver;
			this->tpAddNewClient->Controls->Add(this->lblNationalityError);
			this->tpAddNewClient->Controls->Add(this->lblProfessionError);
			this->tpAddNewClient->Controls->Add(this->label9);
			this->tpAddNewClient->Controls->Add(this->txbProfession);
			this->tpAddNewClient->Controls->Add(this->label5);
			this->tpAddNewClient->Controls->Add(this->txbNationality);
			this->tpAddNewClient->Controls->Add(this->lblDetailError);
			this->tpAddNewClient->Controls->Add(this->lblIDError);
			this->tpAddNewClient->Controls->Add(this->lblError);
			this->tpAddNewClient->Controls->Add(this->button1);
			this->tpAddNewClient->Controls->Add(this->label4);
			this->tpAddNewClient->Controls->Add(this->tbxIDCard);
			this->tpAddNewClient->Controls->Add(this->label3);
			this->tpAddNewClient->Controls->Add(this->tbxDetailClient);
			this->tpAddNewClient->Controls->Add(this->label2);
			this->tpAddNewClient->Controls->Add(this->tbClientsName);
			this->tpAddNewClient->Controls->Add(this->label1);
			this->tpAddNewClient->Location = System::Drawing::Point(4, 4);
			this->tpAddNewClient->Name = L"tpAddNewClient";
			this->tpAddNewClient->Padding = System::Windows::Forms::Padding(3);
			this->tpAddNewClient->Size = System::Drawing::Size(1272, 512);
			this->tpAddNewClient->TabIndex = 0;
			this->tpAddNewClient->Text = L"Add New Client";
			this->tpAddNewClient->Click += gcnew System::EventHandler(this, &frmClientManagement::tpAddNewClient_Click);
			// 
			// lblNationalityError
			// 
			this->lblNationalityError->AutoSize = true;
			this->lblNationalityError->Font = (gcnew System::Drawing::Font(L"Tahoma", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblNationalityError->ForeColor = System::Drawing::Color::Red;
			this->lblNationalityError->Location = System::Drawing::Point(254, 201);
			this->lblNationalityError->Name = L"lblNationalityError";
			this->lblNationalityError->Size = System::Drawing::Size(0, 21);
			this->lblNationalityError->TabIndex = 23;
			// 
			// lblProfessionError
			// 
			this->lblProfessionError->AutoSize = true;
			this->lblProfessionError->Font = (gcnew System::Drawing::Font(L"Tahoma", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblProfessionError->ForeColor = System::Drawing::Color::Red;
			this->lblProfessionError->Location = System::Drawing::Point(246, 286);
			this->lblProfessionError->Name = L"lblProfessionError";
			this->lblProfessionError->Size = System::Drawing::Size(0, 21);
			this->lblProfessionError->TabIndex = 22;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::Color::Black;
			this->label9->Location = System::Drawing::Point(25, 245);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(220, 29);
			this->label9->TabIndex = 21;
			this->label9->Text = L"Profession Client:";
			// 
			// txbProfession
			// 
			this->txbProfession->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txbProfession->Location = System::Drawing::Point(248, 249);
			this->txbProfession->MaxLength = 15;
			this->txbProfession->Name = L"txbProfession";
			this->txbProfession->Size = System::Drawing::Size(230, 34);
			this->txbProfession->TabIndex = 2;
			this->txbProfession->TextChanged += gcnew System::EventHandler(this, &frmClientManagement::txbProfession_TextChanged);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::Black;
			this->label5->Location = System::Drawing::Point(25, 160);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(218, 29);
			this->label5->TabIndex = 19;
			this->label5->Text = L"Nationality Client:";
			// 
			// txbNationality
			// 
			this->txbNationality->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txbNationality->Location = System::Drawing::Point(248, 164);
			this->txbNationality->MaxLength = 15;
			this->txbNationality->Name = L"txbNationality";
			this->txbNationality->Size = System::Drawing::Size(230, 34);
			this->txbNationality->TabIndex = 1;
			this->txbNationality->TabIndexChanged += gcnew System::EventHandler(this, &frmClientManagement::txbNationality_TabIndexChanged);
			this->txbNationality->TextChanged += gcnew System::EventHandler(this, &frmClientManagement::txbNationality_TextChanged);
			// 
			// lblDetailError
			// 
			this->lblDetailError->AutoSize = true;
			this->lblDetailError->Font = (gcnew System::Drawing::Font(L"Tahoma", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblDetailError->ForeColor = System::Drawing::Color::Red;
			this->lblDetailError->Location = System::Drawing::Point(246, 447);
			this->lblDetailError->Name = L"lblDetailError";
			this->lblDetailError->Size = System::Drawing::Size(0, 21);
			this->lblDetailError->TabIndex = 17;
			// 
			// lblIDError
			// 
			this->lblIDError->AutoSize = true;
			this->lblIDError->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblIDError->ForeColor = System::Drawing::Color::Red;
			this->lblIDError->Location = System::Drawing::Point(739, 123);
			this->lblIDError->Name = L"lblIDError";
			this->lblIDError->Size = System::Drawing::Size(0, 20);
			this->lblIDError->TabIndex = 16;
			// 
			// lblError
			// 
			this->lblError->AutoSize = true;
			this->lblError->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblError->ForeColor = System::Drawing::Color::Red;
			this->lblError->Location = System::Drawing::Point(253, 127);
			this->lblError->Name = L"lblError";
			this->lblError->Size = System::Drawing::Size(0, 20);
			this->lblError->TabIndex = 15;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(743, 374);
			this->button1->Margin = System::Windows::Forms::Padding(4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(185, 70);
			this->button1->TabIndex = 5;
			this->button1->Text = L"Add";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &frmClientManagement::button1_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::Black;
			this->label4->Location = System::Drawing::Point(578, 86);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(108, 29);
			this->label4->TabIndex = 6;
			this->label4->Text = L"ID Card:";
			// 
			// tbxIDCard
			// 
			this->tbxIDCard->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbxIDCard->Location = System::Drawing::Point(718, 88);
			this->tbxIDCard->MaxLength = 5;
			this->tbxIDCard->Name = L"tbxIDCard";
			this->tbxIDCard->ScrollBars = System::Windows::Forms::ScrollBars::Horizontal;
			this->tbxIDCard->Size = System::Drawing::Size(230, 34);
			this->tbxIDCard->TabIndex = 4;
			this->tbxIDCard->TextChanged += gcnew System::EventHandler(this, &frmClientManagement::tbxIDCard_TextChanged_1);
			this->tbxIDCard->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &frmClientManagement::tbxIDCard_KeyPress);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::Black;
			this->label3->Location = System::Drawing::Point(25, 354);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(163, 29);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Detail Client:";
			// 
			// tbxDetailClient
			// 
			this->tbxDetailClient->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbxDetailClient->Location = System::Drawing::Point(248, 354);
			this->tbxDetailClient->MaxLength = 30;
			this->tbxDetailClient->Multiline = true;
			this->tbxDetailClient->Name = L"tbxDetailClient";
			this->tbxDetailClient->Size = System::Drawing::Size(450, 90);
			this->tbxDetailClient->TabIndex = 3;
			this->tbxDetailClient->TextChanged += gcnew System::EventHandler(this, &frmClientManagement::tbxDetailClient_TextChanged);
			this->tbxDetailClient->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &frmClientManagement::tbxDetailClient_KeyPress);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::Black;
			this->label2->Location = System::Drawing::Point(25, 88);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(164, 29);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Name Client:";
			// 
			// tbClientsName
			// 
			this->tbClientsName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbClientsName->Location = System::Drawing::Point(248, 92);
			this->tbClientsName->MaxLength = 30;
			this->tbClientsName->Name = L"tbClientsName";
			this->tbClientsName->Size = System::Drawing::Size(230, 34);
			this->tbClientsName->TabIndex = 0;
			this->tbClientsName->TextChanged += gcnew System::EventHandler(this, &frmClientManagement::tbClientsName_TextChanged);
			this->tbClientsName->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &frmClientManagement::tbClientsName_KeyPress);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Calibri", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Black;
			this->label1->Location = System::Drawing::Point(12, 5);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(217, 37);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Add New Client:";
			// 
			// tpShowClient
			// 
			this->tpShowClient->BackColor = System::Drawing::Color::Silver;
			this->tpShowClient->Controls->Add(this->label6);
			this->tpShowClient->Controls->Add(this->dataGridView1);
			this->tpShowClient->Location = System::Drawing::Point(4, 4);
			this->tpShowClient->Name = L"tpShowClient";
			this->tpShowClient->Size = System::Drawing::Size(1272, 512);
			this->tpShowClient->TabIndex = 2;
			this->tpShowClient->Text = L"Show Client";
			this->tpShowClient->Click += gcnew System::EventHandler(this, &frmClientManagement::tpShowClient_Click_1);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Tahoma", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::Black;
			this->label6->Location = System::Drawing::Point(3, 5);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(236, 34);
			this->label6->TabIndex = 2;
			this->label6->Text = L"Show All Client:";
			// 
			// dataGridView1
			// 
			this->dataGridView1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGridView1->BackgroundColor = System::Drawing::Color::Silver;
			this->dataGridView1->CellBorderStyle = System::Windows::Forms::DataGridViewCellBorderStyle::Raised;
			this->dataGridView1->ColumnHeadersHeight = 29;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->CIDNumber,
					this->CName, this->C_Contact_Info, this->cNationality, this->cProfession
			});
			this->dataGridView1->Cursor = System::Windows::Forms::Cursors::Default;
			this->dataGridView1->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->dataGridView1->Location = System::Drawing::Point(0, 59);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 26;
			this->dataGridView1->Size = System::Drawing::Size(1272, 453);
			this->dataGridView1->TabIndex = 1;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &frmClientManagement::dataGridView1_CellContentClick);
			// 
			// CIDNumber
			// 
			dataGridViewCellStyle1->BackColor = System::Drawing::Color::White;
			dataGridViewCellStyle1->Format = L"N6";
			dataGridViewCellStyle1->NullValue = nullptr;
			this->CIDNumber->DefaultCellStyle = dataGridViewCellStyle1;
			this->CIDNumber->HeaderText = L"ID Number";
			this->CIDNumber->MaxInputLength = 7;
			this->CIDNumber->MinimumWidth = 6;
			this->CIDNumber->Name = L"CIDNumber";
			// 
			// CName
			// 
			this->CName->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			dataGridViewCellStyle2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			dataGridViewCellStyle2->NullValue = nullptr;
			this->CName->DefaultCellStyle = dataGridViewCellStyle2;
			this->CName->HeaderText = L"Name";
			this->CName->MaxInputLength = 30;
			this->CName->MinimumWidth = 6;
			this->CName->Name = L"CName";
			// 
			// C_Contact_Info
			// 
			this->C_Contact_Info->HeaderText = L"Details";
			this->C_Contact_Info->MaxInputLength = 40;
			this->C_Contact_Info->MinimumWidth = 6;
			this->C_Contact_Info->Name = L"C_Contact_Info";
			// 
			// cNationality
			// 
			dataGridViewCellStyle3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->cNationality->DefaultCellStyle = dataGridViewCellStyle3;
			this->cNationality->HeaderText = L"Nationality";
			this->cNationality->MaxInputLength = 14;
			this->cNationality->MinimumWidth = 6;
			this->cNationality->Name = L"cNationality";
			// 
			// cProfession
			// 
			this->cProfession->HeaderText = L"Profession";
			this->cProfession->MaxInputLength = 10;
			this->cProfession->MinimumWidth = 6;
			this->cProfession->Name = L"cProfession";
			this->cProfession->Resizable = System::Windows::Forms::DataGridViewTriState::True;
			this->cProfession->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
			// 
			// tpDeleteClient
			// 
			this->tpDeleteClient->BackColor = System::Drawing::Color::Silver;
			this->tpDeleteClient->Controls->Add(this->btnUpdateClient);
			this->tpDeleteClient->Controls->Add(this->DGVForDelete);
			this->tpDeleteClient->Controls->Add(this->button2);
			this->tpDeleteClient->Controls->Add(this->label8);
			this->tpDeleteClient->Controls->Add(this->txbNameForDelete);
			this->tpDeleteClient->Controls->Add(this->label7);
			this->tpDeleteClient->Location = System::Drawing::Point(4, 4);
			this->tpDeleteClient->Name = L"tpDeleteClient";
			this->tpDeleteClient->Size = System::Drawing::Size(1272, 512);
			this->tpDeleteClient->TabIndex = 3;
			this->tpDeleteClient->Text = L"Delete Client";
			// 
			// btnUpdateClient
			// 
			this->btnUpdateClient->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->btnUpdateClient->FlatAppearance->BorderSize = 0;
			this->btnUpdateClient->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Teal;
			this->btnUpdateClient->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->btnUpdateClient->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnUpdateClient->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnUpdateClient->ForeColor = System::Drawing::Color::White;
			this->btnUpdateClient->Location = System::Drawing::Point(427, 415);
			this->btnUpdateClient->Margin = System::Windows::Forms::Padding(4);
			this->btnUpdateClient->Name = L"btnUpdateClient";
			this->btnUpdateClient->Size = System::Drawing::Size(144, 49);
			this->btnUpdateClient->TabIndex = 17;
			this->btnUpdateClient->Text = L"Update";
			this->btnUpdateClient->UseVisualStyleBackColor = false;
			this->btnUpdateClient->Click += gcnew System::EventHandler(this, &frmClientManagement::btnUpdateClient_Click);
			// 
			// DGVForDelete
			// 
			this->DGVForDelete->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->DGVForDelete->BackgroundColor = System::Drawing::SystemColors::Control;
			this->DGVForDelete->CellBorderStyle = System::Windows::Forms::DataGridViewCellBorderStyle::Raised;
			this->DGVForDelete->ColumnHeadersHeight = 29;
			this->DGVForDelete->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->dataGridViewTextBoxColumn2,
					this->dataGridViewTextBoxColumn1, this->dataGridViewTextBoxColumn3, this->cNationalityD, this->cProfessionD
			});
			this->DGVForDelete->Cursor = System::Windows::Forms::Cursors::Default;
			this->DGVForDelete->Location = System::Drawing::Point(0, 132);
			this->DGVForDelete->Name = L"DGVForDelete";
			this->DGVForDelete->RowHeadersWidth = 51;
			this->DGVForDelete->RowTemplate->Height = 26;
			this->DGVForDelete->Size = System::Drawing::Size(1294, 72);
			this->DGVForDelete->TabIndex = 16;
			// 
			// dataGridViewTextBoxColumn2
			// 
			this->dataGridViewTextBoxColumn2->HeaderText = L"ID Number";
			this->dataGridViewTextBoxColumn2->MaxInputLength = 7;
			this->dataGridViewTextBoxColumn2->MinimumWidth = 11;
			this->dataGridViewTextBoxColumn2->Name = L"dataGridViewTextBoxColumn2";
			// 
			// dataGridViewTextBoxColumn1
			// 
			this->dataGridViewTextBoxColumn1->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->dataGridViewTextBoxColumn1->HeaderText = L"Name";
			this->dataGridViewTextBoxColumn1->MaxInputLength = 30;
			this->dataGridViewTextBoxColumn1->MinimumWidth = 10;
			this->dataGridViewTextBoxColumn1->Name = L"dataGridViewTextBoxColumn1";
			// 
			// dataGridViewTextBoxColumn3
			// 
			this->dataGridViewTextBoxColumn3->HeaderText = L"Detail";
			this->dataGridViewTextBoxColumn3->MaxInputLength = 40;
			this->dataGridViewTextBoxColumn3->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn3->Name = L"dataGridViewTextBoxColumn3";
			// 
			// cNationalityD
			// 
			this->cNationalityD->HeaderText = L"Nationality";
			this->cNationalityD->MaxInputLength = 10;
			this->cNationalityD->MinimumWidth = 6;
			this->cNationalityD->Name = L"cNationalityD";
			// 
			// cProfessionD
			// 
			this->cProfessionD->HeaderText = L"Profession";
			this->cProfessionD->MaxInputLength = 10;
			this->cProfessionD->MinimumWidth = 6;
			this->cProfessionD->Name = L"cProfessionD";
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button2->FlatAppearance->BorderSize = 0;
			this->button2->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Teal;
			this->button2->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::White;
			this->button2->Location = System::Drawing::Point(53, 415);
			this->button2->Margin = System::Windows::Forms::Padding(4);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(144, 49);
			this->button2->TabIndex = 15;
			this->button2->Text = L"Delete";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &frmClientManagement::button2_Click);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Tahoma", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::Color::Black;
			this->label8->Location = System::Drawing::Point(271, 64);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(224, 34);
			this->label8->TabIndex = 4;
			this->label8->Text = L"ID Card Client:";
			// 
			// txbNameForDelete
			// 
			this->txbNameForDelete->Location = System::Drawing::Point(501, 68);
			this->txbNameForDelete->MaxLength = 5;
			this->txbNameForDelete->Name = L"txbNameForDelete";
			this->txbNameForDelete->Size = System::Drawing::Size(230, 32);
			this->txbNameForDelete->TabIndex = 8;
			this->txbNameForDelete->TextChanged += gcnew System::EventHandler(this, &frmClientManagement::txbNameForDelete_TextChanged);
			this->txbNameForDelete->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &frmClientManagement::txbNameForDelete_KeyPress);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Tahoma", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::Black;
			this->label7->Location = System::Drawing::Point(3, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(207, 34);
			this->label7->TabIndex = 1;
			this->label7->Text = L"Delete Client:";
			// 
			// btnCloseRoomManagement
			// 
			this->btnCloseRoomManagement->BackColor = System::Drawing::Color::Transparent;
			this->btnCloseRoomManagement->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnCloseRoomManagement.BackgroundImage")));
			this->btnCloseRoomManagement->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->btnCloseRoomManagement->Cursor = System::Windows::Forms::Cursors::Default;
			this->btnCloseRoomManagement->FlatAppearance->BorderSize = 0;
			this->btnCloseRoomManagement->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->btnCloseRoomManagement->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->btnCloseRoomManagement->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnCloseRoomManagement->Location = System::Drawing::Point(1248, 4);
			this->btnCloseRoomManagement->Name = L"btnCloseRoomManagement";
			this->btnCloseRoomManagement->Size = System::Drawing::Size(53, 34);
			this->btnCloseRoomManagement->TabIndex = 2;
			this->btnCloseRoomManagement->UseVisualStyleBackColor = false;
			this->btnCloseRoomManagement->Click += gcnew System::EventHandler(this, &frmClientManagement::btnCloseRoomManagement_Click);
			// 
			// frmClientManagement
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->ClientSize = System::Drawing::Size(1304, 601);
			this->Controls->Add(this->btnCloseRoomManagement);
			this->Controls->Add(this->tbClientManagement);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"frmClientManagement";
			this->Text = L"frmClientManagement";
			this->tbClientManagement->ResumeLayout(false);
			this->tpAddNewClient->ResumeLayout(false);
			this->tpAddNewClient->PerformLayout();
			this->tpShowClient->ResumeLayout(false);
			this->tpShowClient->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->tpDeleteClient->ResumeLayout(false);
			this->tpDeleteClient->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DGVForDelete))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
		
		private:
			void _GetEveryoneBackToStartForAddNew()//ÈÚÏ ÇáÇÖÇÝÉ ÊÑÌÚ ßá Ôí Çáì ÇáÈÏÇíÉ
			{
				txbNationality->Text = ""; 
				txbProfession->Text = "";
				tbxDetailClient->Text = "";
				tbxIDCard->Text = "";
				tbClientsName->Text = "";


			}
			void _PutLableErrorEmpty(Label ^lbl)//ÊÑÌÚ ÇáäÕ ÍÞ ÇáÎØÇÁ ÝÇÖí
			{
				lbl->Text = "";
			}
			void _GetEveryoneBackToStartForDelete()//ÊÑÌÚ ÈÚÏ ÇáÍÐÝ Çáì ÇáÈÏÇíÉ
			{
				DGVForDelete->Rows->Clear();
				txbNameForDelete->Text = "";
			}
		void _AddDataToRow(clsManagementClient^ newClient)//ÇÖÇÝÉ ÓØÑ Çáì ÇáÌÏæá
		{

			dataGridView1->Rows->Add(Convert::ToString( newClient->GetIDCard()), newClient->GetName(), newClient->GetDetail(),newClient->GetNationality(),newClient->GetProfession());

		}
		void _AddAllItemToDataGridView()
		{
			List<clsManagementClient^>^ ListCLient = clsManagementClient::GetClientList();
			//dataGridView1->Rows->Clear();
			for each (clsManagementClient ^ C in ListCLient)
			{
				_AddDataToRow(C);
			}
		}
		private:void _PutError(Label^ l,TextBox^ B)
		{
			if (B->Text->Length == 0)
			{
				l->Text = "Incorrect Entry";
				
			}
			else
			{
				l->Text = "";
			}
		}
		
	private:	bool _CheckedAllInformationForAdd()
		{
		
		_PutError(lblProfessionError, txbProfession);
		_PutError(lblNationalityError, txbNationality);
		_PutError(lblDetailError, tbxDetailClient);
		_PutError(lblError, tbClientsName);
		_PutError(lblIDError, tbxIDCard);
		return (lblProfessionError->Text->Length == 0 && lblNationalityError->Text->Length == 0 && lblDetailError->Text->Length == 0 && lblError->Text->Length == 0 && lblIDError->Text->Length == 0) ? true : false;
		//return Convert::ToBoolean( d);
		
		}
		private:void _AddNew()
		{
			if (_CheckedAllInformationForAdd())
			{
				if (clsManagementClient::IsClientExist(Convert::ToInt16(tbxIDCard->Text)))
				{
					MessageBox::Show("The ID Card is alrady Used to anuother one?", "Wrong", MessageBoxButtons::OK,MessageBoxIcon::Error);
					lblIDError->Text = "Id Card Is already used,Please Choice anuother one?";
				
				}
				
				
				else{
					clsManagementClient^ Cl = clsManagementClient::AddNewClient();
					Cl->SetDetail(tbxDetailClient->Text);
					Cl->SetIDCard(Convert::ToInt16( tbxIDCard->Text));
					Cl->SetName(tbClientsName->Text);
					Cl->SetProfession(txbProfession->Text);
					Cl->SetNationality(txbNationality->Text);

					enSaveResults R = Cl->Save();

					_AddDataToRow(Cl);
					if (R == enSaveResults::svSucceeded)
					{
						MessageBox::Show("Add Successfully:-)");
						_GetEveryoneBackToStartForAddNew();
					}
					else
					{
						MessageBox::Show("Add is not Successfully:-(");
					}
				}
			}
		}
			   bool _ConvertDataFromDataGridViewToRoom()
			   {

				   if (DGVForDelete->Rows->Count != 0)
				   {
					   clsManagementClient^ D = clsManagementClient::FindClient(Convert::ToInt16(DGVForDelete->Rows[0]->Cells[0]->Value));
					   if (!D->IsEmpty())
					   {
						   D->SetName(DGVForDelete->Rows[0]->Cells[1]->Value->ToString());
						   D->SetDetail(DGVForDelete->Rows[0]->Cells[2]->Value->ToString());
						   D->SetNationality(DGVForDelete->Rows[0]->Cells[3]->Value->ToString());
						   D->SetProfession(DGVForDelete->Rows[0]->Cells[4]->Value->ToString());
						   enSaveResults Save = D->Save();
						   if (Save == enSaveResults::svSucceeded)
						   {
							   return true;
						   }
					   }
					   
					  

				   }
				   return false;
			   }

			  
	private: clsManagementClient^ _DeleteClient()
			   {
		clsManagementClient^ ForDelete=clsManagementClient::FindClient(-1);
		DGVForDelete->Rows->Clear();
				   if (txbNameForDelete->Text->Length != 0)
					   
					   if (clsManagementClient::IsClientExist(Convert::ToInt16(txbNameForDelete->Text)))
					   {

						ForDelete = clsManagementClient::FindClient(Convert::ToInt16(txbNameForDelete->Text));
						   

						   if (!ForDelete->IsEmpty())
						   {


							   DGVForDelete->Rows->Add(ForDelete->GetIDCard(), ForDelete->GetName(), ForDelete->GetDetail(), ForDelete->GetNationality(), ForDelete->GetProfession());
							 


						   }
					   }
				   return ForDelete;
			   }


	private: System::Void tabPage1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void cmbSelectRoom_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void tpShowClient_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
private: System::Void tpAddNewClient_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	
	_AddNew();


}
private: System::Void tbxIDCard_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	if (!Char::IsDigit(e->KeyChar) && !Char::IsControl(e->KeyChar))
	{
		
		e->Handled = true;
		
	}
}
private: System::Void dgvForDelete_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
private: System::Void btnCloseRoomManagement_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void tbClientsName_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	_PutLableErrorEmpty(lblError);
}
private: System::Void tbClientsName_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	//if (!Char::IsLetter(e->KeyChar) && !Char::IsControl(e->KeyChar)&&!e->KeyChar==8)
	if(Char::IsDigit(e->KeyChar)||Char::IsPunctuation(e->KeyChar))
	{
		e->Handled = true;
		

	}
	
	

}
private: System::Void tpShowClient_Click_1(System::Object^ sender, System::EventArgs^ e) {
	
}


private: System::Void txbNameForDelete_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	_DeleteClient();

}
private: System::Void txbNameForDelete_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	if (!Char::IsDigit(e->KeyChar) && !Char::IsControl(e->KeyChar))
	{
		e->Handled = true;

		return;
	}
	
	
}
private: System::Void tbxIDCard_TextChanged(System::Object^ sender, System::EventArgs^ e) {

	_PutLableErrorEmpty(lblIDError);
}
private: System::Void tbxDetailClient_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	if (lblDetailError->Text->Length != 0)
	{
		lblDetailError->Text = "";
	}
}
private: System::Void tbClientManagement_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	dataGridView1->Rows->Clear();
	_AddAllItemToDataGridView();
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	clsManagementClient^ ForDelete = _DeleteClient();
	if(!ForDelete->IsEmpty())
	{
		if (MessageBox::Show("Are you sure,you want to delet this Client?", "Confirm", MessageBoxButtons::OKCancel, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::OK)
		{

			if (ForDelete->Delete())
			{
				MessageBox::Show("Delete Successfully:-)");
				_GetEveryoneBackToStartForDelete();
			}
			else
			{
				MessageBox::Show("Delete is not Successfully:-(");
			}


		}
	}
	else
	{
	MessageBox::Show("Delete is not Successfully:-(");
	}
}
private: System::Void txbNationality_TabIndexChanged(System::Object^ sender, System::EventArgs^ e) {

	
}

private: System::Void txbNationality_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	 _PutLableErrorEmpty(lblNationalityError);
}
private: System::Void txbProfession_TextChanged(System::Object^ sender, System::EventArgs^ e) {

	_PutLableErrorEmpty(lblProfessionError);

}
private: System::Void tbxDetailClient_TextChanged(System::Object^ sender, System::EventArgs^ e) {

	_PutLableErrorEmpty(lblDetailError);
}
private: System::Void tbxIDCard_TextChanged_1(System::Object^ sender, System::EventArgs^ e) {

	_PutLableErrorEmpty(lblIDError);
}
private: System::Void btnUpdateClient_Click(System::Object^ sender, System::EventArgs^ e) {
	if (_ConvertDataFromDataGridViewToRoom())
	{
		MessageBox::Show("Update is Successfully :-)");
		DGVForDelete->Rows->Clear();
		txbNameForDelete->Text = "";
	}
	else
	{
		MessageBox::Show("Update is not Successfully :-(");
	}



}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {


}
private: System::Void textBox1_Click(System::Object^ sender, System::EventArgs^ e) {

	//MessageBox::Show("Update is not Successfully :-(", "Confirm", MessageBoxButtons::YesNoCancel,MessageBoxIcon::Warning,MessageBoxDefaultButton::Button3,MessageBoxOptions::ServiceNotification);
}
};
}
