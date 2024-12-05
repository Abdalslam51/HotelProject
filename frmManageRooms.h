#pragma once
#include<cliext/vector>

#include"clsRoom.h"

using namespace BussinesLayer;
using namespace cliext;
enum enRoomType {
	single = 0, Double = 1, Department = 2
};
enum enRoomStatus
{
	Reservad, UnderFixing, Free
};
namespace HotelProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	
	/// <summary>
	/// Summary for frmManageRooms
	/// </summary>
	public ref class frmManageRooms : public System::Windows::Forms::Form
	{
	public:
	
		frmManageRooms(void)
		{
			InitializeComponent();

			//
			//TODO: Add the constructor code here
			//
			dataGridView1->Rows->Clear();
			LoadDateFromFileToDataGridView();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~frmManageRooms()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TabControl^ tabControl1;
	protected:
	private: System::Windows::Forms::TabPage^ tpAdd;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ tbtRoomNumber;

	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::RadioButton^ rbSingle;
	private: System::Windows::Forms::RadioButton^ rbDepartment;


	private: System::Windows::Forms::RadioButton^ rbDouble;

	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::RadioButton^ rbReserved;
	private: System::Windows::Forms::RadioButton^ rbFree;


	private: System::Windows::Forms::RadioButton^ rbUnderFixing;

	private: System::Windows::Forms::TabPage^ tpDeleteRoom;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ txbDelete;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TabPage^ tpShowRoom;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::DataGridView^ dataGridView1;



	private: System::Windows::Forms::Label^ label5;

	private: System::Windows::Forms::Button^ btnCloseRoomManagement;

	private: System::Windows::Forms::DataGridView^ dgvForDelete;




	private: System::Windows::Forms::DataGridViewTextBoxColumn^ cNumberRoom;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ cStatusRoom;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ cTypeRoom;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ cIsFree;
	private: System::Windows::Forms::GroupBox^ groupBox3;
	private: System::Windows::Forms::RadioButton^ rbFreeYes;

	private: System::Windows::Forms::RadioButton^ radioButton2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ cID;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ cStatusD;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ cTypeD;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ cIsFreeForDelete;
	private: System::Windows::Forms::Label^ lblErrorRoomNo;










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
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle4 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(frmManageRooms::typeid));
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tpAdd = (gcnew System::Windows::Forms::TabPage());
			this->lblErrorRoomNo = (gcnew System::Windows::Forms::Label());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->rbFreeYes = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tbtRoomNumber = (gcnew System::Windows::Forms::TextBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->rbSingle = (gcnew System::Windows::Forms::RadioButton());
			this->rbDepartment = (gcnew System::Windows::Forms::RadioButton());
			this->rbDouble = (gcnew System::Windows::Forms::RadioButton());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->rbReserved = (gcnew System::Windows::Forms::RadioButton());
			this->rbFree = (gcnew System::Windows::Forms::RadioButton());
			this->rbUnderFixing = (gcnew System::Windows::Forms::RadioButton());
			this->tpDeleteRoom = (gcnew System::Windows::Forms::TabPage());
			this->dgvForDelete = (gcnew System::Windows::Forms::DataGridView());
			this->cID = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->cStatusD = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->cTypeD = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->cIsFreeForDelete = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->txbDelete = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->tpShowRoom = (gcnew System::Windows::Forms::TabPage());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->cNumberRoom = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->cStatusRoom = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->cTypeRoom = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->cIsFree = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->btnCloseRoomManagement = (gcnew System::Windows::Forms::Button());
			this->tabControl1->SuspendLayout();
			this->tpAdd->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->tpDeleteRoom->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvForDelete))->BeginInit();
			this->tpShowRoom->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Alignment = System::Windows::Forms::TabAlignment::Bottom;
			this->tabControl1->Controls->Add(this->tpAdd);
			this->tabControl1->Controls->Add(this->tpDeleteRoom);
			this->tabControl1->Controls->Add(this->tpShowRoom);
			this->tabControl1->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tabControl1->Location = System::Drawing::Point(14, 38);
			this->tabControl1->Margin = System::Windows::Forms::Padding(4);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(1096, 528);
			this->tabControl1->TabIndex = 0;
			this->tabControl1->SelectedIndexChanged += gcnew System::EventHandler(this, &frmManageRooms::tabControl1_SelectedIndexChanged);
			this->tabControl1->Selecting += gcnew System::Windows::Forms::TabControlCancelEventHandler(this, &frmManageRooms::tabControl1_Selecting);
			this->tabControl1->Click += gcnew System::EventHandler(this, &frmManageRooms::tabControl1_Click);
			// 
			// tpAdd
			// 
			this->tpAdd->BackColor = System::Drawing::Color::Silver;
			this->tpAdd->Controls->Add(this->lblErrorRoomNo);
			this->tpAdd->Controls->Add(this->groupBox3);
			this->tpAdd->Controls->Add(this->button1);
			this->tpAdd->Controls->Add(this->label2);
			this->tpAdd->Controls->Add(this->label1);
			this->tpAdd->Controls->Add(this->tbtRoomNumber);
			this->tpAdd->Controls->Add(this->groupBox2);
			this->tpAdd->Controls->Add(this->groupBox1);
			this->tpAdd->Location = System::Drawing::Point(4, 4);
			this->tpAdd->Margin = System::Windows::Forms::Padding(4);
			this->tpAdd->Name = L"tpAdd";
			this->tpAdd->Padding = System::Windows::Forms::Padding(4);
			this->tpAdd->Size = System::Drawing::Size(1088, 491);
			this->tpAdd->TabIndex = 0;
			this->tpAdd->Text = L"Add Room";
			this->tpAdd->Click += gcnew System::EventHandler(this, &frmManageRooms::tpAdd_Click);
			// 
			// lblErrorRoomNo
			// 
			this->lblErrorRoomNo->AutoSize = true;
			this->lblErrorRoomNo->Font = (gcnew System::Drawing::Font(L"Tahoma", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblErrorRoomNo->ForeColor = System::Drawing::Color::Red;
			this->lblErrorRoomNo->Location = System::Drawing::Point(33, 396);
			this->lblErrorRoomNo->Name = L"lblErrorRoomNo";
			this->lblErrorRoomNo->Size = System::Drawing::Size(0, 21);
			this->lblErrorRoomNo->TabIndex = 22;
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->rbFreeYes);
			this->groupBox3->Controls->Add(this->radioButton2);
			this->groupBox3->Location = System::Drawing::Point(506, 281);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(218, 126);
			this->groupBox3->TabIndex = 21;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Is Free\?";
			// 
			// rbFreeYes
			// 
			this->rbFreeYes->AutoSize = true;
			this->rbFreeYes->Checked = true;
			this->rbFreeYes->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->rbFreeYes->Location = System::Drawing::Point(17, 33);
			this->rbFreeYes->Margin = System::Windows::Forms::Padding(4);
			this->rbFreeYes->Name = L"rbFreeYes";
			this->rbFreeYes->Size = System::Drawing::Size(57, 22);
			this->rbFreeYes->TabIndex = 3;
			this->rbFreeYes->TabStop = true;
			this->rbFreeYes->Tag = L"1";
			this->rbFreeYes->Text = L"Yes";
			this->rbFreeYes->UseVisualStyleBackColor = true;
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->radioButton2->Location = System::Drawing::Point(17, 76);
			this->radioButton2->Margin = System::Windows::Forms::Padding(4);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(51, 22);
			this->radioButton2->TabIndex = 4;
			this->radioButton2->Tag = L"2";
			this->radioButton2->Text = L"No";
			this->radioButton2->UseVisualStyleBackColor = true;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(588, 430);
			this->button1->Margin = System::Windows::Forms::Padding(4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(136, 53);
			this->button1->TabIndex = 11;
			this->button1->Text = L"Add";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &frmManageRooms::button1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::Black;
			this->label2->Location = System::Drawing::Point(19, 28);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(180, 38);
			this->label2->TabIndex = 20;
			this->label2->Text = L"Add Room:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(17, 305);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(164, 38);
			this->label1->TabIndex = 17;
			this->label1->Text = L"Room No:";
			// 
			// tbtRoomNumber
			// 
			this->tbtRoomNumber->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbtRoomNumber->Location = System::Drawing::Point(23, 347);
			this->tbtRoomNumber->Margin = System::Windows::Forms::Padding(4);
			this->tbtRoomNumber->MaxLength = 5;
			this->tbtRoomNumber->Name = L"tbtRoomNumber";
			this->tbtRoomNumber->Size = System::Drawing::Size(165, 45);
			this->tbtRoomNumber->TabIndex = 10;
			this->tbtRoomNumber->Click += gcnew System::EventHandler(this, &frmManageRooms::tbtRoomNumber_Click);
			this->tbtRoomNumber->TextChanged += gcnew System::EventHandler(this, &frmManageRooms::tbtRoomNumber_TextChanged);
			this->tbtRoomNumber->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &frmManageRooms::tbtRoomNumber_KeyPress);
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->rbSingle);
			this->groupBox2->Controls->Add(this->rbDepartment);
			this->groupBox2->Controls->Add(this->rbDouble);
			this->groupBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox2->Location = System::Drawing::Point(506, 107);
			this->groupBox2->Margin = System::Windows::Forms::Padding(4);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Padding = System::Windows::Forms::Padding(4);
			this->groupBox2->Size = System::Drawing::Size(288, 163);
			this->groupBox2->TabIndex = 9;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Room Type";
			// 
			// rbSingle
			// 
			this->rbSingle->AutoSize = true;
			this->rbSingle->Checked = true;
			this->rbSingle->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->rbSingle->Location = System::Drawing::Point(7, 32);
			this->rbSingle->Margin = System::Windows::Forms::Padding(4);
			this->rbSingle->Name = L"rbSingle";
			this->rbSingle->Size = System::Drawing::Size(75, 22);
			this->rbSingle->TabIndex = 0;
			this->rbSingle->TabStop = true;
			this->rbSingle->Tag = L"0";
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
			this->rbDepartment->Tag = L"2";
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
			this->rbDouble->Tag = L"1";
			this->rbDouble->Text = L"Double";
			this->rbDouble->UseVisualStyleBackColor = true;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->rbReserved);
			this->groupBox1->Controls->Add(this->rbFree);
			this->groupBox1->Controls->Add(this->rbUnderFixing);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox1->Location = System::Drawing::Point(8, 88);
			this->groupBox1->Margin = System::Windows::Forms::Padding(4);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Padding = System::Windows::Forms::Padding(4);
			this->groupBox1->Size = System::Drawing::Size(306, 182);
			this->groupBox1->TabIndex = 8;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Room Status";
			// 
			// rbReserved
			// 
			this->rbReserved->AutoSize = true;
			this->rbReserved->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->rbReserved->Location = System::Drawing::Point(9, 82);
			this->rbReserved->Margin = System::Windows::Forms::Padding(4);
			this->rbReserved->Name = L"rbReserved";
			this->rbReserved->Size = System::Drawing::Size(100, 22);
			this->rbReserved->TabIndex = 0;
			this->rbReserved->Tag = L"0";
			this->rbReserved->Text = L"Reserved";
			this->rbReserved->UseVisualStyleBackColor = true;
			this->rbReserved->CheckedChanged += gcnew System::EventHandler(this, &frmManageRooms::rbReserved_CheckedChanged);
			// 
			// rbFree
			// 
			this->rbFree->AutoSize = true;
			this->rbFree->Checked = true;
			this->rbFree->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->rbFree->Location = System::Drawing::Point(9, 39);
			this->rbFree->Margin = System::Windows::Forms::Padding(4);
			this->rbFree->Name = L"rbFree";
			this->rbFree->Size = System::Drawing::Size(95, 22);
			this->rbFree->TabIndex = 2;
			this->rbFree->TabStop = true;
			this->rbFree->Tag = L"3";
			this->rbFree->Text = L"Available";
			this->rbFree->UseVisualStyleBackColor = true;
			// 
			// rbUnderFixing
			// 
			this->rbUnderFixing->AutoSize = true;
			this->rbUnderFixing->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->rbUnderFixing->Location = System::Drawing::Point(136, 39);
			this->rbUnderFixing->Margin = System::Windows::Forms::Padding(4);
			this->rbUnderFixing->Name = L"rbUnderFixing";
			this->rbUnderFixing->Size = System::Drawing::Size(123, 22);
			this->rbUnderFixing->TabIndex = 1;
			this->rbUnderFixing->Tag = L"1";
			this->rbUnderFixing->Text = L"Under Fixing";
			this->rbUnderFixing->UseVisualStyleBackColor = true;
			this->rbUnderFixing->CheckedChanged += gcnew System::EventHandler(this, &frmManageRooms::rbUnderFixing_CheckedChanged);
			// 
			// tpDeleteRoom
			// 
			this->tpDeleteRoom->BackColor = System::Drawing::Color::Silver;
			this->tpDeleteRoom->Controls->Add(this->dgvForDelete);
			this->tpDeleteRoom->Controls->Add(this->button2);
			this->tpDeleteRoom->Controls->Add(this->label4);
			this->tpDeleteRoom->Controls->Add(this->txbDelete);
			this->tpDeleteRoom->Controls->Add(this->label3);
			this->tpDeleteRoom->ForeColor = System::Drawing::Color::Black;
			this->tpDeleteRoom->Location = System::Drawing::Point(4, 4);
			this->tpDeleteRoom->Margin = System::Windows::Forms::Padding(4);
			this->tpDeleteRoom->Name = L"tpDeleteRoom";
			this->tpDeleteRoom->Padding = System::Windows::Forms::Padding(4);
			this->tpDeleteRoom->Size = System::Drawing::Size(1088, 491);
			this->tpDeleteRoom->TabIndex = 1;
			this->tpDeleteRoom->Text = L"Delete Room";
			// 
			// dgvForDelete
			// 
			this->dgvForDelete->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvForDelete->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->cID, this->cStatusD,
					this->cTypeD, this->cIsFreeForDelete
			});
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle1->BackColor = System::Drawing::SystemColors::Info;
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle1->ForeColor = System::Drawing::Color::Black;
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->dgvForDelete->DefaultCellStyle = dataGridViewCellStyle1;
			this->dgvForDelete->EditMode = System::Windows::Forms::DataGridViewEditMode::EditProgrammatically;
			this->dgvForDelete->Location = System::Drawing::Point(0, 97);
			this->dgvForDelete->Name = L"dgvForDelete";
			this->dgvForDelete->RowHeadersWidth = 51;
			this->dgvForDelete->RowTemplate->Height = 26;
			this->dgvForDelete->Size = System::Drawing::Size(1088, 67);
			this->dgvForDelete->TabIndex = 16;
			// 
			// cID
			// 
			this->cID->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->cID->HeaderText = L"ID";
			this->cID->MaxInputLength = 9;
			this->cID->MinimumWidth = 10;
			this->cID->Name = L"cID";
			// 
			// cStatusD
			// 
			this->cStatusD->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->cStatusD->HeaderText = L"Status";
			this->cStatusD->MaxInputLength = 15;
			this->cStatusD->MinimumWidth = 6;
			this->cStatusD->Name = L"cStatusD";
			// 
			// cTypeD
			// 
			this->cTypeD->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->cTypeD->HeaderText = L"Type";
			this->cTypeD->MaxInputLength = 15;
			this->cTypeD->MinimumWidth = 6;
			this->cTypeD->Name = L"cTypeD";
			// 
			// cIsFreeForDelete
			// 
			this->cIsFreeForDelete->HeaderText = L"Is Free";
			this->cIsFreeForDelete->MaxInputLength = 5;
			this->cIsFreeForDelete->MinimumWidth = 6;
			this->cIsFreeForDelete->Name = L"cIsFreeForDelete";
			this->cIsFreeForDelete->Width = 125;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button2->FlatAppearance->BorderSize = 0;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::White;
			this->button2->Location = System::Drawing::Point(165, 340);
			this->button2->Margin = System::Windows::Forms::Padding(4);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(144, 64);
			this->button2->TabIndex = 15;
			this->button2->Text = L"Delete ";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &frmManageRooms::button2_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::Black;
			this->label4->Location = System::Drawing::Point(273, 49);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(164, 38);
			this->label4->TabIndex = 14;
			this->label4->Text = L"Room No:";
			// 
			// txbDelete
			// 
			this->txbDelete->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txbDelete->Location = System::Drawing::Point(451, 56);
			this->txbDelete->Margin = System::Windows::Forms::Padding(4);
			this->txbDelete->Name = L"txbDelete";
			this->txbDelete->Size = System::Drawing::Size(165, 34);
			this->txbDelete->TabIndex = 13;
			this->txbDelete->TextChanged += gcnew System::EventHandler(this, &frmManageRooms::textBox2_TextChanged);
			this->txbDelete->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &frmManageRooms::tbtRoomNumber_KeyPress);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(19, 15);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(216, 38);
			this->label3->TabIndex = 12;
			this->label3->Text = L"Delete Room:";
			// 
			// tpShowRoom
			// 
			this->tpShowRoom->BackColor = System::Drawing::Color::Silver;
			this->tpShowRoom->Controls->Add(this->label5);
			this->tpShowRoom->Controls->Add(this->dataGridView1);
			this->tpShowRoom->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tpShowRoom->Location = System::Drawing::Point(4, 4);
			this->tpShowRoom->Name = L"tpShowRoom";
			this->tpShowRoom->Size = System::Drawing::Size(1088, 491);
			this->tpShowRoom->TabIndex = 2;
			this->tpShowRoom->Text = L"Show Room";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::Black;
			this->label5->Location = System::Drawing::Point(4, 0);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(214, 38);
			this->label5->TabIndex = 16;
			this->label5->Text = L"Show Room:";
			this->label5->Click += gcnew System::EventHandler(this, &frmManageRooms::label5_Click);
			// 
			// dataGridView1
			// 
			dataGridViewCellStyle2->BackColor = System::Drawing::Color::White;
			this->dataGridView1->AlternatingRowsDefaultCellStyle = dataGridViewCellStyle2;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->cNumberRoom,
					this->cStatusRoom, this->cTypeRoom, this->cIsFree
			});
			dataGridViewCellStyle3->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle3->BackColor = System::Drawing::Color::White;
			dataGridViewCellStyle3->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle3->ForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle3->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle3->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle3->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->dataGridView1->DefaultCellStyle = dataGridViewCellStyle3;
			this->dataGridView1->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->dataGridView1->Location = System::Drawing::Point(0, 111);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			dataGridViewCellStyle4->BackColor = System::Drawing::Color::White;
			dataGridViewCellStyle4->Font = (gcnew System::Drawing::Font(L"Tahoma", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->dataGridView1->RowsDefaultCellStyle = dataGridViewCellStyle4;
			this->dataGridView1->RowTemplate->DefaultCellStyle->BackColor = System::Drawing::SystemColors::Control;
			this->dataGridView1->RowTemplate->Height = 26;
			this->dataGridView1->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::CellSelect;
			this->dataGridView1->Size = System::Drawing::Size(1088, 380);
			this->dataGridView1->TabIndex = 0;
			// 
			// cNumberRoom
			// 
			this->cNumberRoom->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->cNumberRoom->HeaderText = L"Number";
			this->cNumberRoom->MaxInputLength = 5;
			this->cNumberRoom->MinimumWidth = 6;
			this->cNumberRoom->Name = L"cNumberRoom";
			// 
			// cStatusRoom
			// 
			this->cStatusRoom->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->cStatusRoom->HeaderText = L"Status";
			this->cStatusRoom->MaxInputLength = 10;
			this->cStatusRoom->MinimumWidth = 6;
			this->cStatusRoom->Name = L"cStatusRoom";
			// 
			// cTypeRoom
			// 
			this->cTypeRoom->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->cTypeRoom->HeaderText = L"Type";
			this->cTypeRoom->MaxInputLength = 10;
			this->cTypeRoom->MinimumWidth = 6;
			this->cTypeRoom->Name = L"cTypeRoom";
			// 
			// cIsFree
			// 
			this->cIsFree->HeaderText = L"Is Free";
			this->cIsFree->MaxInputLength = 5;
			this->cIsFree->MinimumWidth = 6;
			this->cIsFree->Name = L"cIsFree";
			this->cIsFree->Width = 125;
			// 
			// btnCloseRoomManagement
			// 
			this->btnCloseRoomManagement->BackColor = System::Drawing::Color::Transparent;
			this->btnCloseRoomManagement->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnCloseRoomManagement.BackgroundImage")));
			this->btnCloseRoomManagement->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->btnCloseRoomManagement->Cursor = System::Windows::Forms::Cursors::Default;
			this->btnCloseRoomManagement->FlatAppearance->BorderSize = 0;
			this->btnCloseRoomManagement->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnCloseRoomManagement->Location = System::Drawing::Point(1065, 1);
			this->btnCloseRoomManagement->Name = L"btnCloseRoomManagement";
			this->btnCloseRoomManagement->Size = System::Drawing::Size(53, 34);
			this->btnCloseRoomManagement->TabIndex = 1;
			this->btnCloseRoomManagement->UseVisualStyleBackColor = false;
			this->btnCloseRoomManagement->Click += gcnew System::EventHandler(this, &frmManageRooms::btnCloseRoomManagement_Click);
			// 
			// frmManageRooms
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->ClientSize = System::Drawing::Size(1123, 579);
			this->Controls->Add(this->btnCloseRoomManagement);
			this->Controls->Add(this->tabControl1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Location = System::Drawing::Point(350, 300);
			this->Margin = System::Windows::Forms::Padding(4);
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"frmManageRooms";
			this->ShowIcon = false;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"frmManageRooms";
			this->Load += gcnew System::EventHandler(this, &frmManageRooms::frmManageRooms_Load);
			this->tabControl1->ResumeLayout(false);
			this->tpAdd->ResumeLayout(false);
			this->tpAdd->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->tpDeleteRoom->ResumeLayout(false);
			this->tpDeleteRoom->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvForDelete))->EndInit();
			this->tpShowRoom->ResumeLayout(false);
			this->tpShowRoom->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
		static String^ FileName = "D:\\Almahdi\\Almahdi\\HotelProject\\HotelProject\\Room.txt";
			
			private: 
				void _GetEveryoneBackToStartForAddNew()
				{
					tbtRoomNumber->Text = "";
					rbSingle->Checked = true;
					rbFree->Checked = true;
					rbFreeYes->Checked = true;

				}

				void _GetEveryoneBackToStartForDelete()
				{
					txbDelete->Text = "";

				}
					
			static clsRoom^ Find(short ID, DataGridView^ DGV)
			{
				List<clsRoom^>^L =clsRoom::GetListOFRoom();
				clsRoom^ find =clsRoom::FindRoom(ID);
				if (!find->IsEmpty())
				{
					DGV->Rows->Clear();
					
					DGV->Rows->Add(find->GetIDRoom(),find->GetRoomStatus(), find->GetTypeRoom(),Convert::ToString(find->GetIsAvailable()));
					return find;
				}
				

				

				return find;


			}

			bool IsFreeRoom()
			{
				return rbFreeYes->Checked ? true : false;
		}
		enRoomStatus CheckRoomStatus()
		{
			if (rbReserved->Checked)
			{
				return enRoomStatus::Reservad;

			}
			else if (rbUnderFixing->Checked)
			{
				return enRoomStatus::UnderFixing;
			}
			else 
			{
				return enRoomStatus::Free;
			}
		}
		enRoomType CheckRoomType()
		{
			if (rbSingle->Checked)
			{
				return enRoomType::single;

			}
			else if (rbDouble->Checked)
			{
				return enRoomType::Double;
			}
			else
			{
				return enRoomType::Department;
			}
		}
		String^ WriteRoomType(enRoomType Type)
		{
			switch (Type)
			{
			case enRoomType::single:
				return "Single";
				break;
			case enRoomType::Double:
				return "Double";
				break;
			case enRoomType::Department:
				return "Department";
				
			}
		}
		String^ WriteRoomStatus(enRoomStatus Status)
		{
			switch (Status)
			{
			case enRoomStatus::Reservad:
				return "Reservad";
				break;
			case enRoomStatus::UnderFixing:
				return "Under Fixing";
				break;
			case enRoomStatus::Free:
				return "Free";
				
			}
		}
		Color ^cl ;

		
	
		void _AddDataToRow(String^ RoN, String^ RoSt, String^ RoTy,Boolean^ ISFree)
		{
			
			dataGridView1->Rows->Add(RoN, RoSt, RoTy,ISFree);
			
		}
		void _AddNew(clsRoom^ D)
		{
			_AddDataToRow(Convert::ToString(D->GetIDRoom()), D->GetRoomStatus(), D->GetTypeRoom(), D->GetIsAvailable());


		}
		void LoadDateFromFileToDataGridView()
		{
			List<clsRoom^>^Rooms =clsRoom::GetListOFRoom();
			dataGridView1->Rows->Clear();
			for each (clsRoom ^ Room in Rooms)
			{
				
				_AddDataToRow(Convert::ToString( Room->GetIDRoom()), Room->GetRoomStatus(), Room->GetTypeRoom(),Convert::ToBoolean(Room->GetIsAvailable()));
				
			}
		}
		void _AddDataToRowToDelete(clsRoom^ R)
		{
			dgvForDelete->Rows->Add(Convert::ToString(R->GetIDRoom()), R->GetRoomStatus(), R->GetTypeRoom(), Convert::ToBoolean(R->GetIsAvailable()));
		}

	private: System::Void frmManageRooms_Load(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void tpAdd_Click(System::Object^ sender, System::EventArgs^ e) {
	
	
	
	
}
private: System::Void rbUnderFixing_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	
	if (tbtRoomNumber->Text->ToString()->Length == 0)
	{
		MessageBox::Show("Number of Room is Not found","Coutaiz");
		tbtRoomNumber->BackColor = Color::Red;
		}
	else {
		if (!clsRoom::IsRoomExist(Convert::ToInt16(tbtRoomNumber->Text)))
		{
			clsRoom^ D = clsRoom::FindRoom(Convert::ToInt16(tbtRoomNumber->Text));
			D = D->AddNewRoom();
			D->SetIDRoom(Convert::ToInt16(tbtRoomNumber->Text));

			D->SetRoomStatus(WriteRoomStatus(CheckRoomStatus()));
			D->SetTypeRoom(WriteRoomType(CheckRoomType()));
			D->SetIsAvailable(IsFreeRoom());


		

			enResulat R = D->Save();
			if (R == enResulat::eSuccessfully)
			{

				MessageBox::Show("Save is Successfully");
				_AddNew(D);
				_GetEveryoneBackToStartForAddNew();

			}
			else
			{
				MessageBox::Show("Save is not  Successfully");
			}
		}
		else
		{
			lblErrorRoomNo->Text = "Room Number is already exist ,Choice anuother one?";

		}
	}
}
private: System::Void tbtRoomNumber_TextChanged(System::Object^ sender, System::EventArgs^ e) {

	tbtRoomNumber->ForeColor = Color::Black;
	if (lblErrorRoomNo->Text->Length != 0)
	{
		lblErrorRoomNo->Text = "";
		}

}
private: System::Void tbtRoomNumber_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	if (!Char::IsDigit(e->KeyChar)&&!Char::IsControl(e->KeyChar))
	{
		e->Handled = true;

		//MessageBox::Show("validate enter Agine?","Waring");
	
	}
	
}
private: System::Void tabControl1_Click(System::Object^ sender, System::EventArgs^ e) {


}
private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {

	if (txbDelete->Text->Length != 0)
	{
		dataGridView1->DataSource=nullptr;
		clsRoom ^ D=clsRoom::FindRoom(Convert::ToInt16(txbDelete->Text));
		dgvForDelete->Rows->Clear();
		if(!D->IsEmpty())
		_AddDataToRowToDelete(D);


	}

}
private: System::Void btnCloseRoomManagement_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
	   
