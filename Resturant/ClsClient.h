#pragma once
#include <iostream>
#include <string>
using namespace std;
#include "ClsUser.h"
#include "ClsRepositary.h"
class ClsClient :public virtual ClsUser, public ClsRepositary
{
private:
	string Flat;
	string Floor;
	string Phone;
	string SecondPhone;
	string Location;
public:
	ClsClient(string id, string name, string email, string password,
		string phone, string city, string location, string flat, string floor, 
		string secondphone, string clientLocation);
	void SendOrder();
	void ReceiveOrder();
	void ShowOrder() override;
	void DisplayInfo();
	void Add() override;
	void Edit() override ;
	void Delete() override ;
	void GetAll() override ;

};

