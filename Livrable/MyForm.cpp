#include "MyForm.h"


using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
void Main(array<String^>^ args) {      // int __clrcall
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	bdd_livrable::MyForm mainFRM;
	Application::Run(% mainFRM);
}