#include "ClsResturant.h"

ClsResturant::ClsResturant(string id, string name, string email, string password,
	string phone, string city, string location, string logo, string taxcard, string telephone)
	:ClsUser(id, name, email, password, phone, city, location),
	ClsRepositary(id, name, email, password, phone, city, location),
	Logo(logo), TaxCard(taxcard), Telephone(telephone)
{

}

void ClsResturant::DeliverOrder()
{
	cout << "Order is being delivered to the customer..." << endl;
	cout << "Delivery status: In transit" << endl;
}

void ClsResturant::ShowOrder()
{
	cout << "Welcome from ClsResturant - Viewing restaurant orders..." << endl;
	cout << "All pending orders will be displayed here." << endl;
}

void ClsResturant::ApproveOrder()
{
	cout << "Order has been approved!" << endl;
	cout << "Order is now being prepared." << endl;
}

void ClsResturant::DisplayInfo()
{
	ClsUser::DisplayInfo();
	cout << "*************** RESTAURANT INFO **************" << endl;
	cout << "Logo: " << Logo << endl;
	cout << "Tax Card: " << TaxCard << endl;
	cout << "Telephone: " << Telephone << endl;
	cout << "******** End of Display Restaurant Info ******" << endl;
}

void ClsResturant::Add()
{
	cout << "Adding new menu item..." << endl;
	cout << "Menu item added successfully!" << endl;
}

void ClsResturant::Edit()
{
	cout << "Editing menu item..." << endl;
	cout << "Menu item updated successfully!" << endl;
}

void ClsResturant::Delete()
{
	cout << "Deleting menu item..." << endl;
	cout << "Menu item removed successfully!" << endl;
}

void ClsResturant::GetAll()
{
	cout << "Retrieving all menu items..." << endl;
	cout << "Complete menu displayed." << endl;
}
