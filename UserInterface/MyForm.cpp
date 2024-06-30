#include "MyForm.h"

using namespace System;
using namespace System::Windows::Forms;
[STAThreead]
void main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	UserInterface::MyForm form;
	Application::Run(% form);
}