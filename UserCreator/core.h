#pragma once

namespace UserCreator {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace UserCreator;

	/// <summary>
	/// Summary for core
	/// </summary>
	public ref class core : public System::Windows::Forms::Form
	{
	public:
		core(String^ first_name,String^ last_name,String^ status)
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
		~core()
		{
			if (components)
			{
				delete components;
			}
		}


	protected:

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
			this->SuspendLayout();
			// 
			// core
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1437, 778);
			this->Name = L"core";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"e";
			this->Load += gcnew System::EventHandler(this, &core::core_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void core_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void l2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	};
}