private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	; dgvForDelete->Rows->Clear();
	if (txbDelete->Text->Length != 0)
	{
		if (txbDelete->Text->Length != 0)
		{
			dataGridView1->DataSource = nullptr;
			clsRoom^ D = clsRoom::FindRoom(Convert::ToInt16(txbDelete->Text));
			dgvForDelete->Rows->Clear();
			if (!D->IsEmpty())
				_AddDataToRowToDelete(D);


		}
	
	
	}
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	
	if (dgvForDelete->Rows->Count != 0)
	{
		clsRoom^ Delete = clsRoom::FindRoom(Convert::ToInt16(txbDelete->Text));
		if (!Delete->IsEmpty())
		{
			
			if (MessageBox::Show("Are you sure,you want to delet this Room?", "Confirm", MessageBoxButtons::OKCancel, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::OK)
			{

				if (Delete->Delete())
				{
					Delete->Save();
					MessageBox::Show("Deleted Successfully:-)");
					LoadDateFromFileToDataGridView();
					_GetEveryoneBackToStartForDelete();
				}
				else
				{
					MessageBox::Show("Deleted is not Successfully:-(");
				}
				
			}

			else
			{
				MessageBox::Show("Deleted is not Successfully:-(");

			}

		}

	}
	dgvForDelete->Rows->Clear();
	txbDelete->Text = "";

}

private: System::Void tabControl1_Selecting(System::Object^ sender, System::Windows::Forms::TabControlCancelEventArgs^ e) {
	if (e->TabPage == tpShowRoom)
	{
		
	}
}
private: System::Void rbReserved_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void tbSearch_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	dataGridView1->Rows->Clear();
	if (txbDelete->Text->ToString()->Length != 0)
	{
		clsRoom^ D = clsRoom::FindRoom(Convert::ToInt16(txbDelete->Text));
		if (!D->IsEmpty())
			_AddNew(D);

	}
	else if (txbDelete->Text->ToString()->Length == 0)
	{
		if (dataGridView1->Rows->Count == 0)
		{
			LoadDateFromFileToDataGridView();
		}
	}
}
private: System::Void tabControl1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {


	LoadDateFromFileToDataGridView();

}
private: System::Void tbtRoomNumber_Click(System::Object^ sender, System::EventArgs^ e) {

	tbtRoomNumber->SelectAll();

}
};
}
