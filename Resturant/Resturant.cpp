#include <iostream>
#include <string>
using namespace std;
#include "ClsUser.h"
#include "ClsClient.h"
#include "ClsResturant.h"
#include "ClsAdmin.h"

int main()
{
    cout << "========================================" << endl;
    cout << "    Restaurant Management System" << endl;
    cout << "========================================" << endl << endl;

    // Create a Client
    cout << "--- Creating Client ---" << endl;
    ClsClient Client("1", "Ahmed", "ahmed@email.com", "1232341pas", 
        "01156958156", "Cairo", "Egypt", "4", "2", "01155676427", "Client Location");
    Client.DisplayInfo();
    cout << endl;

    // Create a Restaurant
    cout << "--- Creating Restaurant ---" << endl;
    ClsResturant Restaurant("10C46", "LavaSteak", "lavafire@email.com", "potatoes234",
        "01156958156", "Cairo", "Egypt", "CUSTOMER IS ALWAYS RIGHT", "taxcard", "1992");
    Restaurant.DisplayInfo();
    cout << endl;

    // Create an Admin
    cout << "--- Creating Admin ---" << endl;
    ClsAdmin Admin("ADM001", "Admin User", "admin@restaurant.com", "admin123",
        "01111111111", "Cairo", "Egypt", "System Administrator");
    Admin.DisplayInfo();
    cout << endl;

    // Demonstrate polymorphism with ShowOrder()
    cout << "--- Demonstrating Polymorphism ---" << endl;
    ClsUser* user;
    
    user = &Client;
    cout << "Calling ShowOrder() on Client:" << endl;
    user->ShowOrder();
    cout << endl;

    user = &Restaurant;
    cout << "Calling ShowOrder() on Restaurant:" << endl;
    user->ShowOrder();
    cout << endl;

    user = &Admin;
    cout << "Calling ShowOrder() on Admin:" << endl;
    user->ShowOrder();
    cout << endl;

    // Demonstrate Client operations
    cout << "--- Client Operations ---" << endl;
    Client.SendOrder();
    Client.Add();
    Client.GetAll();
    cout << endl;

    // Demonstrate Restaurant operations
    cout << "--- Restaurant Operations ---" << endl;
    Restaurant.ApproveOrder();
    Restaurant.DeliverOrder();
    Restaurant.Add();
    cout << endl;

    // Demonstrate Admin operations
    cout << "--- Admin Operations ---" << endl;
    Admin.ContactUser();
    Admin.CancelOrder();
    cout << endl;

    cout << "========================================" << endl;
    cout << "    Program Execution Complete" << endl;
    cout << "========================================" << endl;

    return 0;
}
