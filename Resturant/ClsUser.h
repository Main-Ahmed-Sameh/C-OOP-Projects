#pragma once
#include <iostream>
#include <string>
using namespace std;

class ClsUser
{
private:
	string Id;
	string Name;
	string Email;
	string Password;
	string Phone;
	string City;
	string Location;
public:
	ClsUser(string id, string name, string email, string password,
		string phone, string city, string location);
	//virtual final so no one we can override it for security reasons
	virtual void LogIn(string Email,string Password) final;
	// virtual =0 so this is pure vitual function so every class that inherits from my class should write its defination
	//in source file and this move would make this class abstract so no one can take object from and the only way to 
	//to use oject is through the class that inherited from it
	virtual void ShowOrder() = 0;
	//this is normal function that will be overridden in all classes and it all should be same name with same parameters
	//and every class has user id and name etc so will use clsuser::displayinfo() for each 
	void DisplayInfo();


};

