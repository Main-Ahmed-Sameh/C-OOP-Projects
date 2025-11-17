#include "ClsRepositary.h"

ClsRepositary::ClsRepositary(string id, string name, string email, string password,
	string phone, string city, string location)
{
	// Note: ClsUser is virtual base, initialized by most derived class
}

void ClsRepositary::Add()
{
	// Base implementation - should be overridden by derived classes
	cout << "Add operation - Base class implementation" << endl;
}

void ClsRepositary::Edit()
{
	// Base implementation - should be overridden by derived classes
	cout << "Edit operation - Base class implementation" << endl;
}

void ClsRepositary::Delete()
{
	// Base implementation - should be overridden by derived classes
	cout << "Delete operation - Base class implementation" << endl;
}

void ClsRepositary::GetAll()
{
	// Base implementation - should be overridden by derived classes
	cout << "GetAll operation - Base class implementation" << endl;
}
