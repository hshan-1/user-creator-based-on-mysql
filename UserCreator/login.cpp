#include "ui.h"



using namespace System;
using namespace System::Windows::Forms;
using namespace UserCreator;

[STAThreadAttribute]

int Main(array <String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	UserCreator::ui forma;
	Application::Run(% forma);
	return 0;
}

