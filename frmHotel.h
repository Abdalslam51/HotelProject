#pragma once

namespace HotelProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for frmHotel
	/// </summary>
	public ref class frmHotel : public System::Windows::Forms::Form
	{
	public:
		frmHotel(void)
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
		~frmHotel()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^ roomManagementToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ guestsToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ reservationToolStripMenuItem;
	private: System::Windows::Forms::ToolStripSeparator^ toolStripSeparator1;
	private: System::Windows::Forms::ToolStripComboBox^ toolStripComboBox1;

	protected:
	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->roomManagementToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->guestsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->reservationToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripSeparator1 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->toolStripComboBox1 = (gcnew System::Windows::Forms::ToolStripComboBox());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->BackColor = System::Drawing::Color::MediumTurquoise;
			this->menuStrip1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->roomManagementToolStripMenuItem,
					this->guestsToolStripMenuItem, this->reservationToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Padding = System::Windows::Forms::Padding(7, 2, 0, 2);
			this->menuStrip1->Size = System::Drawing::Size(1020, 37);
			this->menuStrip1->TabIndex = 1;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// roomManagementToolStripMenuItem
			// 
			this->roomManagementToolStripMenuItem->Name = L"roomManagementToolStripMenuItem";
			this->roomManagementToolStripMenuItem->Size = System::Drawing::Size(253, 33);
			this->roomManagementToolStripMenuItem->Text = L"Room Management";
			// 
			// guestsToolStripMenuItem
			// 
			this->guestsToolStripMenuItem->Name = L"guestsToolStripMenuItem";
			this->guestsToolStripMenuItem->Size = System::Drawing::Size(108, 33);
			this->guestsToolStripMenuItem->Text = L"Guests";
			// 
			// reservationToolStripMenuItem
			// 
			this->reservationToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->toolStripSeparator1,
					this->toolStripComboBox1
			});
			this->reservationToolStripMenuItem->Name = L"reservationToolStripMenuItem";
			this->reservationToolStripMenuItem->Size = System::Drawing::Size(173, 33);
			this->reservationToolStripMenuItem->Text = L"Reservation ";
			// 
			// toolStripSeparator1
			// 
			this->toolStripSeparator1->Name = L"toolStripSeparator1";
			this->toolStripSeparator1->Size = System::Drawing::Size(221, 6);
			// 
			// toolStripComboBox1
			// 
			this->toolStripComboBox1->Name = L"toolStripComboBox1";
			this->toolStripComboBox1->Size = System::Drawing::Size(121, 28);
			this->toolStripComboBox1->Click += gcnew System::EventHandler(this, &frmHotel::toolStripComboBox1_Click);
			// 
			// frmHotel
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1020, 571);
			this->Controls->Add(this->menuStrip1);
			this->IsMdiContainer = true;
			this->MainMenuStrip = this->menuStrip1;
			this->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->MinimizeBox = false;
			this->Name = L"frmHotel";
			this->ShowIcon = false;
			this->Text = L"Main ";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void toolStripComboBox1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
};
}
