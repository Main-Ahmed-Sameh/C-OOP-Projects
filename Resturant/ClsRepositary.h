#pragma once
#include <iostream>
#include <string>
#include "ClsUser.h"
using namespace std;
class ClsRepositary:public virtual ClsUser
{
protected:
	ClsRepositary(string id, string name, string email, string password,
		string phone, string city, string location);
	//this is abstract class so if someone used it he will have to write defination for each of those functions
	//no one can take objects from this class except for the class that inherited from it
	virtual void Add()=0;
	virtual void Edit()=0;
	virtual void Delete()=0;
	virtual void GetAll()=0;

};

