#pragma once

#include"frmManageRooms.h"
#include"clsManagementClient.h"
#include"clsManagementReservation.h"
#include"clsRoom.h"
#include"frmClientManagement.h"
#include"frmReservationManagement.h"
#include"frmSettings.h"
using namespace BussinesLayer;
namespace HotelProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	

	/// <summary>
	/// Summary for frmMain
	/// </summary>
	public ref class frmMain : public System::Windows::Forms::Form
	{
		DateTime d;
	public:
		frmMain(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			_PutAllSizeIn();

			
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~frmMain()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ btnRoomManagement;

	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ panel10;
	private: System::Windows::Forms::Panel^ panel9;
	private: System::Windows::Forms::Panel^ panel8;
	private: System::Windows::Forms::Panel^ panel7;
	private: System::Windows::Forms::Panel^ panel6;
	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::PictureBox^ pbHome;
	private: System::Windows::Forms::Panel^ pnlMovmingBar;





	private: System::Windows::Forms::Panel^ panel11;
	private: System::Windows::Forms::Label^ lblDate;

	private: System::Windows::Forms::Panel^ panel12;
	private: System::Windows::Forms::Button^ btnRoomSize;


	private: System::Windows::Forms::Button^ btnClientSize;

	private: System::Windows::Forms::Panel^ panel13;
	private: System::Windows::Forms::Panel^ panel14;
	private: System::Windows::Forms::Button^ btnReservationSize;










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
	System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(frmMain::typeid));
	this->panel2 = (gcnew System::Windows::Forms::Panel());
	this->panel10 = (gcnew System::Windows::Forms::Panel());
	this->button2 = (gcnew System::Windows::Forms::Button());
	this->panel9 = (gcnew System::Windows::Forms::Panel());
	this->button3 = (gcnew System::Windows::Forms::Button());
	this->panel8 = (gcnew System::Windows::Forms::Panel());
	this->btnRoomManagement = (gcnew System::Windows::Forms::Button());
	this->panel7 = (gcnew System::Windows::Forms::Panel());
	this->button5 = (gcnew System::Windows::Forms::Button());
	this->panel6 = (gcnew System::Windows::Forms::Panel());
	this->button1 = (gcnew System::Windows::Forms::Button());
	this->panel5 = (gcnew System::Windows::Forms::Panel());
	this->pnlMovmingBar = (gcnew System::Windows::Forms::Panel());
	this->panel1 = (gcnew System::Windows::Forms::Panel());
	this->label2 = (gcnew System::Windows::Forms::Label());
	this->pbHome = (gcnew System::Windows::Forms::PictureBox());
	this->panel3 = (gcnew System::Windows::Forms::Panel());
	this->label1 = (gcnew System::Windows::Forms::Label());
	this->panel4 = (gcnew System::Windows::Forms::Panel());
	this->lblDate = (gcnew System::Windows::Forms::Label());
	this->panel11 = (gcnew System::Windows::Forms::Panel());
	this->panel14 = (gcnew System::Windows::Forms::Panel());
	this->btnReservationSize = (gcnew System::Windows::Forms::Button());
	this->panel13 = (gcnew System::Windows::Forms::Panel());
	this->btnClientSize = (gcnew System::Windows::Forms::Button());
	this->panel12 = (gcnew System::Windows::Forms::Panel());
	this->btnRoomSize = (gcnew System::Windows::Forms::Button());
	this->panel2->SuspendLayout();
	this->panel10->SuspendLayout();
	this->panel9->SuspendLayout();
	this->panel8->SuspendLayout();
	this->panel7->SuspendLayout();
	this->panel6->SuspendLayout();
	this->panel5->SuspendLayout();
	this->panel1->SuspendLayout();
	(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbHome))->BeginInit();
	this->panel3->SuspendLayout();
	this->panel4->SuspendLayout();
	this->panel11->SuspendLayout();
	this->panel14->SuspendLayout();
	this->panel13->SuspendLayout();
	this->panel12->SuspendLayout();
	this->SuspendLayout();
	// 
	// panel2
	// 
	this->panel2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
		static_cast<System::Int32>(static_cast<System::Byte>(64)));
	this->panel2->Controls->Add(this->panel10);
	this->panel2->Controls->Add(this->panel9);
	this->panel2->Controls->Add(this->panel8);
	this->panel2->Controls->Add(this->panel7);
	this->panel2->Controls->Add(this->panel6);
	this->panel2->Controls->Add(this->panel5);
	this->panel2->Controls->Add(this->panel1);
	this->panel2->Dock = System::Windows::Forms::DockStyle::Left;
	this->panel2->Location = System::Drawing::Point(0, 0);
	this->panel2->Margin = System::Windows::Forms::Padding(4);
	this->panel2->Name = L"panel2";
	this->panel2->Size = System::Drawing::Size(224, 651);
	this->panel2->TabIndex = 1;
	this->panel2->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &frmMain::panel2_Paint);
	// 
	// panel10
	// 
	this->panel10->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
		static_cast<System::Int32>(static_cast<System::Byte>(64)));
	this->panel10->Controls->Add(this->button2);
	this->panel10->Dock = System::Windows::Forms::DockStyle::Top;
	this->panel10->Location = System::Drawing::Point(10, 435);
	this->panel10->Name = L"panel10";
	this->panel10->Size = System::Drawing::Size(214, 53);
	this->panel10->TabIndex = 11;
	// 
	// button2
	// 
	this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
		static_cast<System::Int32>(static_cast<System::Byte>(64)));
	this->button2->Dock = System::Windows::Forms::DockStyle::Fill;
	this->button2->FlatAppearance->BorderSize = 0;
	this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
	this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(0)));
	this->button2->ForeColor = System::Drawing::SystemColors::Control;
	this->button2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button2.Image")));
	this->button2->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
	this->button2->Location = System::Drawing::Point(0, 0);
	this->button2->Margin = System::Windows::Forms::Padding(4);
	this->button2->Name = L"button2";
	this->button2->Size = System::Drawing::Size(214, 53);
	this->button2->TabIndex = 1;
	this->button2->Text = L"About We";
	this->button2->UseVisualStyleBackColor = false;
	this->button2->Click += gcnew System::EventHandler(this, &frmMain::button2_Click);
	// 
	// panel9
	// 
	this->panel9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
		static_cast<System::Int32>(static_cast<System::Byte>(64)));
	this->panel9->Controls->Add(this->button3);
	this->panel9->Dock = System::Windows::Forms::DockStyle::Top;
	this->panel9->Location = System::Drawing::Point(10, 382);
	this->panel9->Name = L"panel9";
	this->panel9->Size = System::Drawing::Size(214, 53);
	this->panel9->TabIndex = 10;
	// 
	// button3
	// 
	this->button3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
		static_cast<System::Int32>(static_cast<System::Byte>(64)));
	this->button3->Dock = System::Windows::Forms::DockStyle::Fill;
	this->button3->FlatAppearance->BorderSize = 0;
	this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
	this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(0)));
	this->button3->ForeColor = System::Drawing::SystemColors::Control;
	this->button3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button3.Image")));
	this->button3->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
	this->button3->Location = System::Drawing::Point(0, 0);
	this->button3->Margin = System::Windows::Forms::Padding(4);
	this->button3->Name = L"button3";
	this->button3->Size = System::Drawing::Size(214, 53);
	this->button3->TabIndex = 2;
	this->button3->Text = L"Reservation";
	this->button3->UseVisualStyleBackColor = false;
	this->button3->Click += gcnew System::EventHandler(this, &frmMain::button3_Click);
	// 
	// panel8
	// 
	this->panel8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
		static_cast<System::Int32>(static_cast<System::Byte>(64)));
	this->panel8->Controls->Add(this->btnRoomManagement);
	this->panel8->Dock = System::Windows::Forms::DockStyle::Top;
	this->panel8->Location = System::Drawing::Point(10, 329);
	this->panel8->Name = L"panel8";
	this->panel8->Size = System::Drawing::Size(214, 53);
	this->panel8->TabIndex = 9;
	// 
	// btnRoomManagement
	// 
	this->btnRoomManagement->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
		static_cast<System::Int32>(static_cast<System::Byte>(64)));
	this->btnRoomManagement->Dock = System::Windows::Forms::DockStyle::Fill;
	this->btnRoomManagement->FlatAppearance->BorderSize = 0;
	this->btnRoomManagement->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
	this->btnRoomManagement->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(0)));
	this->btnRoomManagement->ForeColor = System::Drawing::SystemColors::Control;
	this->btnRoomManagement->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnRoomManagement.Image")));
	this->btnRoomManagement->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
	this->btnRoomManagement->Location = System::Drawing::Point(0, 0);
	this->btnRoomManagement->Margin = System::Windows::Forms::Padding(4);
	this->btnRoomManagement->Name = L"btnRoomManagement";
	this->btnRoomManagement->Size = System::Drawing::Size(214, 53);
	this->btnRoomManagement->TabIndex = 3;
	this->btnRoomManagement->Text = L"Room";
	this->btnRoomManagement->UseVisualStyleBackColor = false;
	this->btnRoomManagement->Click += gcnew System::EventHandler(this, &frmMain::btnRoomManagement_Click);
	// 
	// panel7
	// 
	this->panel7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
		static_cast<System::Int32>(static_cast<System::Byte>(64)));
	this->panel7->Controls->Add(this->button5);
	this->panel7->Dock = System::Windows::Forms::DockStyle::Top;
	this->panel7->Location = System::Drawing::Point(10, 276);
	this->panel7->Name = L"panel7";
	this->panel7->Size = System::Drawing::Size(214, 53);
	this->panel7->TabIndex = 8;
	// 
	// button5
	// 
	this->button5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
		static_cast<System::Int32>(static_cast<System::Byte>(64)));
	this->button5->Dock = System::Windows::Forms::DockStyle::Fill;
	this->button5->FlatAppearance->BorderSize = 0;
	this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
	this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(0)));
	this->button5->ForeColor = System::Drawing::SystemColors::Control;
	this->button5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button5.Image")));
	this->button5->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
	this->button5->Location = System::Drawing::Point(0, 0);
	this->button5->Margin = System::Windows::Forms::Padding(4);
	this->button5->Name = L"button5";
	this->button5->Size = System::Drawing::Size(214, 53);
	this->button5->TabIndex = 4;
	this->button5->Text = L"Client";
	this->button5->UseVisualStyleBackColor = false;
	this->button5->Click += gcnew System::EventHandler(this, &frmMain::button5_Click);
	// 
	// panel6
	// 
	this->panel6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
		static_cast<System::Int32>(static_cast<System::Byte>(64)));
	this->panel6->Controls->Add(this->button1);
	this->panel6->Dock = System::Windows::Forms::DockStyle::Top;
	this->panel6->Location = System::Drawing::Point(10, 223);
	this->panel6->Name = L"panel6";
	this->panel6->Size = System::Drawing::Size(214, 53);
	this->panel6->TabIndex = 7;
	// 
	// button1
	// 
	this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
		static_cast<System::Int32>(static_cast<System::Byte>(64)));
	this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
	this->button1->Dock = System::Windows::Forms::DockStyle::Fill;
	this->button1->FlatAppearance->BorderSize = 0;
	this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
	this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(0)));
	this->button1->ForeColor = System::Drawing::Color::White;
	this->button1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.Image")));
	this->button1->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
	this->button1->Location = System::Drawing::Point(0, 0);
	this->button1->Margin = System::Windows::Forms::Padding(4);
	this->button1->Name = L"button1";
	this->button1->RightToLeft = System::Windows::Forms::RightToLeft::No;
	this->button1->Size = System::Drawing::Size(214, 53);
	this->button1->TabIndex = 0;
	this->button1->Text = L"Dashboard";
	this->button1->UseVisualStyleBackColor = false;
	this->button1->Click += gcnew System::EventHandler(this, &frmMain::button1_Click);
	// 
	// panel5
	// 
	this->panel5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
		static_cast<System::Int32>(static_cast<System::Byte>(64)));
	this->panel5->Controls->Add(this->pnlMovmingBar);
	this->panel5->Dock = System::Windows::Forms::DockStyle::Left;
	this->panel5->Location = System::Drawing::Point(0, 223);
	this->panel5->Name = L"panel5";
	this->panel5->Size = System::Drawing::Size(10, 428);
	this->panel5->TabIndex = 6;
	// 
	// pnlMovmingBar
	// 
	this->pnlMovmingBar->Anchor = System::Windows::Forms::AnchorStyles::None;
	this->pnlMovmingBar->BackColor = System::Drawing::Color::White;
	this->pnlMovmingBar->Location = System::Drawing::Point(0, 0);
	this->pnlMovmingBar->Name = L"pnlMovmingBar";
	this->pnlMovmingBar->Size = System::Drawing::Size(10, 53);
	this->pnlMovmingBar->TabIndex = 12;
	this->pnlMovmingBar->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &frmMain::pnlMovmingBar_Paint);
	// 
	// panel1
	// 
	this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
		static_cast<System::Int32>(static_cast<System::Byte>(64)));
	this->panel1->Controls->Add(this->label2);
	this->panel1->Controls->Add(this->pbHome);
	this->panel1->Dock = System::Windows::Forms::DockStyle::Top;
	this->panel1->Location = System::Drawing::Point(0, 0);
	this->panel1->Name = L"panel1";
	this->panel1->Size = System::Drawing::Size(224, 223);
	this->panel1->TabIndex = 5;
	// 
	// label2
	// 
	this->label2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
		static_cast<System::Int32>(static_cast<System::Byte>(64)));
	this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(0)));
	this->label2->ForeColor = System::Drawing::Color::White;
	this->label2->Location = System::Drawing::Point(8, 138);
	this->label2->Name = L"label2";
	this->label2->Size = System::Drawing::Size(209, 52);
	this->label2->TabIndex = 8;
	this->label2->Text = L"Hotel Management System";
	this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
	// 
	// pbHome
	// 
	this->pbHome->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
		static_cast<System::Int32>(static_cast<System::Byte>(64)));
	this->pbHome->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pbHome.Image")));
	this->pbHome->Location = System::Drawing::Point(43, 28);
	this->pbHome->Name = L"pbHome";
	this->pbHome->Size = System::Drawing::Size(141, 107);
	this->pbHome->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
	this->pbHome->TabIndex = 7;
	this->pbHome->TabStop = false;
	// 
	// panel3
	// 
	this->panel3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
		static_cast<System::Int32>(static_cast<System::Byte>(64)));
	this->panel3->Controls->Add(this->label1);
	this->panel3->Dock = System::Windows::Forms::DockStyle::Top;
	this->panel3->Location = System::Drawing::Point(224, 120);
	this->panel3->Margin = System::Windows::Forms::Padding(4);
	this->panel3->Name = L"panel3";
	this->panel3->Size = System::Drawing::Size(949, 103);
	this->panel3->TabIndex = 1;
	// 
	// label1
	// 
	this->label1->AutoSize = true;
	this->label1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
		static_cast<System::Int32>(static_cast<System::Byte>(64)));
	this->label1->Font = (gcnew System::Drawing::Font(L"Tahoma", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(0)));
	this->label1->ForeColor = System::Drawing::SystemColors::Control;
	this->label1->Location = System::Drawing::Point(7, 42);
	this->label1->Name = L"label1";
	this->label1->Size = System::Drawing::Size(387, 28);
	this->label1->TabIndex = 0;
	this->label1->Text = L"Welcome: Abdalslam&&Mohamed";
	// 
	// panel4
	// 
	this->panel4->BackColor = System::Drawing::Color::Silver;
	this->panel4->Controls->Add(this->lblDate);
	this->panel4->Dock = System::Windows::Forms::DockStyle::Top;
	this->panel4->Location = System::Drawing::Point(224, 0);
	this->panel4->Margin = System::Windows::Forms::Padding(4);
	this->panel4->Name = L"panel4";
	this->panel4->Size = System::Drawing::Size(949, 120);
	this->panel4->TabIndex = 1;
	// 
	// lblDate
	// 
	this->lblDate->AutoSize = true;
	this->lblDate->BackColor = System::Drawing::Color::Transparent;
	this->lblDate->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(0)));
	this->lblDate->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
		static_cast<System::Int32>(static_cast<System::Byte>(64)));
	this->lblDate->Location = System::Drawing::Point(3, 87);
	this->lblDate->Name = L"lblDate";
	this->lblDate->Size = System::Drawing::Size(0, 29);
	this->lblDate->TabIndex = 0;
	// 
	// panel11
	// 
	this->panel11->BackColor = System::Drawing::Color::Silver;
	this->panel11->Controls->Add(this->panel14);
	this->panel11->Controls->Add(this->panel13);
	this->panel11->Controls->Add(this->panel12);
	this->panel11->Dock = System::Windows::Forms::DockStyle::Fill;
	this->panel11->Location = System::Drawing::Point(224, 223);
	this->panel11->Name = L"panel11";
	this->panel11->Size = System::Drawing::Size(949, 428);
	this->panel11->TabIndex = 2;
	this->panel11->DoubleClick += gcnew System::EventHandler(this, &frmMain::btnRoomManagement_Click);
	// 
	// panel14
	// 
	this->panel14->Controls->Add(this->btnReservationSize);
	this->panel14->Location = System::Drawing::Point(245, 273);
	this->panel14->Name = L"panel14";
	this->panel14->Size = System::Drawing::Size(318, 92);
	this->panel14->TabIndex = 14;
	// 
	// btnReservationSize
	// 
	this->btnReservationSize->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
		static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
	this->btnReservationSize->Dock = System::Windows::Forms::DockStyle::Fill;
	this->btnReservationSize->FlatAppearance->BorderSize = 0;
	this->btnReservationSize->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
	this->btnReservationSize->Font = (gcnew System::Drawing::Font(L"Tahoma", 11, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(0)));
	this->btnReservationSize->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnReservationSize.Image")));
	this->btnReservationSize->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
	this->btnReservationSize->Location = System::Drawing::Point(0, 0);
	this->btnReservationSize->Name = L"btnReservationSize";
	this->btnReservationSize->RightToLeft = System::Windows::Forms::RightToLeft::No;
	this->btnReservationSize->Size = System::Drawing::Size(318, 92);
	this->btnReservationSize->TabIndex = 0;
	this->btnReservationSize->Text = L"Reservation(s)";
	this->btnReservationSize->UseVisualStyleBackColor = false;
	this->btnReservationSize->Click += gcnew System::EventHandler(this, &frmMain::btnReservationSize_Click);
	// 
	// panel13
	// 
	this->panel13->Controls->Add(this->btnClientSize);
	this->panel13->Location = System::Drawing::Point(532, 53);
	this->panel13->Name = L"panel13";
	this->panel13->Size = System::Drawing::Size(237, 67);
	this->panel13->TabIndex = 13;
	// 
	// btnClientSize
	// 
	this->btnClientSize->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
		static_cast<System::Int32>(static_cast<System::Byte>(64)));
	this->btnClientSize->Dock = System::Windows::Forms::DockStyle::Fill;
	this->btnClientSize->FlatAppearance->BorderSize = 0;
	this->btnClientSize->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
	this->btnClientSize->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(0)));
	this->btnClientSize->ForeColor = System::Drawing::Color::White;
	this->btnClientSize->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnClientSize.Image")));
	this->btnClientSize->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
	this->btnClientSize->Location = System::Drawing::Point(0, 0);
	this->btnClientSize->Margin = System::Windows::Forms::Padding(4);
	this->btnClientSize->Name = L"btnClientSize";
	this->btnClientSize->Size = System::Drawing::Size(237, 67);
	this->btnClientSize->TabIndex = 12;
	this->btnClientSize->Text = L"Client(s) ";
	this->btnClientSize->UseVisualStyleBackColor = false;
	this->btnClientSize->Click += gcnew System::EventHandler(this, &frmMain::btnClientSize_Click);
	// 
	// panel12
	// 
	this->panel12->Controls->Add(this->btnRoomSize);
	this->panel12->Location = System::Drawing::Point(43, 53);
	this->panel12->Name = L"panel12";
	this->panel12->Size = System::Drawing::Size(237, 67);
	this->panel12->TabIndex = 1;
	// 
	// btnRoomSize
	// 
	this->btnRoomSize->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
		static_cast<System::Int32>(static_cast<System::Byte>(64)));
	this->btnRoomSize->Dock = System::Windows::Forms::DockStyle::Fill;
	this->btnRoomSize->FlatAppearance->BorderSize = 0;
	this->btnRoomSize->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
	this->btnRoomSize->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(0)));
	this->btnRoomSize->ForeColor = System::Drawing::Color::White;
	this->btnRoomSize->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnRoomSize.Image")));
	this->btnRoomSize->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
	this->btnRoomSize->Location = System::Drawing::Point(0, 0);
	this->btnRoomSize->Margin = System::Windows::Forms::Padding(4);
	this->btnRoomSize->Name = L"btnRoomSize";
	this->btnRoomSize->Size = System::Drawing::Size(237, 67);
	this->btnRoomSize->TabIndex = 11;
	this->btnRoomSize->Text = L"Room(s) ";
	this->btnRoomSize->UseVisualStyleBackColor = false;
	this->btnRoomSize->Click += gcnew System::EventHandler(this, &frmMain::btnRoomSize_Click);
	// 
	// frmMain
	// 
	this->AutoScaleDimensions = System::Drawing::SizeF(7, 16);
	this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
	this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
		static_cast<System::Int32>(static_cast<System::Byte>(192)));
	this->ClientSize = System::Drawing::Size(1173, 651);
	this->Controls->Add(this->panel11);
	this->Controls->Add(this->panel3);
	this->Controls->Add(this->panel4);
	this->Controls->Add(this->panel2);
	this->ForeColor = System::Drawing::Color::White;
	this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
	this->Margin = System::Windows::Forms::Padding(4);
	this->Name = L"frmMain";
	this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
	this->Text = L"   ";
	this->Load += gcnew System::EventHandler(this, &frmMain::frmMain_Load);
	this->panel2->ResumeLayout(false);
	this->panel10->ResumeLayout(false);
	this->panel9->ResumeLayout(false);
	this->panel8->ResumeLayout(false);
	this->panel7->ResumeLayout(false);
	this->panel6->ResumeLayout(false);
	this->panel5->ResumeLayout(false);
	this->panel1->ResumeLayout(false);
	(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbHome))->EndInit();
	this->panel3->ResumeLayout(false);
	this->panel3->PerformLayout();
	this->panel4->ResumeLayout(false);
	this->panel4->PerformLayout();
	this->panel11->ResumeLayout(false);
	this->panel14->ResumeLayout(false);
	this->panel13->ResumeLayout(false);
	this->panel12->ResumeLayout(false);
	this->ResumeLayout(false);

}


