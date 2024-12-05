#include "frmClientManagement.h"

using namespace HotelProject;
[STAThreadAttribute]
void Main2(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew frmClientManagement());

}
