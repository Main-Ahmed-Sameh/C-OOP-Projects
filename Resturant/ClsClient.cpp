#include "ClsClient.h"
ClsClient::ClsClient(string id, string name, string email, string password,
	string phone, string city, string location, string flat, string floor, 
	string secondphone, string clientLocation)
	:ClsUser(id, name, email, password, phone, city, location),
	ClsRepositary(id, name, email, password, phone, city, location),
	Flat(flat), Floor(floor), Phone(phone), 
	SecondPhone(secondphone), Location(clientLocation)
{

}
//the pure virtual function
void ClsClient::ShowOrder()
{
	cout << "Welcome from ClsClient - Viewing your orders..." << endl;
	cout << "Order list will be displayed here." << endl;
}

void ClsClient::SendOrder()
{
	cout << "Order has been sent successfully!" << endl;
	cout << "Your order is being processed by the restaurant." << endl;
}

void ClsClient::ReceiveOrder()
{
	cout << "Order received! Your food is ready for pickup/delivery." << endl;
	cout << "Thank you for your order!" << endl;
}

void ClsClient::DisplayInfo()
{
	ClsUser::DisplayInfo();
	cout << "**************** CLIENT INFO *****************" << endl;
	cout << "Flat: " << Flat << endl;
	cout << "Floor: " << Floor << endl;
	cout << "Phone: " << Phone << endl;
	cout << "Second Phone: " << SecondPhone << endl;
	cout << "Location: " << Location << endl;
	cout << "********* End of Display Client Info *********" << endl;
}

void ClsClient::Add()
{
	cout << "Adding new item to your order..." << endl;
	cout << "Item added successfully!" << endl;
}

void ClsClient::Edit()
{
	cout << "Editing your order..." << endl;
	cout << "Order updated successfully!" << endl;
}

void ClsClient::Delete()
{
	cout << "Deleting item from your order..." << endl;
	cout << "Item removed successfully!" << endl;
}

void ClsClient::GetAll()
{
	cout << "Retrieving all your orders..." << endl;
	cout << "Order history displayed." << endl;
}
