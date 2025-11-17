#include "ClsAdmin.h"
using namespace std;
#include <iostream>

ClsAdmin::ClsAdmin(string id, string name, string email, string password,
	string phone, string city, string location, string jopname)
	:ClsUser(id, name, email, password, phone, city, location),
	ClsRepositary(id, name, email, password, phone, city, location),
	JobName(jopname)
{

}

void ClsAdmin::ShowOrder()
{
	cout << "Welcome from ClsAdmin - Viewing all system orders..." << endl;
	cout << "Administrative order overview displayed." << endl;
}

void ClsAdmin::DisplayInfo()
{
	ClsUser::DisplayInfo();
	cout << "*****************EMPLOYEE INFO****************" << endl;
	cout << "Job Name: " << JobName << endl;
	cout << "*********End of Display Employee Info ********" << endl;
}

void ClsAdmin::ContactUser()
{
	cout << "Contacting user..." << endl;
	cout << "User notification sent successfully!" << endl;
}

void ClsAdmin::CancelOrder()
{
	cout << "Cancelling order..." << endl;
	cout << "Order cancelled successfully. Refund processed." << endl;
}
void ClsAdmin::Add()
{
	cout << "Admin Job: Adding new system item..." << endl;
	cout << "Item added successfully to the system!" << endl;
}

void ClsAdmin::Edit()
{
	cout << "Admin Job: Editing system item..." << endl;
	cout << "Item updated successfully in the system!" << endl;
}

void ClsAdmin::Delete()
{
	cout << "Admin Job: Deleting system item..." << endl;
	cout << "Item removed successfully from the system!" << endl;
}

void ClsAdmin::GetAll()
{
	cout << "Admin Job: Retrieving all system items..." << endl;
	cout << "Complete system data displayed." << endl;
}

