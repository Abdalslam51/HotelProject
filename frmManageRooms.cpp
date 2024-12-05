#include "frmManageRooms.h"

using namespace HotelProject;
[STAThreadAttribute]
void Main1(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew frmManageRooms());

}