#pragma endregion

private:
	int _SizeOfClient()
	{
		List<clsManagementClient^>^ ClientList = clsManagementClient::GetClientList();
		return ClientList->Count;
	}
	int _SizeOfRoom()
	{
		List<clsRoom^>^ RoomList = clsRoom::GetRoomList();
		return RoomList->Count;
	}
	int _SizeOfReservation()
	{
		List<clsManagementReservation^>^ ReservationList = clsManagementReservation::GetReservationList();
		return ReservationList->Count;
	}
	void _PutAllSizeIn()
	{
		btnClientSize->Text = "Client(s) " + _SizeOfClient().ToString();
		btnReservationSize->Text = "Reservation(s) " + _SizeOfReservation().ToString();
		btnRoomSize->Text = "Room(s) " + _SizeOfRoom().ToString();
	}
	void _CheakFormIsVisible(Form^ Frm)
		{
			if (Frm->Visible==true)
			{
				Frm->BringToFront();
				
				//Frm->Show();
				
			}
			else
			{
				Frm->Show();
			}
		}


private: void MovingPnlM(Panel ^P)
			   {


				   pnlMovmingBar->Location = Point(P->Location.X - 18 + pnlMovmingBar->Width, P->Location.Y +40- 223);
			   }


private: System::Void btnRoomManagement_Click(System::Object^ sender, System::EventArgs^ e) {

		MovingPnlM(panel8);
		frmManageRooms ^Frm =gcnew frmManageRooms();
	
		_CheakFormIsVisible(Frm);
		_PutAllSizeIn();
	
	}


