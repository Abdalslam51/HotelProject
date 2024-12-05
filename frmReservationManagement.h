#pragma once
#include"clsManagementReservation.h"	
#include"clsManagementClient.h"
#include"clsRoom.h"
namespace HotelProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for frmReservationManagement1
	/// </summary>
	public ref class frmReservationManagement : public System::Windows::Forms::Form
	{
	public:
		frmReservationManagement(void)
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
		~frmReservationManagement()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TabControl^ tbClientManagement;
	private: System::Windows::Forms::TabPage^ tpAddNewReseravtion;
	protected:

	private: System::Windows::Forms::Button^ button1;




	private: System::Windows::Forms::Label^ label3;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ tbClientsID;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TabPage^ tpShowReservation;

	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::TabPage^ tpDeleteReservation;
	private: System::Windows::Forms::Button^ btnDelete;







	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ txbDelete;

	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::DateTimePicker^ dtpIN;

	private: System::Windows::Forms::DateTimePicker^ dtpOut;


	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::RadioButton^ rbSingle;
	private: System::Windows::Forms::RadioButton^ rbDepartment;


	private: System::Windows::Forms::RadioButton^ rbDouble;







	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::ComboBox^ cmbSelectRoom;
	private: System::Windows::Forms::Button^ btnCloseReservationManagement;
	private: System::Windows::Forms::DataGridView^ dgvForDelete;







	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ txbIDReservation;
	private: System::Windows::Forms::Label^ lblIDReservation;

	private: System::Windows::Forms::Label^ lblErrorIDClient;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn6;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ cID;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ CName;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ CIDNumber;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ C_Contact_Info;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ CArrivalDate;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ CExitDate;




















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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(frmReservationManagement::typeid));
			this->tbClientManagement = (gcnew System::Windows::Forms::TabControl());
			this->tpAddNewReseravtion = (gcnew System::Windows::Forms::TabPage());
			this->lblIDReservation = (gcnew System::Windows::Forms::Label());
			this->lblErrorIDClient = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->txbIDReservation = (gcnew System::Windows::Forms::TextBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->rbSingle = (gcnew System::Windows::Forms::RadioButton());
			this->rbDepartment = (gcnew System::Windows::Forms::RadioButton());
			this->rbDouble = (gcnew System::Windows::Forms::RadioButton());
			this->dtpOut = (gcnew System::Windows::Forms::DateTimePicker());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->dtpIN = (gcnew System::Windows::Forms::DateTimePicker());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->cmbSelectRoom = (gcnew System::Windows::Forms::ComboBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->tbClientsID = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tpShowReservation = (gcnew System::Windows::Forms::TabPage());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->cID = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->CName = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->CIDNumber = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->C_Contact_Info = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->CArrivalDate = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->CExitDate = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->tpDeleteReservation = (gcnew System::Windows::Forms::TabPage());
			this->dgvForDelete = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridViewTextBoxColumn1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->btnDelete = (gcnew System::Windows::Forms::Button());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->txbDelete = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->btnCloseReservationManagement = (gcnew System::Windows::Forms::Button());
			this->tbClientManagement->SuspendLayout();
			this->tpAddNewReseravtion->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->tpShowReservation->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->tpDeleteReservation->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvForDelete))->BeginInit();
			this->SuspendLayout();
			// 
			// tbClientManagement
			// 
			this->tbClientManagement->Alignment = System::Windows::Forms::TabAlignment::Bottom;
			this->tbClientManagement->Controls->Add(this->tpAddNewReseravtion);
			this->tbClientManagement->Controls->Add(this->tpShowReservation);
			this->tbClientManagement->Controls->Add(this->tpDeleteReservation);
			this->tbClientManagement->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbClientManagement->Location = System::Drawing::Point(12, 42);
			this->tbClientManagement->Name = L"tbClientManagement";
			this->tbClientManagement->SelectedIndex = 0;
			this->tbClientManagement->Size = System::Drawing::Size(1143, 437);
			this->tbClientManagement->TabIndex = 2;
			this->tbClientManagement->SelectedIndexChanged += gcnew System::EventHandler(this, &frmReservationManagement::tbClientManagement_SelectedIndexChanged);
			// 
			// tpAddNewReseravtion
			// 
			this->tpAddNewReseravtion->BackColor = System::Drawing::Color::Silver;
			this->tpAddNewReseravtion->Controls->Add(this->lblIDReservation);
			this->tpAddNewReseravtion->Controls->Add(this->lblErrorIDClient);
			this->tpAddNewReseravtion->Controls->Add(this->label4);
			this->tpAddNewReseravtion->Controls->Add(this->txbIDReservation);
			this->tpAddNewReseravtion->Controls->Add(this->groupBox2);
			this->tpAddNewReseravtion->Controls->Add(this->dtpOut);
			this->tpAddNewReseravtion->Controls->Add(this->label9);
			this->tpAddNewReseravtion->Controls->Add(this->dtpIN);
			this->tpAddNewReseravtion->Controls->Add(this->button1);
			this->tpAddNewReseravtion->Controls->Add(this->label5);
			this->tpAddNewReseravtion->Controls->Add(this->cmbSelectRoom);
			this->tpAddNewReseravtion->Controls->Add(this->label3);
			this->tpAddNewReseravtion->Controls->Add(this->label2);
			this->tpAddNewReseravtion->Controls->Add(this->tbClientsID);
			this->tpAddNewReseravtion->Controls->Add(this->label1);
			this->tpAddNewReseravtion->Location = System::Drawing::Point(4, 4);
			this->tpAddNewReseravtion->Name = L"tpAddNewReseravtion";
			this->tpAddNewReseravtion->Padding = System::Windows::Forms::Padding(3);
			this->tpAddNewReseravtion->Size = System::Drawing::Size(1135, 400);
			this->tpAddNewReseravtion->TabIndex = 0;
			this->tpAddNewReseravtion->Text = L"Add New Reservaion";
			this->tpAddNewReseravtion->Click += gcnew System::EventHandler(this, &frmReservationManagement::tpAddNewReseravtion_Click);
			// 
			// lblIDReservation
			// 
			this->lblIDReservation->AutoSize = true;
			this->lblIDReservation->Font = (gcnew System::Drawing::Font(L"Tahoma", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblIDReservation->ForeColor = System::Drawing::Color::Red;
			this->lblIDReservation->Location = System::Drawing::Point(252, 309);
			this->lblIDReservation->Name = L"lblIDReservation";
			this->lblIDReservation->Size = System::Drawing::Size(0, 18);
			this->lblIDReservation->TabIndex = 21;
			// 
			// lblErrorIDClient
			// 
			this->lblErrorIDClient->AutoSize = true;
			this->lblErrorIDClient->Font = (gcnew System::Drawing::Font(L"Tahoma", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblErrorIDClient->ForeColor = System::Drawing::Color::Red;
			this->lblErrorIDClient->Location = System::Drawing::Point(265, 119);
			this->lblErrorIDClient->Name = L"lblErrorIDClient";
			this->lblErrorIDClient->Size = System::Drawing::Size(0, 18);
			this->lblErrorIDClient->TabIndex = 20;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Tahoma", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::Black;
			this->label4->Location = System::Drawing::Point(14, 270);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(236, 34);
			this->label4->TabIndex = 19;
			this->label4->Text = L"ID Reservation:";
			// 
			// txbIDReservation
			// 
			this->txbIDReservation->Location = System::Drawing::Point(255, 274);
			this->txbIDReservation->MaxLength = 5;
			this->txbIDReservation->Name = L"txbIDReservation";
			this->txbIDReservation->Size = System::Drawing::Size(230, 32);
			this->txbIDReservation->TabIndex = 18;
			this->txbIDReservation->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &frmReservationManagement::txbIDReservation_KeyPress);
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->rbSingle);
			this->groupBox2->Controls->Add(this->rbDepartment);
			this->groupBox2->Controls->Add(this->rbDouble);
			this->groupBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox2->Location = System::Drawing::Point(790, 188);
			this->groupBox2->Margin = System::Windows::Forms::Padding(4);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Padding = System::Windows::Forms::Padding(4);
			this->groupBox2->Size = System::Drawing::Size(233, 116);
			this->groupBox2->TabIndex = 11;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Room Type";
			// 
			// rbSingle
			// 
			this->rbSingle->AutoSize = true;
			this->rbSingle->Checked = true;
			this->rbSingle->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->rbSingle->Location = System::Drawing::Point(8, 32);
			this->rbSingle->Margin = System::Windows::Forms::Padding(4);
			this->rbSingle->Name = L"rbSingle";
			this->rbSingle->Size = System::Drawing::Size(75, 22);
			this->rbSingle->TabIndex = 0;
			this->rbSingle->TabStop = true;
			this->rbSingle->Tag = L"1";
			this->rbSingle->Text = L"Single";
			this->rbSingle->UseVisualStyleBackColor = true;
			// 
			// rbDepartment
			// 
			this->rbDepartment->AutoSize = true;
			this->rbDepartment->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->rbDepartment->Location = System::Drawing::Point(7, 75);
			this->rbDepartment->Margin = System::Windows::Forms::Padding(4);
			this->rbDepartment->Name = L"rbDepartment";
			this->rbDepartment->Size = System::Drawing::Size(116, 22);
			this->rbDepartment->TabIndex = 2;
			this->rbDepartment->Tag = L"3";
			this->rbDepartment->Text = L"Department";
			this->rbDepartment->UseVisualStyleBackColor = true;
			// 
			// rbDouble
			// 
			this->rbDouble->AutoSize = true;
			this->rbDouble->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->rbDouble->Location = System::Drawing::Point(136, 32);
			this->rbDouble->Margin = System::Windows::Forms::Padding(4);
			this->rbDouble->Name = L"rbDouble";
			this->rbDouble->Size = System::Drawing::Size(82, 22);
			this->rbDouble->TabIndex = 1;
			this->rbDouble->Tag = L"2";
			this->rbDouble->Text = L"Double";
			this->rbDouble->UseVisualStyleBackColor = true;
			// 
			// dtpOut
			// 
			this->dtpOut->Location = System::Drawing::Point(255, 202);
			this->dtpOut->Name = L"dtpOut";
			this->dtpOut->Size = System::Drawing::Size(250, 32);
			this->dtpOut->TabIndex = 17;
			this->dtpOut->ValueChanged += gcnew System::EventHandler(this, &frmReservationManagement::dateTimePicker1_ValueChanged);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Tahoma", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::Color::Black;
			this->label9->Location = System::Drawing::Point(14, 200);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(72, 34);
			this->label9->TabIndex = 16;
			this->label9->Text = L"out:";
			this->label9->Click += gcnew System::EventHandler(this, &frmReservationManagement::label9_Click);
			// 
			// dtpIN
			// 
			this->dtpIN->Location = System::Drawing::Point(255, 143);
			this->dtpIN->Name = L"dtpIN";
			this->dtpIN->Size = System::Drawing::Size(250, 32);
			this->dtpIN->TabIndex = 15;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(567, 304);
			this->button1->Margin = System::Windows::Forms::Padding(4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(147, 56);
			this->button1->TabIndex = 14;
			this->button1->Text = L"Add";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &frmReservationManagement::button1_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Tahoma", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::Black;
			this->label5->Location = System::Drawing::Point(561, 82);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(153, 34);
			this->label5->TabIndex = 8;
			this->label5->Text = L"Room No:";
			// 
			// cmbSelectRoom
			// 
			this->cmbSelectRoom->FormattingEnabled = true;
			this->cmbSelectRoom->Location = System::Drawing::Point(562, 119);
			this->cmbSelectRoom->Name = L"cmbSelectRoom";
			this->cmbSelectRoom->Size = System::Drawing::Size(152, 32);
			this->cmbSelectRoom->TabIndex = 7;
			this->cmbSelectRoom->DropDown += gcnew System::EventHandler(this, &frmReservationManagement::cmbSelectRoom_DropDown);
			this->cmbSelectRoom->SelectedIndexChanged += gcnew System::EventHandler(this, &frmReservationManagement::cmbSelectRoom_SelectedIndexChanged);
			this->cmbSelectRoom->DropDownClosed += gcnew System::EventHandler(this, &frmReservationManagement::label9_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Tahoma", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::Black;
			this->label3->Location = System::Drawing::Point(14, 141);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(57, 34);
			this->label3->TabIndex = 4;
			this->label3->Text = L"In:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Tahoma", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::Black;
			this->label2->Location = System::Drawing::Point(14, 82);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(150, 34);
			this->label2->TabIndex = 2;
			this->label2->Text = L"ID Client:";
			// 
			// tbClientsID
			// 
			this->tbClientsID->Location = System::Drawing::Point(255, 84);
			this->tbClientsID->MaxLength = 5;
			this->tbClientsID->Name = L"tbClientsID";
			this->tbClientsID->Size = System::Drawing::Size(230, 32);
			this->tbClientsID->TabIndex = 1;
			this->tbClientsID->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &frmReservationManagement::tbClientsID_KeyPress);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Tahoma", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Black;
			this->label1->Location = System::Drawing::Point(12, 5);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(328, 34);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Add New Reservation:";
			// 
			// tpShowReservation
			// 
			this->tpShowReservation->BackColor = System::Drawing::Color::Silver;
			this->tpShowReservation->Controls->Add(this->label6);
			this->tpShowReservation->Controls->Add(this->dataGridView1);
			this->tpShowReservation->Location = System::Drawing::Point(4, 4);
			this->tpShowReservation->Name = L"tpShowReservation";
			this->tpShowReservation->Size = System::Drawing::Size(1135, 400);
			this->tpShowReservation->TabIndex = 2;
			this->tpShowReservation->Text = L"Show Reservation";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Tahoma", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::Black;
			this->label6->Location = System::Drawing::Point(3, 5);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(322, 34);
			this->label6->TabIndex = 2;
			this->label6->Text = L"Show All Reservation:";
			// 
			// dataGridView1
			// 
			this->dataGridView1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGridView1->BackgroundColor = System::Drawing::Color::Gray;
			this->dataGridView1->CellBorderStyle = System::Windows::Forms::DataGridViewCellBorderStyle::Raised;
			this->dataGridView1->ColumnHeadersHeight = 29;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(6) {
				this->cID, this->CName,
					this->CIDNumber, this->C_Contact_Info, this->CArrivalDate, this->CExitDate
			});
			this->dataGridView1->Cursor = System::Windows::Forms::Cursors::Default;
			this->dataGridView1->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->dataGridView1->Location = System::Drawing::Point(0, 90);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 26;
			this->dataGridView1->Size = System::Drawing::Size(1135, 310);
			this->dataGridView1->TabIndex = 1;
			// 
			// cID
			// 
			this->cID->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->cID->HeaderText = L"No";
			this->cID->MaxInputLength = 8;
			this->cID->MinimumWidth = 6;
			this->cID->Name = L"cID";
			// 
			// CName
			// 
			this->CName->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->CName->HeaderText = L"Room Type";
			this->CName->MaxInputLength = 30;
			this->CName->MinimumWidth = 6;
			this->CName->Name = L"CName";
			// 
			// CIDNumber
			// 
			this->CIDNumber->HeaderText = L"Room Number";
			this->CIDNumber->MaxInputLength = 15;
			this->CIDNumber->MinimumWidth = 6;
			this->CIDNumber->Name = L"CIDNumber";
			// 
			// C_Contact_Info
			// 
			this->C_Contact_Info->HeaderText = L"Client ID";
			this->C_Contact_Info->MaxInputLength = 40;
			this->C_Contact_Info->MinimumWidth = 6;
			this->C_Contact_Info->Name = L"C_Contact_Info";
			// 
			// CArrivalDate
			// 
			this->CArrivalDate->HeaderText = L"In";
			this->CArrivalDate->MaxInputLength = 10;
			this->CArrivalDate->MinimumWidth = 8;
			this->CArrivalDate->Name = L"CArrivalDate";
			// 
			// CExitDate
			// 
			this->CExitDate->HeaderText = L"Out";
			this->CExitDate->MaxInputLength = 10;
			this->CExitDate->MinimumWidth = 6;
			this->CExitDate->Name = L"CExitDate";
			// 
			// tpDeleteReservation
			// 
			this->tpDeleteReservation->BackColor = System::Drawing::Color::Silver;
			this->tpDeleteReservation->Controls->Add(this->dgvForDelete);
			this->tpDeleteReservation->Controls->Add(this->btnDelete);
			this->tpDeleteReservation->Controls->Add(this->label8);
			this->tpDeleteReservation->Controls->Add(this->txbDelete);
			this->tpDeleteReservation->Controls->Add(this->label7);
			this->tpDeleteReservation->Location = System::Drawing::Point(4, 4);
			this->tpDeleteReservation->Name = L"tpDeleteReservation";
			this->tpDeleteReservation->Size = System::Drawing::Size(1135, 400);
			this->tpDeleteReservation->TabIndex = 3;
			this->tpDeleteReservation->Text = L"Delete Reservation";
			// 
			// dgvForDelete
			// 
			this->dgvForDelete->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dgvForDelete->BackgroundColor = System::Drawing::Color::Gray;
			this->dgvForDelete->CellBorderStyle = System::Windows::Forms::DataGridViewCellBorderStyle::Raised;
			this->dgvForDelete->ColumnHeadersHeight = 29;
			this->dgvForDelete->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(6) {
				this->dataGridViewTextBoxColumn1,
					this->dataGridViewTextBoxColumn2, this->dataGridViewTextBoxColumn3, this->dataGridViewTextBoxColumn4, this->dataGridViewTextBoxColumn5,
					this->dataGridViewTextBoxColumn6
			});
			this->dgvForDelete->Cursor = System::Windows::Forms::Cursors::Default;
			this->dgvForDelete->Location = System::Drawing::Point(0, 103);
			this->dgvForDelete->Name = L"dgvForDelete";
			this->dgvForDelete->RowHeadersWidth = 51;
			this->dgvForDelete->RowTemplate->Height = 26;
			this->dgvForDelete->Size = System::Drawing::Size(1132, 65);
			this->dgvForDelete->TabIndex = 16;
			// 
			// dataGridViewTextBoxColumn1
			// 
			this->dataGridViewTextBoxColumn1->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->dataGridViewTextBoxColumn1->HeaderText = L"ID Re";
			this->dataGridViewTextBoxColumn1->MaxInputLength = 8;
			this->dataGridViewTextBoxColumn1->MinimumWidth = 10;
			this->dataGridViewTextBoxColumn1->Name = L"dataGridViewTextBoxColumn1";
			// 
			// dataGridViewTextBoxColumn2
			// 
			this->dataGridViewTextBoxColumn2->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->dataGridViewTextBoxColumn2->HeaderText = L"Room Type";
			this->dataGridViewTextBoxColumn2->MaxInputLength = 30;
			this->dataGridViewTextBoxColumn2->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn2->Name = L"dataGridViewTextBoxColumn2";
			// 
			// dataGridViewTextBoxColumn3
			// 
			this->dataGridViewTextBoxColumn3->HeaderText = L"Room Number";
			this->dataGridViewTextBoxColumn3->MaxInputLength = 15;
			this->dataGridViewTextBoxColumn3->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn3->Name = L"dataGridViewTextBoxColumn3";
			// 
			// dataGridViewTextBoxColumn4
			// 
			this->dataGridViewTextBoxColumn4->HeaderText = L"Client ID";
			this->dataGridViewTextBoxColumn4->MaxInputLength = 40;
			this->dataGridViewTextBoxColumn4->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn4->Name = L"dataGridViewTextBoxColumn4";
			// 
			// dataGridViewTextBoxColumn5
			// 
			this->dataGridViewTextBoxColumn5->HeaderText = L"In";
			this->dataGridViewTextBoxColumn5->MaxInputLength = 10;
			this->dataGridViewTextBoxColumn5->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn5->Name = L"dataGridViewTextBoxColumn5";
			// 
			// dataGridViewTextBoxColumn6
			// 
			this->dataGridViewTextBoxColumn6->HeaderText = L"Out";
			this->dataGridViewTextBoxColumn6->MaxInputLength = 10;
			this->dataGridViewTextBoxColumn6->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn6->Name = L"dataGridViewTextBoxColumn6";
			// 
			// btnDelete
			// 
			this->btnDelete->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->btnDelete->FlatAppearance->BorderSize = 0;
			this->btnDelete->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnDelete->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnDelete->ForeColor = System::Drawing::Color::White;
			this->btnDelete->Location = System::Drawing::Point(137, 308);
			this->btnDelete->Margin = System::Windows::Forms::Padding(4);
			this->btnDelete->Name = L"btnDelete";
			this->btnDelete->Size = System::Drawing::Size(159, 65);
			this->btnDelete->TabIndex = 15;
			this->btnDelete->Text = L"Delete";
			this->btnDelete->UseVisualStyleBackColor = false;
			this->btnDelete->Click += gcnew System::EventHandler(this, &frmReservationManagement::btnDelete_Click);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Tahoma", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::Color::Black;
			this->label8->Location = System::Drawing::Point(251, 45);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(236, 34);
			this->label8->TabIndex = 4;
			this->label8->Text = L"ID Reservation:";
			// 
			// txbDelete
			// 
			this->txbDelete->Location = System::Drawing::Point(493, 49);
			this->txbDelete->MaxLength = 8;
			this->txbDelete->Name = L"txbDelete";
			this->txbDelete->Size = System::Drawing::Size(230, 32);
			this->txbDelete->TabIndex = 3;
			this->txbDelete->TextChanged += gcnew System::EventHandler(this, &frmReservationManagement::txbDelete_TextChanged);
			this->txbDelete->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &frmReservationManagement::txbDelete_KeyPress);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Tahoma", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::Black;
			this->label7->Location = System::Drawing::Point(3, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(293, 34);
			this->label7->TabIndex = 1;
			this->label7->Text = L"Delete Reservation:";
			// 
			// btnCloseReservationManagement
			// 
			this->btnCloseReservationManagement->BackColor = System::Drawing::Color::Transparent;
			this->btnCloseReservationManagement->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnCloseReservationManagement.BackgroundImage")));
			this->btnCloseReservationManagement->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->btnCloseReservationManagement->Cursor = System::Windows::Forms::Cursors::Default;
			this->btnCloseReservationManagement->FlatAppearance->BorderSize = 0;
			this->btnCloseReservationManagement->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnCloseReservationManagement->Location = System::Drawing::Point(1102, 2);
			this->btnCloseReservationManagement->Name = L"btnCloseReservationManagement";
			this->btnCloseReservationManagement->Size = System::Drawing::Size(53, 34);
			this->btnCloseReservationManagement->TabIndex = 3;
			this->btnCloseReservationManagement->UseVisualStyleBackColor = false;
			this->btnCloseReservationManagement->Click += gcnew System::EventHandler(this, &frmReservationManagement::btnCloseReservationManagement_Click);
			// 
			// frmReservationManagement
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->ClientSize = System::Drawing::Size(1167, 491);
			this->Controls->Add(this->btnCloseReservationManagement);
			this->Controls->Add(this->tbClientManagement);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"frmReservationManagement";
			this->Text = L"frmReservationManagement";
			this->tbClientManagement->ResumeLayout(false);
			this->tpAddNewReseravtion->ResumeLayout(false);
			this->tpAddNewReseravtion->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->tpShowReservation->ResumeLayout(false);
			this->tpShowReservation->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->tpDeleteReservation->ResumeLayout(false);
			this->tpDeleteReservation->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvForDelete))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion


		private:
			void _ReturnAllAddInfoToStar()
			{
				tbClientsID->Text = "";
				txbIDReservation->Text = "";
				cmbSelectRoom->Text= "";
				rbSingle->Checked = true;
				dtpOut->Value = dtpIN->Value;
			}
			void _MackFreeRoom(short IDRoom)
			{
				clsRoom^ Roo = clsRoom::FindRoom(IDRoom);
				if (!Roo->IsEmpty())
				{

					Roo->SetIsAvailable(true);
					Roo->Save();
				}
			}
			void _MackVailableRoom(short IDRoom)
			{
				clsRoom^ Roo = clsRoom::FindRoom(IDRoom);
				if (!Roo->IsEmpty())
				{

					Roo->SetIsAvailable(false);
					Roo->Save();
				}
			}
			short _TypeRoom()
			{
				if (rbDepartment->Checked)
				{
					return Convert::ToInt16( rbDepartment->Tag);

				}
				else
					if (rbSingle->Checked)
					{
						return Convert::ToInt16(rbSingle->Tag);

					}
					else return Convert::ToInt16(rbDouble->Tag);
			}
			String^ _GetTypeRoom(short ID)
			{
				switch (ID)
				{
				case 1:return "Single";
				case 2:return "Double";
				case 3:return "Department";
				
				}
				
			}
			void _AddDataToRow(clsManagementReservation^ newClient)
			{

				dataGridView1->Rows->Add(Convert::ToString( newClient->GetIdForReservation()) ,_GetTypeRoom( newClient->GetTypeRoom()), newClient->GetIDRoom(), newClient->GetIDClient(), newClient->GetDateIN(), newClient->GetDateOut());

			}
			void _AddAllItemToDataGridView()
			{
				List<clsManagementReservation^>^ ListCLient = clsManagementReservation::GetListOFReservation();
				//dataGridView1->Rows->Clear();
				for each (clsManagementReservation ^ C in ListCLient)
				{
					_AddDataToRow(C);
				}
			}
			void  _PutIDError(TextBox^ tx, Label^ lblError)
			{
				if (txbIDReservation->Text->Length == 0)
				{
					lblError->Text = "Wrong Entry";
				}
				else
				{
					lblError->Text = "";
				}
			}
			bool _CheckAreAllInfoIsAllow()
			{
				_PutIDError(tbClientsID, lblErrorIDClient);
				_PutIDError(txbIDReservation, lblIDReservation);
				DateTime In = dtpIN->Value;

				DateTime Out = dtpOut->Value;

				return (tbClientsID->Text->Length != 0 && txbIDReservation->Text->Length != 0 && cmbSelectRoom->SelectedIndex != -1 && Out > In)?true:false;
			}
			void UpdateRoomStatus(short IDRoom)
			{
				//clsRoom^ R = clsRoom::Find(Convert::ToString( IDRoom));
			}
			private:void _AddNew()
			{
				if (_CheckAreAllInfoIsAllow())
				{
					if (!clsManagementReservation::IsReservationExist(Convert::ToInt16(txbIDReservation->Text))&&clsManagementClient::IsClientExist(Convert::ToInt16(tbClientsID->Text)))
					{
						clsManagementReservation^ Cl = clsManagementReservation::AddNewReservation();
						Cl->SetIDForReservation(Convert::ToInt16(txbIDReservation->Text));

						Cl->SetIDClient(Convert::ToInt16(tbClientsID->Text));
						Cl->SetTypeRoom(_TypeRoom());
						Cl->SetIDRoom(Convert::ToInt16(cmbSelectRoom->Text));
						Cl->SetDateIN(dtpIN->Text);
						Cl->SetDateOut(dtpOut->Text);
						clsRoom::_MakeVailableRoom(Cl->GetIDRoom());
						enSaveResult R = Cl->Save();
						
						_AddDataToRow(Cl);
						if (R == enSaveResult::svSucceede)
						{
							MessageBox::Show("Add Successfully:-)");
							_ReturnAllAddInfoToStar();
						}
						else
						{
							MessageBox::Show("Add is not Successfully:-(");
						}
					}
				}
			}
				   void _LoadListReservationFromFile()
				   {
					   List<clsManagementReservation^>^ LoadList = clsManagementReservation::GetListOFReservation();
					   dataGridView1->Rows->Clear();
					   for each(clsManagementReservation ^ L in LoadList)
					   {
						   _AddDataToRow(L);

					   }
				   }

		private:void LoadNumberFreeRoomToCmb(ComboBox ^cm)
		{
			List<clsRoom^>^ ListRoomFree = clsRoom::GetListOFRoom();
			for each (clsRoom ^ Lis in ListRoomFree)
			{
			
				if (Lis->GetIsAvailable() ==true)
				{
					cm->Items->Add(Lis->GetIDRoom());
				}
			}
			
		}
			   
	private: System::Void tpAddNewReseravtion_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void cmbSelectRoom_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	

}
private: System::Void btnCloseReservationManagement_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void dateTimePicker1_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label9_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	_AddNew();
}
private: System::Void tbClientManagement_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	_LoadListReservationFromFile();
}
private: System::Void btnDelete_Click(System::Object^ sender, System::EventArgs^ e) {
	
	clsManagementReservation^ Res = clsManagementReservation::FindReservation(Convert::ToInt16(txbDelete->Text));
	if (!Res->IsEmptyd())
	{


		if (MessageBox::Show("Are you sure,you want to delet this Client?", "Confirm", MessageBoxButtons::OKCancel, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::OK)
		{
			dgvForDelete->Rows->Clear();
			;
			if (Res->Delete())
			{

				Res->Save();
				
				MessageBox::Show("Delete Successfully:-)");
				_LoadListReservationFromFile();
			}
			else
			{
				MessageBox::Show("Delete is not Successfully:-(");

			}


		}
	}

}
private: System::Void txbDelete_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	if (txbDelete->Text->Length != 0)
	{
		clsManagementReservation^ Res = clsManagementReservation::FindReservation(Convert::ToInt16(txbDelete->Text));
		dgvForDelete->Rows->Clear();
		if (!Res->IsEmptyd())
		{
			
			dgvForDelete->Rows->Add(Convert::ToString(Res->GetIdForReservation()), _GetTypeRoom(Res->GetTypeRoom()), Res->GetIDRoom(), Res->GetIDClient(), Res->GetDateIN(), Res->GetDateOut());


		}
	}


}
private: System::Void txbDelete_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	if (!Char::IsDigit(e->KeyChar) && !Char::IsControl(e->KeyChar))
	{
		e->Handled = true;

		return;
	}
}

private: System::Void cmbSelectRoom_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
	
}
private: System::Void cmbSelectRoom_DropDown(System::Object^ sender, System::EventArgs^ e) {
	cmbSelectRoom->Items->Clear();
	LoadNumberFreeRoomToCmb(cmbSelectRoom);
}
private: System::Void tbClientsID_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	if (!Char::IsDigit(e->KeyChar) && !Char::IsControl(e->KeyChar))
	{
		e->Handled = true;

		return;
	}
	lblErrorIDClient->Text = "";

}
private: System::Void txbIDReservation_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	if (!Char::IsDigit(e->KeyChar) && !Char::IsControl(e->KeyChar))
	{

		e->Handled = true;
	}
}
};
}
