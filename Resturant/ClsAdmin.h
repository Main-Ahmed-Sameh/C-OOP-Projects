#pragma once
#include <iostream>
#include <string>
using namespace std;
#include "ClsUser.h"
#include "ClsRepositary.h"

class ClsAdmin:public virtual ClsUser, public ClsRepositary
{
private:
	string JobName;
public:
	ClsAdmin(string id, string name, string email, string password,
		string phone, string city, string location, string jopname);
	void ShowOrder() override;
	void DisplayInfo();
	void ContactUser();
	void CancelOrder();
	void Add() override;
	void Edit() override;
	void Delete() override;
	void GetAll() override;










};

