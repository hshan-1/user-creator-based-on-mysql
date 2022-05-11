#pragma once
#include<Windows.h>
#include<string.h>



namespace UserCreator {
	
	using namespace std;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for ui
	/// </summary>
	public ref class ui : public System::Windows::Forms::Form
	{
	public:
		ui(void)
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
			this->login = (gcnew System::Windows::Forms::TextBox());
			this->passwd = (gcnew System::Windows::Forms::TextBox());
			this->getaccs = (gcnew System::Windows::Forms::Button());
			this->newUser = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->blocade = (gcnew System::Windows::Forms::Timer(this->components));
			this->SuspendLayout();
			// 
			// login
			// 
			this->login->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->login->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->login->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->login->Location = System::Drawing::Point(12, 163);
			this->login->MaxLength = 32;
			this->login->Name = L"login";
			this->login->Size = System::Drawing::Size(484, 31);
			this->login->TabIndex = 0;
			this->login->Text = L"Login";
			this->login->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->login->Click += gcnew System::EventHandler(this, &ui::login_TextChanged);
			// 
			// passwd
			// 
			this->passwd->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->passwd->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->passwd->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->passwd->Location = System::Drawing::Point(12, 252);
			this->passwd->MaxLength = 16;
			this->passwd->Name = L"passwd";
			this->passwd->PasswordChar = '#';
			this->passwd->Size = System::Drawing::Size(484, 31);
			this->passwd->TabIndex = 1;
			this->passwd->Text = L"Login";
			this->passwd->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->passwd->WordWrap = false;
			this->passwd->Click += gcnew System::EventHandler(this, &ui::passwd_TextChanged);
			this->passwd->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &ui::passwd_KeyDown);
			// 
			// getaccs
			// 
			this->getaccs->FlatAppearance->BorderSize = 0;
			this->getaccs->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Black;
			this->getaccs->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->getaccs->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->getaccs->Location = System::Drawing::Point(143, 303);
			this->getaccs->Name = L"getaccs";
			this->getaccs->Size = System::Drawing::Size(75, 66);
			this->getaccs->TabIndex = 2;
			this->getaccs->Text = L"Log in";
			this->getaccs->UseVisualStyleBackColor = true;
			this->getaccs->Click += gcnew System::EventHandler(this, &ui::getaccs_Click);
			// 
			// newUser
			// 
			this->newUser->FlatAppearance->BorderSize = 0;
			this->newUser->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Black;
			this->newUser->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->newUser->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->newUser->Location = System::Drawing::Point(288, 303);
			this->newUser->Name = L"newUser";
			this->newUser->Size = System::Drawing::Size(75, 66);
			this->newUser->TabIndex = 3;
			this->newUser->Text = L"Create\nnew user";
			this->newUser->UseVisualStyleBackColor = true;
			this->newUser->Click += gcnew System::EventHandler(this, &ui::newUser_Click);
			// 
			// button1
			// 
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->button1->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Red;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Location = System::Drawing::Point(216, 368);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 66);
			this->button1->TabIndex = 4;
			this->button1->Text = L"\tquit\n";
			this->button1->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &ui::button1_Click);
			// 
			// blocade
			// 
			this->blocade->Interval = 1000;
			this->blocade->Tick += gcnew System::EventHandler(this, &ui::blocade_Tick);
			// 
			// ui
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(508, 485);
			this->ControlBox = false;
			this->Controls->Add(this->button1);
			this->Controls->Add(this->newUser);
			this->Controls->Add(this->getaccs);
			this->Controls->Add(this->passwd);
			this->Controls->Add(this->login);
			this->Name = L"ui";
			this->ShowIcon = false;
			this->ShowInTaskbar = false;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"ui";
			this->TopMost = true;
			this->TransparencyKey = System::Drawing::Color::Black;
			this->Load += gcnew System::EventHandler(this, &ui::ui_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		int a = 0;

	private: System::Void ui_Load(System::Object^ sender, System::EventArgs^ e) {
		MessageBox::Show("Welcome to user creator\nlogger\npasswordcheccker\nmooltitool\naudioplayer\ndemonaslayer");
	}
	private: void control(String^ login, String^ passwd)//checks log info 
	{
		if (login=="admin" && passwd == "admin1")
		{
			Beep(1000, 100);
			MessageBox::Show("WELCOME", "HELLO", MessageBoxButtons::YesNoCancel);
		}
		else
		{
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
				MessageBox::Show(a*10+" sec cooldown");
				this->getaccs->Visible = false;
				this->blocade->Interval = a*10000;
				this->blocade->Start();
				break;
			}
			case 10:
			{
				a = 9;
				MessageBox::Show(a * 10 + " sec cooldown");
				this->getaccs->Visible = false;
				this->blocade->Interval = a * 10000;
				this->blocade->Start();
				break;
			}
			case 6:
			{
				MessageBox::Show(a * 10 + " sec cooldown");	
				this->getaccs->Visible = false;
				this->blocade->Interval = a * 10000;
				this->blocade->Start();
				break;
			}
			case 9:
			{
				MessageBox::Show(a * 10 + " sec cooldown");
				this->getaccs->Visible = false;
				this->blocade->Interval = a * 10000;
				this->blocade->Start();
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
	this->button1->Location = System::Drawing::Point(216, 368);
	String^ login = this->login->Text;
	String^ passwd = this->passwd->Text;
	int sLength = this->passwd->TextLength;
	control(login, passwd);
	Beep(1000, 100);
}
private: System::Void passwd_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
	if ("")
	{
		Beep(220, 100);
	}
}
private: System::Void blocade_Tick(System::Object^ sender, System::EventArgs^ e) {
	this->getaccs->Visible = true;
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	Form::Close();
}

private: System::Void newUser_Click(System::Object^ sender, System::EventArgs^ e) {
	this->button1->Location = System::Drawing::Point(421, 419);
	//fstream file_op("C:\\users\\%USERNAME%\\userfiles\\userCreator\\LaPxcv.txt",ios::out);//not working yet
	
	
}

};
}
