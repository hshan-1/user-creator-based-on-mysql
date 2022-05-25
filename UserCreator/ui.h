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
	using namespace UserCreator;
	using namespace MySql::Data::MySqlClient;

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
		String^ sqlconfig = L"datasource=localhost;port=3306;username=root;password=guest1;database=userapp";
		MySqlConnection^ con_toData = gcnew MySqlConnection(sqlconfig);
		MySqlCommand^ sql_syntax = gcnew MySqlCommand("SELECT * FROM userapp.user WHERE login='" + login + "' AND passwd = concat(UPPER(SHA1(UNHEX(SHA1(\"" + passwd + "\")))));", con_toData);
		MySqlDataReader^ r_records;
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
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::Button^ newUserAdd;
	private: System::Windows::Forms::Button^ discardNewUser;
	private: System::Windows::Forms::Button^ adminList_btn;
	private: System::Windows::Forms::Button^ newAdmin;
	private: System::Windows::Forms::TextBox^ newName_txb;
	private: System::Windows::Forms::TextBox^ newLName_txb;
	private: System::Windows::Forms::TextBox^ newLogin_txt;
	private: System::Windows::Forms::TextBox^ newPasswd_txb;
	private: System::Windows::Forms::TextBox^ confPasswd_txb;

	private: System::Windows::Forms::Button^ admingetin;
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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->newUserAdd = (gcnew System::Windows::Forms::Button());
			this->discardNewUser = (gcnew System::Windows::Forms::Button());
			this->adminList_btn = (gcnew System::Windows::Forms::Button());
			this->newAdmin = (gcnew System::Windows::Forms::Button());
			this->newName_txb = (gcnew System::Windows::Forms::TextBox());
			this->newLName_txb = (gcnew System::Windows::Forms::TextBox());
			this->newLogin_txt = (gcnew System::Windows::Forms::TextBox());
			this->newPasswd_txb = (gcnew System::Windows::Forms::TextBox());
			this->confPasswd_txb = (gcnew System::Windows::Forms::TextBox());
			this->admingetin = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
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
			this->passwd->TextChanged += gcnew System::EventHandler(this, &ui::passwd_TextChanged_1);
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
			resources->ApplyResources(this->newUser, L"newUser");
			this->newUser->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->newUser->FlatAppearance->BorderSize = 0;
			this->newUser->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->newUser->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
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
			// label1
			// 
			resources->ApplyResources(this->label1, L"label1");
			this->label1->Name = L"label1";
			// 
			// pictureBox2
			// 
			resources->ApplyResources(this->pictureBox2, L"pictureBox2");
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->TabStop = false;
			this->pictureBox2->Click += gcnew System::EventHandler(this, &ui::pictureBox2_Click);
			// 
			// newUserAdd
			// 
			this->newUserAdd->BackColor = System::Drawing::Color::Transparent;
			this->newUserAdd->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->newUserAdd->FlatAppearance->BorderSize = 0;
			this->newUserAdd->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->newUserAdd->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			resources->ApplyResources(this->newUserAdd, L"newUserAdd");
			this->newUserAdd->Name = L"newUserAdd";
			this->newUserAdd->UseVisualStyleBackColor = false;
			this->newUserAdd->Click += gcnew System::EventHandler(this, &ui::newUserAdd_Click);
			// 
			// discardNewUser
			// 
			this->discardNewUser->BackColor = System::Drawing::Color::Transparent;
			this->discardNewUser->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->discardNewUser->FlatAppearance->BorderSize = 0;
			this->discardNewUser->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->discardNewUser->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			resources->ApplyResources(this->discardNewUser, L"discardNewUser");
			this->discardNewUser->Name = L"discardNewUser";
			this->discardNewUser->UseVisualStyleBackColor = false;
			this->discardNewUser->Click += gcnew System::EventHandler(this, &ui::discardNewUser_Click);
			// 
			// adminList_btn
			// 
			this->adminList_btn->BackColor = System::Drawing::Color::Transparent;
			this->adminList_btn->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->adminList_btn->FlatAppearance->BorderSize = 0;
			this->adminList_btn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->adminList_btn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			resources->ApplyResources(this->adminList_btn, L"adminList_btn");
			this->adminList_btn->Name = L"adminList_btn";
			this->adminList_btn->UseVisualStyleBackColor = false;
			this->adminList_btn->Click += gcnew System::EventHandler(this, &ui::adminList_btn_Click);
			// 
			// newAdmin
			// 
			this->newAdmin->BackColor = System::Drawing::Color::Transparent;
			this->newAdmin->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->newAdmin->FlatAppearance->BorderSize = 0;
			this->newAdmin->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->newAdmin->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			resources->ApplyResources(this->newAdmin, L"newAdmin");
			this->newAdmin->Name = L"newAdmin";
			this->newAdmin->UseVisualStyleBackColor = false;
			this->newAdmin->Click += gcnew System::EventHandler(this, &ui::newAdmin_Click);
			// 
			// newName_txb
			// 
			this->newName_txb->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->newName_txb->BorderStyle = System::Windows::Forms::BorderStyle::None;
			resources->ApplyResources(this->newName_txb, L"newName_txb");
			this->newName_txb->Name = L"newName_txb";
			// 
			// newLName_txb
			// 
			this->newLName_txb->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->newLName_txb->BorderStyle = System::Windows::Forms::BorderStyle::None;
			resources->ApplyResources(this->newLName_txb, L"newLName_txb");
			this->newLName_txb->Name = L"newLName_txb";
			// 
			// newLogin_txt
			// 
			this->newLogin_txt->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->newLogin_txt->BorderStyle = System::Windows::Forms::BorderStyle::None;
			resources->ApplyResources(this->newLogin_txt, L"newLogin_txt");
			this->newLogin_txt->Name = L"newLogin_txt";
			// 
			// newPasswd_txb
			// 
			this->newPasswd_txb->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->newPasswd_txb->BorderStyle = System::Windows::Forms::BorderStyle::None;
			resources->ApplyResources(this->newPasswd_txb, L"newPasswd_txb");
			this->newPasswd_txb->Name = L"newPasswd_txb";
			this->newPasswd_txb->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &ui::newPasswd_txb_KeyDown);
			// 
			// confPasswd_txb
			// 
			this->confPasswd_txb->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->confPasswd_txb->BorderStyle = System::Windows::Forms::BorderStyle::None;
			resources->ApplyResources(this->confPasswd_txb, L"confPasswd_txb");
			this->confPasswd_txb->Name = L"confPasswd_txb";
			this->confPasswd_txb->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &ui::confPasswd_txb_KeyDown);
			// 
			// admingetin
			// 
			resources->ApplyResources(this->admingetin, L"admingetin");
			this->admingetin->Name = L"admingetin";
			this->admingetin->UseVisualStyleBackColor = true;
			this->admingetin->Click += gcnew System::EventHandler(this, &ui::admingetin_Click);
			// 
			// ui
			// 
			this->AcceptButton = this->getaccs;
			resources->ApplyResources(this, L"$this");
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->CancelButton = this->button1;
			this->Controls->Add(this->admingetin);
			this->Controls->Add(this->confPasswd_txb);
			this->Controls->Add(this->newPasswd_txb);
			this->Controls->Add(this->newLogin_txt);
			this->Controls->Add(this->newLName_txb);
			this->Controls->Add(this->newName_txb);
			this->Controls->Add(this->newAdmin);
			this->Controls->Add(this->adminList_btn);
			this->Controls->Add(this->discardNewUser);
			this->Controls->Add(this->newUserAdd);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->label1);
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
			this->SizeGripStyle = System::Windows::Forms::SizeGripStyle::Show;
			this->TopMost = true;
			this->Load += gcnew System::EventHandler(this, &ui::ui_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		int a = 0;
		String^ status = "offline";
		core^ nextform = gcnew core("", "", "");
		String^ yourname;
		String^ yourLname;
	private: System::Void ui_Load(System::Object^ sender, System::EventArgs^ e) {
		//MessageBox::Show("Welcome to user creator\nlogger\npasswordcheccker\nmooltitool\naudioplayer\ndemonaslayer");
		this->ClientSize = System::Drawing::Size(524, 524);
	}
	public: void control(String^ sql_syntax)
	{

	}
	private: void control(String^ login, String^ passwd)//checks log info 
	{
		String^ sqlconfig = L"datasource=localhost;port=3306;username=root;password=guest1;database=userapp";
		MySqlConnection^ con_toData = gcnew MySqlConnection(sqlconfig);
		MySqlCommand^ sql_syntax = gcnew MySqlCommand("SELECT * FROM userapp.user WHERE login='" + login + "' AND passwd = concat(UPPER(SHA1(UNHEX(SHA1(\"" + passwd + "\")))));", con_toData);
		MySqlDataReader^ r_records;
		try
		{
			con_toData->Open();
			r_records = sql_syntax->ExecuteReader();
			if (r_records->Read())
			{
				
				Beep(1000, 100);
				MessageBox::Show("Welcome "+(r_records->GetString(3)), "HELLO", MessageBoxButtons::OK);
				this->login->Enabled = false;
				this->passwd->Enabled = false;
				this->getaccs->Text = "Log out";
				switch (r_records->GetInt16(5))
				{
					case 1:
					{
						status = "admin";
						this->admingetin->Visible = true;
						yourname = r_records->GetString(3);
						yourLname = r_records->GetString(4);
						break;
					}
					default:
					{
						
						status = "online";
						core^ nextform = gcnew core(r_records->GetString(3), r_records->GetString(4), status);
						this->TopMost = false;
						nextform->Show();
						this->Visible = false;
						nextform->Enabled = true;
						break;
					}
				}
				this->blocade->Interval = 300000;
				this->blocade->Start();
				this->login->Enabled = false;
				this->passwd->Enabled = false;
			/*	core^ nextform = gcnew core(r_records->GetString(3), r_records->GetString(4), status);
				this->TopMost = false;
				this->MinimizeBox = true;
				nextform->Show();*/
			}
			else
			{
				Beep(150, 100);
				Beep(200, 100);
				this->loginfo->Visible = true;
				guard();//control sends info to guard 
			}
		}
		catch (Exception^ r_fail)
		{
			MessageBox::Show(""+r_fail->Message);
			
		}
		
	}
	private: void guard()
	{
		a++;
		switch (a)
		{
			case 1:
			{
				break;
			}
			case 2:
			{
				break;
			}
			default:
			{
				this->getaccs->Enabled = false;
				this->blocade->Interval = a * 10000;
				this->blocade->Start();
				MessageBox::Show(a * 10 + " sec cooldown");
				a = 0;
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
	this->newUser->Enabled = true;
	this->loginfo->Visible = false;
	this->button1->Location = System::Drawing::Point(215, 364);
	String^ login = this->login->Text;
	String^ passwd = this->passwd->Text;
	int sLength = this->passwd->TextLength;
	if (status == "offline")
	{
		this->Show();
		control(login, passwd);
	}
	else
	{
		status = "offline";
		this->login->Enabled = true;
		this->passwd->Enabled = true;
		this->getaccs->Text = "Log in";
	}
	
	//String^ sqlconfig = "datasource=localhost;3306;username=root;password=guest1;userapp";
	
}
private: System::Void login_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
	if ("")
	{
		Random^ rand = gcnew Random;
		int tone = rand->Next(5, 9);
		Beep(tone * 150, 100);
	
	}
}
private: System::Void passwd_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {

		Random^ rand = gcnew Random;
		int tone =rand->Next(0,23);
		Beep((tone)+100, 100);
		char maskedpasswordchar[24] = { 'a', 'b', 'c', 'd','e','f','g','h','j','k','l','m','n','o','p','r','s','t','u','w','y','z','x','q' };
		this->passwd->PasswordChar += maskedpasswordchar[tone];

}
	private: System::Void blocade_Tick(System::Object^ sender, System::EventArgs^ e) {

	if (status != "offline")
	{
		
		this->nextform->Close();
		status = "offline";
	}
	this->getaccs->Enabled = true;
	this->getaccs->Text = "Log in";
	this->login->Enabled = true;
	this->passwd->Enabled = true;
	this->passwd->Text = "";
	
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}

private: System::Void newUser_Click(System::Object^ sender, System::EventArgs^ e) {
	//this->button1->Location = System::Drawing::Point(421, 419);
	if (status == "admin") 
	{
		this->newUser->Enabled = true;
		this->ClientSize = System::Drawing::Size(1050, 525);
	}
	else
	{
		this->newUser->Enabled = false;
		MessageBox::Show("Log in to admin\nto create new user");
	}
	
	
}
private: System::Void adminList_btn_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void newUserAdd_Click(System::Object^ sender, System::EventArgs^ e) {
	if (status == "admin")//can create new user if online 
	{
		
		if ((newName_txb != nullptr) && (newLName_txb != nullptr) && (newLogin_txt != nullptr) && (newPasswd_txb != nullptr))//don't really need that, database don't accept empty records
		{
			this->newUserAdd->Enabled = true;
			String^ passwd = newPasswd_txb->ToString();
			String^ confpasswd = confPasswd_txb->ToString();//i couldn't figure out better way really 
			if (passwd == confpasswd)
			{
				String^ sqlconfig = L"datasource=localhost;port=3306;username=root;password=guest1;database=userapp";
				MySqlConnection^ con_toData = gcnew MySqlConnection(sqlconfig);
				MySqlCommand^ sql_syntax = gcnew MySqlCommand("INSERT INTO userapp.user(`login`, `passwd`, `first_name`, `last_name`) VALUES ('" + (newLogin_txt->Text) + "', concat(UPPER(SHA1(UNHEX(SHA1('" + (newPasswd_txb->Text) + "'))))), '" + (newName_txb->Text) + "', '" + (newLName_txb->Text) + "')", con_toData);
				MySqlDataReader^ r_records;
				try
				{
					con_toData->Open();
					r_records = sql_syntax->ExecuteReader();

					Beep(1000, 100);
					Beep(1600, 90);
					MessageBox::Show("User added\nLogin: '" + (newLogin_txt->Text) + "'\nName: " + (newName_txb->Text) + " " + (newLName_txb->Text) + "", "New User", MessageBoxButtons::OK);

				}
				catch (Exception^ r_fail)
				{
					MessageBox::Show(r_fail->Message, "New User");

				}
			}
			else
			{
				MessageBox::Show("Passwords are not indenticall");
			}
		}
		else
		{
			this->newUserAdd->Enabled = false;
			MessageBox::Show("Forms can't be empty");
		}
	}
	else//hide option to create new user while offline and form extended
	{
		this->ClientSize = System::Drawing::Size(524, 524);
		MessageBox::Show("You must be logged in\nto create new user", "Alert");
	}
}
private: System::Void newPasswd_txb_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {

	Random^ rand = gcnew Random;
	int tone = rand->Next(0, 23);
	Beep((tone)+100, 100);
	char maskedpasswordchar[24] = { 'a', 'b', 'c', 'd','e','f','g','h','j','k','l','m','n','o','p','r','s','t','u','w','y','z','x','q' };
	//char maskedpasswordchar[24] = {001,002,003,004,005,006,007,030,011,012,042,014,015,016,017,020,021,022,023,024}; these funky characters didn't work 
	
	this->newPasswd_txb->PasswordChar += maskedpasswordchar[tone];
	

}
private: System::Void confPasswd_txb_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {

	Random^ rand = gcnew Random;
	int tone = rand->Next(0, 23);
	Beep((tone)+100, 100);//had to change that it was really driving me crazy 
	char maskedpasswordchar[24] = { 'a', 'b', 'c', 'd','e','f','g','h','j','k','l','m','n','o','p','r','s','t','u','w','y','z','x','q' };
	//char maskedpasswordchar[24] = {001,002,003,004,005,006,007,030,011,012,042,014,015,016,017,020,021,022,023,024}; these funky characters didn't work 

	this->confPasswd_txb->PasswordChar += maskedpasswordchar[tone];

}
private: System::Void discardNewUser_Click(System::Object^ sender, System::EventArgs^ e) {
	this->newName_txb->Text = "First Name";
	this->newLName_txb->Text = "Last Name";
	this->newLogin_txt->Text = "Login";
	this->newPasswd_txb->Text = "Password";
	this->confPasswd_txb->Text = "Confirm Password";
	this->newPasswd_txb->PasswordChar =false;
	this->confPasswd_txb->PasswordChar = false;
	this->ClientSize = System::Drawing::Size(524, 524);
}
private: System::Void newAdmin_Click(System::Object^ sender, System::EventArgs^ e) {
	if (status == "admin")//only admin can create new admin user 
	{
		this->newAdmin->Enabled = true;
		if ((newName_txb != nullptr) && (newLName_txb != nullptr) && (newLogin_txt != nullptr) && (newPasswd_txb != nullptr))//don't really need that, database don't accept empty records
		{
			String^ passwd = newPasswd_txb->ToString();
			String^ confpasswd = confPasswd_txb->ToString();//i couldn't figure out better way really 
			if (passwd == confpasswd)
			{
				String^ sqlconfig = L"datasource=localhost;port=3306;username=root;password=guest1;database=userapp";
				MySqlConnection^ con_toData = gcnew MySqlConnection(sqlconfig);
				MySqlCommand^ sql_syntax = gcnew MySqlCommand("INSERT INTO userapp.user(`login`, `passwd`, `first_name`, `last_name`,`admin`) VALUES ('" + (newLogin_txt->Text) + "', concat(UPPER(SHA1(UNHEX(SHA1('" + (newPasswd_txb->Text) + "'))))), '" + (newName_txb->Text) + "', '" + (newLName_txb->Text) + "','1')", con_toData);
				MySqlDataReader^ r_records;
				try
				{
					con_toData->Open();
					r_records = sql_syntax->ExecuteReader();

					Beep(1000, 100);
					Beep(1600, 90);
					MessageBox::Show("Admin added\nLogin: '" + (newLogin_txt->Text) + "'\nName: "+(newName_txb->Text) + " "+(newLName_txb->Text) + "", "New Admin", MessageBoxButtons::OK);

				}
				catch (Exception^ r_fail)
				{
					MessageBox::Show(r_fail->Message, "New User");

				}
			}
			else
			{
				MessageBox::Show("Passwords are not indenticall");
			}
		}
		else
		{
			MessageBox::Show("Forms can't be empty");
		}
	}
	else
	{
		this->newAdmin->Enabled = false;
		MessageBox::Show("Only admin can create another admin", "Alert");
		this->ClientSize = System::Drawing::Size(524, 524);
	}
}
private: System::Void statusInfo_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	/*if (status== "offline")
	{
		this->statusInfo->ForeColor = System::Drawing::Color::DarkRed;
		
	}
	if (status== "admin") 
	{
		this->admingetin->Visible = true;
		Beep(15000, 200);
		this->statusInfo->ForeColor = System::Drawing::Color::AliceBlue;
	}
	else
	{
		this->statusInfo->ForeColor = System::Drawing::Color::LawnGreen;
	}*/
}
private: System::Void statusInfo_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void pictureBox2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void passwd_TextChanged_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void admingetin_Click(System::Object^ sender, System::EventArgs^ e) {
	core^ nextform = gcnew core(yourname,yourLname, status);
	nextform->Show();
}

};
}
