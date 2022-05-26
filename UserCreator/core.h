#pragma once
#include<Windows.h>

namespace UserCreator {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace UserCreator;
	using namespace MySql::Data::MySqlClient;
	//using namespace UserCreator;

	/// <summary>
	/// Summary for core
	/// </summary>
	public ref class core : public System::Windows::Forms::Form
	{
	public:
		core(String^ first_name,String^ last_name,String^ status)
		{
			InitializeComponent();
			this->yourname->Text = first_name+" " +last_name+" ";
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~core()
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
	private: System::Windows::Forms::Timer^ blocade;

	private: System::Windows::Forms::Label^ yourname;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::TextBox^ oldpasswd_L;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ newPassword_1;

	private: System::Windows::Forms::TextBox^ newPassword;



	private: System::ComponentModel::IContainer^ components;


	protected:

	protected:


	protected:

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
			this->components = (gcnew System::ComponentModel::Container());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->newPassword_1 = (gcnew System::Windows::Forms::TextBox());
			this->newPassword = (gcnew System::Windows::Forms::TextBox());
			this->oldpasswd_L = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->blocade = (gcnew System::Windows::Forms::Timer(this->components));
			this->yourname = (gcnew System::Windows::Forms::Label());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->HotTrack = true;
			this->tabControl1->ItemSize = System::Drawing::Size(58, 15);
			this->tabControl1->Location = System::Drawing::Point(1, 2);
			this->tabControl1->Multiline = true;
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(1161, 601);
			this->tabControl1->TabIndex = 0;
			// 
			// tabPage2
			// 
			this->tabPage2->Location = System::Drawing::Point(4, 19);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(1153, 578);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"tabPage2";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// tabPage1
			// 
			this->tabPage1->BackColor = System::Drawing::Color::Black;
			this->tabPage1->Controls->Add(this->groupBox1);
			this->tabPage1->Location = System::Drawing::Point(4, 19);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(1153, 578);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Account Settings";
			// 
			// groupBox1
			// 
			this->groupBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->groupBox1->BackColor = System::Drawing::Color::Crimson;
			this->groupBox1->Controls->Add(this->newPassword_1);
			this->groupBox1->Controls->Add(this->newPassword);
			this->groupBox1->Controls->Add(this->oldpasswd_L);
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->groupBox1->Location = System::Drawing::Point(947, 6);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(200, 210);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Change Password";
			// 
			// newPassword_1
			// 
			this->newPassword_1->BackColor = System::Drawing::Color::Crimson;
			this->newPassword_1->Font = (gcnew System::Drawing::Font(L"Alef", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->newPassword_1->Location = System::Drawing::Point(6, 90);
			this->newPassword_1->Name = L"newPassword_1";
			this->newPassword_1->Size = System::Drawing::Size(188, 35);
			this->newPassword_1->TabIndex = 7;
			this->newPassword_1->Text = L"New Password";
			this->newPassword_1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->newPassword_1->TextChanged += gcnew System::EventHandler(this, &core::textBox2_TextChanged);
			// 
			// newPassword
			// 
			this->newPassword->BackColor = System::Drawing::Color::Crimson;
			this->newPassword->Font = (gcnew System::Drawing::Font(L"Alef", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->newPassword->Location = System::Drawing::Point(6, 55);
			this->newPassword->Name = L"newPassword";
			this->newPassword->Size = System::Drawing::Size(188, 35);
			this->newPassword->TabIndex = 6;
			this->newPassword->Text = L"New Password";
			this->newPassword->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->newPassword->TextChanged += gcnew System::EventHandler(this, &core::textBox1_TextChanged);
			// 
			// oldpasswd_L
			// 
			this->oldpasswd_L->BackColor = System::Drawing::Color::Crimson;
			this->oldpasswd_L->Font = (gcnew System::Drawing::Font(L"Alef", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->oldpasswd_L->Location = System::Drawing::Point(6, 19);
			this->oldpasswd_L->Name = L"oldpasswd_L";
			this->oldpasswd_L->Size = System::Drawing::Size(188, 35);
			this->oldpasswd_L->TabIndex = 5;
			this->oldpasswd_L->Text = L"Old Password";
			this->oldpasswd_L->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->oldpasswd_L->TextChanged += gcnew System::EventHandler(this, &core::oldpasswd_L_TextChanged);
			// 
			// button1
			// 
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button1->Font = (gcnew System::Drawing::Font(L"Alef", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button1->Location = System::Drawing::Point(6, 136);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(188, 68);
			this->button1->TabIndex = 4;
			this->button1->Text = L"Save";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// blocade
			// 
			this->blocade->Interval = 60000;
			this->blocade->Tick += gcnew System::EventHandler(this, &core::blocade_Tick);
			// 
			// yourname
			// 
			this->yourname->AutoSize = true;
			this->yourname->Dock = System::Windows::Forms::DockStyle::Right;
			this->yourname->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->yourname->Location = System::Drawing::Point(1369, 0);
			this->yourname->Name = L"yourname";
			this->yourname->Size = System::Drawing::Size(64, 25);
			this->yourname->TabIndex = 2;
			this->yourname->Text = L"label1";
			// 
			// core
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1433, 616);
			this->Controls->Add(this->yourname);
			this->Controls->Add(this->tabControl1);
			this->MaximumSize = System::Drawing::Size(2898, 1310);
			this->MinimizeBox = false;
			this->MinimumSize = System::Drawing::Size(725, 328);
			this->Name = L"core";
			this->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->ShowIcon = false;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Load += gcnew System::EventHandler(this, &core::core_Load);
			this->ClientSizeChanged += gcnew System::EventHandler(this, &core::core_ClientSizeChanged);
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	int afk = 0;
	



private: System::Void core_Load(System::Object^ sender, System::EventArgs^ e) {
	this->ClientSize = System::Drawing::Size(1449, 655);
	this->blocade->Start();//start countdown to afk blocade 
}
private: void sqlfunc(String^ sqlcommand,int option)//using database in more convenient way i think 
{					//send specific command //option is for specific action on database 1-insert 2-Detele 3-update etc.

	switch (option)//i don't know yet 
	{
		case 1:
		{

		}
		case 2:
		{

		}
	}
}
private: System::Void core_ClientSizeChanged(System::Object^ sender, System::EventArgs^ e) {//oh yea 
	int width = this->Width;
	int Height = this->Height;
	int yourname_width = this->yourname->Width;
	this->tabControl1->Size = System::Drawing::Size(width - (yourname_width+20), Height -80);
	//works just fine 
}	   
private: System::Void blocade_Tick(System::Object^ sender, System::EventArgs^ e) {//idk
	afk++;
	if (afk == 9)
	{
		String^ message = "You are about to log out\nDo you need more time?";
		MessageBox::Show(message, "", MessageBoxButtons::YesNo, MessageBoxIcon::Question);

		if (MessageBox::Show(message, "", MessageBoxButtons::YesNo, MessageBoxIcon::Question) ==System::Windows::Forms::DialogResult::Yes)
		{
			this->blocade->Stop();
			afk = 0;
			this->blocade->Start();
			Beep(1500, 100);
		}
		else
		{
			Application::Exit();
		}

	}
	if (afk == 10)
	{
		this->ParentForm->Visible = true;
		Application::Exit();
	}
}
private: void mask(int index)//does it make any sense? maybe. does it work? ofcourse 
	{//very well
	Random^ rand = gcnew Random;
	int tone = rand->Next(0, 23);
	Beep((tone)+100, 100);
	char maskedpasswordchar[24] = { 'a', 'b', 'c', 'd','e','f','g','h','j','k','l','m','n','o','p','r','s','t','u','w','y','z','x','q' };

		switch (index)
		{
			case 1:
				this->oldpasswd_L->PasswordChar += maskedpasswordchar[tone];
				break;
			case 2:
			{
				this->newPassword->PasswordChar += maskedpasswordchar[tone];
				break;
			}
			case 3:
			{
				this->newPassword_1->PasswordChar += maskedpasswordchar[tone];
				break;
			}
		}
	}
private: System::Void oldpasswd_L_TextChanged(System::Object^ sender, System::EventArgs^ e)
{
	mask(1);
}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) 
{
	mask(2);
}
private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) 
{
	mask(3);
}
};
}
