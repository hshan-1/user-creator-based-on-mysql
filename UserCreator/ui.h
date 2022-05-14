#pragma once
#include<Windows.h>
#include<string.h>
#include"core.h"


namespace UserCreator {
	
	using namespace std;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	//using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Summary for ui
	/// </summary>
	public ref class ui : public System::Windows::Forms::Form
	{
	public:
		ui(void)
		{
			InitializeComponent();
			
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~ui()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ login;
	protected:
	private: System::Windows::Forms::TextBox^ passwd;
	private: System::Windows::Forms::Button^ getaccs;
	private: System::Windows::Forms::Button^ newUser;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Timer^ blocade;
	private: System::Windows::Forms::Label^ loginfo;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
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
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(ui::typeid));
			this->login = (gcnew System::Windows::Forms::TextBox());
			this->passwd = (gcnew System::Windows::Forms::TextBox());
			this->getaccs = (gcnew System::Windows::Forms::Button());
			this->newUser = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->blocade = (gcnew System::Windows::Forms::Timer(this->components));
			this->loginfo = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// login
			// 
			this->login->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->login->BorderStyle = System::Windows::Forms::BorderStyle::None;
			resources->ApplyResources(this->login, L"login");
			this->login->Name = L"login";
			this->login->Click += gcnew System::EventHandler(this, &ui::login_TextChanged);
			this->login->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &ui::login_KeyDown);
			// 
			// passwd
			// 
			this->passwd->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->passwd->BorderStyle = System::Windows::Forms::BorderStyle::None;
			resources->ApplyResources(this->passwd, L"passwd");
			this->passwd->Name = L"passwd";
			this->passwd->Click += gcnew System::EventHandler(this, &ui::passwd_TextChanged);
			this->passwd->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &ui::passwd_KeyDown);
			// 
			// getaccs
			// 
			this->getaccs->BackColor = System::Drawing::Color::Transparent;
			this->getaccs->FlatAppearance->BorderSize = 0;
			this->getaccs->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->getaccs->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			resources->ApplyResources(this->getaccs, L"getaccs");
			this->getaccs->Name = L"getaccs";
			this->getaccs->TabStop = false;
			this->getaccs->UseVisualStyleBackColor = false;
			this->getaccs->Click += gcnew System::EventHandler(this, &ui::getaccs_Click);
			// 
			// newUser
			// 
			this->newUser->BackColor = System::Drawing::Color::Transparent;
			this->newUser->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->newUser->FlatAppearance->BorderSize = 0;
			this->newUser->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->newUser->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			resources->ApplyResources(this->newUser, L"newUser");
			this->newUser->Name = L"newUser";
			this->newUser->UseVisualStyleBackColor = false;
			this->newUser->Click += gcnew System::EventHandler(this, &ui::newUser_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Transparent;
			this->button1->DialogResult = System::Windows::Forms::DialogResult::Cancel;
			this->button1->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->button1->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			resources->ApplyResources(this->button1, L"button1");
			this->button1->Name = L"button1";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &ui::button1_Click);
			// 
			// blocade
			// 
			this->blocade->Interval = 1000;
			this->blocade->Tick += gcnew System::EventHandler(this, &ui::blocade_Tick);
			// 
			// loginfo
			// 
			resources->ApplyResources(this->loginfo, L"loginfo");
			this->loginfo->ForeColor = System::Drawing::Color::DarkRed;
			this->loginfo->Name = L"loginfo";
			// 
			// pictureBox1
			// 
			resources->ApplyResources(this->pictureBox1, L"pictureBox1");
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->TabStop = false;
			// 
			// ui
			// 
			this->AcceptButton = this->getaccs;
			resources->ApplyResources(this, L"$this");
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->CancelButton = this->button1;
			this->Controls->Add(this->loginfo);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->newUser);
			this->Controls->Add(this->getaccs);
			this->Controls->Add(this->passwd);
			this->Controls->Add(this->login);
			this->Controls->Add(this->pictureBox1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"ui";
			this->ShowIcon = false;
			this->ShowInTaskbar = false;
			this->SizeGripStyle = System::Windows::Forms::SizeGripStyle::Show;
			this->TopMost = true;
			this->Load += gcnew System::EventHandler(this, &ui::ui_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		int a = 0;
		String^ status = "offline";

	private: System::Void ui_Load(System::Object^ sender, System::EventArgs^ e) {
		//MessageBox::Show("Welcome to user creator\nlogger\npasswordcheccker\nmooltitool\naudioplayer\ndemonaslayer");
		this->ClientSize = System::Drawing::Size(524, 524);
		
	}
	private: void control(String^ login, String^ passwd)//checks log info 
	{

		if (login=="admin" && passwd == "admin1")
		{
			Beep(1000, 100);
			MessageBox::Show("WELCOME", "HELLO", MessageBoxButtons::OK);
			status = "admin";
			this->Hide();
			Form^ core = gcnew Form();
			core->ShowDialog();
			this->Close();
		}
		else
		{
			this->loginfo->Visible = true;
			guard();//control sends info to guard 
		}
	}
	private: void guard()//i don't know yet
	{
		a++;
		switch (a)
		{
			case 3:
			{
				this->getaccs->Visible = false;
				this->blocade->Interval = a*10000;
				this->blocade->Start();
				MessageBox::Show(a*10+" sec cooldown");
				break;
			}
			case 10:
			{
				a = 9;
				this->getaccs->Visible = false;
				this->blocade->Interval = a * 10000;
				this->blocade->Start();
				MessageBox::Show(a * 10 + " sec cooldown");
				break;
			}
			case 6:
			{	
				this->getaccs->Visible = false;
				this->blocade->Interval = a * 10000;
				this->blocade->Start();
				MessageBox::Show(a * 10 + " sec cooldown");
				break;
			}
			case 9:
			{

				this->getaccs->Visible = false;
				this->blocade->Interval = a * 10000;
				this->blocade->Start();
				MessageBox::Show(a * 10 + " sec cooldown");
				break;
			}
		}

	}
private: System::Void login_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	this->login->Text = "";
}
private: System::Void passwd_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	this->passwd->Text = "";
}
public: System::Void getaccs_Click(System::Object^ sender, System::EventArgs^ e){
	this->loginfo->Visible = false;
	this->button1->Location = System::Drawing::Point(215, 364);
	String^ login = this->login->Text;
	String^ passwd = this->passwd->Text;
	int sLength = this->passwd->TextLength;
	if (status == "offline")
	{
		control(login, passwd);
	}
	else
	{
		this->login->Enabled = false;
		this->passwd->Enabled = false;
	}
	String^ sqlconfig = "datasource=localhost;3306;username=root;password=guest1;userapp";
	
}
private: System::Void login_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
	if ("")
	{
		Random^ rand = gcnew Random;
		int tone = rand->Next(3, 9);
		Beep(tone * 100, 100);
	
	}
}
private: System::Void passwd_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
	if ("")
	{
		Random^ rand = gcnew Random;
		int tone =rand->Next(0,23);
		Beep((tone*100)+350, 100);
		char maskedpasswordchar[24] = { 'a', 'b', 'c', 'd','e','f','g','h','j','k','l','m','n','o','p','r','s','t','u','w','y','z','x','q' };
		//char maskedpasswordchar[24] = {001,002,003,004,005,006,007,030,011,012,042,014,015,016,017,020,021,022,023,024}; these funky characters didn't work 
		this->passwd->PasswordChar += maskedpasswordchar[tone];
	}
}
private: System::Void blocade_Tick(System::Object^ sender, System::EventArgs^ e) {
	this->getaccs->Visible = true;
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	Form::Close();
}

private: System::Void newUser_Click(System::Object^ sender, System::EventArgs^ e) {
	//this->button1->Location = System::Drawing::Point(421, 419);
	if (status == "admin") 
	{
		this->ClientSize = System::Drawing::Size(1050, 525);
	}
	else
	{
		MessageBox::Show("Log in to admin to create new user");
	}
	
	
}
};
}
