#include "MyForm.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThread]
void main(array<String^>^ arg) {//создание и запуск самой формы
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);

    Project2::MyForm form;
    Application::Run(% form);

}