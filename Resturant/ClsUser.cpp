#include "ClsUser.h"
ClsUser::ClsUser(string id, string name, string email, string password, string phone, string city, string location):
Id(id), Name(name), Email(email), Password(password),
Phone(phone), City(city),Location(location)
{

}

void ClsUser::LogIn(string Email, string Password)
{
	cout << Name << " is logged in";
}

// ShowOrder() is pure virtual - no implementation needed
// Implementation must be provided by derived classes

void ClsUser::DisplayInfo()
{
	cout <<"***************** USERS INFO *****************"<< endl;
		cout << "Id : " << Id << endl;
		cout << "Name : " << Name << endl;
		cout << "Email : " << Email << endl;
		cout << "Password : " << Password << endl;
		cout << "Phone :  " << Phone << endl;
		cout << "City :  " << City << endl;
		cout << "Location : " << Location << endl;
	cout<<"********** End of Display User Info **********"<<endl;

}