private: System::Void frmMain_Load(System::Object^ sender, System::EventArgs^ e) {


	DateTime S=DateTime::Now;
	
    lblDate->Text= S.ToLongDateString()->ToString();

}


private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	MovingPnlM(panel7);
	frmClientManagement ^ClientManagement = gcnew frmClientManagement();
	_CheakFormIsVisible(ClientManagement);
	_PutAllSizeIn();

}


private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	MovingPnlM(panel9);
	
	frmReservationManagement^ RsM = gcnew frmReservationManagement();
	_CheakFormIsVisible(RsM);
	_PutAllSizeIn();
	

}


private: System::Void panel2_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}



private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	MovingPnlM(panel10);
	frmSettings^ Settings = gcnew frmSettings();
	Settings->Show();
}


private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	MovingPnlM(panel6);
}



private: System::Void pnlMovmingBar_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}

private: System::Void btnRoomSize_Click(System::Object^ sender, System::EventArgs^ e) {

	frmManageRooms^ Frm = gcnew frmManageRooms();

	_CheakFormIsVisible(Frm);
	_PutAllSizeIn();
}
private: System::Void btnClientSize_Click(System::Object^ sender, System::EventArgs^ e) {
	frmClientManagement^ ClientManagement = gcnew frmClientManagement();
	_CheakFormIsVisible(ClientManagement);
	_PutAllSizeIn();

}
private: System::Void btnReservationSize_Click(System::Object^ sender, System::EventArgs^ e) {

	frmReservationManagement^ RsM = gcnew frmReservationManagement();
	_CheakFormIsVisible(RsM);
	_PutAllSizeIn();

}
};
}
