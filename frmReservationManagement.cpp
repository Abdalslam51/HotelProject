#include "frmReservationManagement.h"
using namespace HotelProject;
[STAThreadAttribute]
void MainReservation(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew frmReservationManagement());

}

