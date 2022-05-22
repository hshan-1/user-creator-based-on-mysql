#pragma once
#include<Windows.h>

namespace UserCreator {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
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
			this->yourname->Text = first_name;
			this->yourLname->Text = last_name;
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
	private: System::Windows::Forms::Label^ yourLname;
	private: System::Windows::Forms::Label^ yourname;

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
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->blocade = (gcnew System::Windows::Forms::Timer(this->components));
			this->yourLname = (gcnew System::Windows::Forms::Label());
			this->yourname = (gcnew System::Windows::Forms::Label());
			this->tabControl1->SuspendLayout();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Location = System::Drawing::Point(1, 2);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(1161, 601);
			this->tabControl1->TabIndex = 0;
			// 
			// tabPage1
			// 
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(1153, 575);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"tabPage1";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// tabPage2
			// 
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(1153, 575);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"tabPage2";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// blocade
			// 
			this->blocade->Interval = 2000;
			this->blocade->Tick += gcnew System::EventHandler(this, &core::blocade_Tick);
			// 
			// yourLname
			// 
			this->yourLname->AutoSize = true;
			this->yourLname->Dock = System::Windows::Forms::DockStyle::Right;
			this->yourLname->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->yourLname->Location = System::Drawing::Point(1369, 0);
			this->yourLname->Name = L"yourLname";
			this->yourLname->Size = System::Drawing::Size(64, 25);
			this->yourLname->TabIndex = 1;
			this->yourLname->Text = L"label1";
			// 
			// yourname
			// 
			this->yourname->AutoSize = true;
			this->yourname->Dock = System::Windows::Forms::DockStyle::Right;
			this->yourname->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->yourname->Location = System::Drawing::Point(1305, 0);
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
			this->Controls->Add(this->yourLname);
			this->Controls->Add(this->tabControl1);
			this->MinimizeBox = false;
			this->Name = L"core";
			this->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->ShowIcon = false;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Load += gcnew System::EventHandler(this, &core::core_Load);
			this->ClientSizeChanged += gcnew System::EventHandler(this, &core::core_ClientSizeChanged);
			this->tabControl1->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		int afk = 0;
	



	private: System::Void core_Load(System::Object^ sender, System::EventArgs^ e) {
		this->ClientSize = System::Drawing::Size(1449, 655);
		this->blocade->Start();
	}
private: System::Void core_ClientSizeChanged(System::Object^ sender, System::EventArgs^ e) {
	int width = this->Width;
	int Height = this->Height;
	this->tabControl1->Size = System::Drawing::Size(width-150, Height -80);

}
	   
private: System::Void blocade_Tick(System::Object^ sender, System::EventArgs^ e) {
	
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
};
}
