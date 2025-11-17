#pragma once
#include <iostream>
#include <string>
using namespace std;
#include "ClsUser.h"
#include "ClsRepositary.h"
class ClsResturant : public virtual ClsUser,public ClsRepositary
{
private:
	string Logo;
	string TaxCard;
	string Telephone;
	public:
		ClsResturant(string id, string name, string email, string password,
			string phone, string city, string location, string logo, string taxcard, string telephone);
		void DeliverOrder();
		void ShowOrder() override;
		void ApproveOrder();
		void DisplayInfo();
		void Add() override;
		void Edit() override;
		void Delete() override;
		void GetAll() override;






};

