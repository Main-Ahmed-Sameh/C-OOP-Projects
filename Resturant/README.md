# Restaurant Management System

A C++ object-oriented programming project demonstrating core OOP concepts including inheritance, polymorphism, virtual functions, and virtual inheritance. This project was created as a learning exercise to understand advanced OOP principles in C++.

## 📋 Overview

This project implements a restaurant management system with three main user types:
- **Client**: Customers who can place and manage orders
- **Restaurant**: Restaurant owners who manage orders and menu items
- **Admin**: System administrators who oversee operations

## 🎓 Learning Objectives

This project demonstrates:
- **Inheritance**: Single and multiple inheritance patterns
- **Virtual Inheritance**: Solving the diamond inheritance problem
- **Polymorphism**: Runtime polymorphism through virtual functions
- **Abstract Classes**: Pure virtual functions and abstract base classes
- **Encapsulation**: Private members with public interfaces
- **Function Overriding**: Using the `override` keyword

## 🏗️ Architecture

### Class Hierarchy

```
ClsUser (Base Class)
├── ClsRepositary (Abstract Base Class)
│   ├── ClsClient
│   ├── ClsResturant
│   └── ClsAdmin
└── (Virtual Inheritance)
```

### Key Features

- **Virtual Inheritance**: Resolves diamond inheritance problem between `ClsUser`, `ClsRepositary`, and derived classes
- **Polymorphism**: Demonstrates runtime polymorphism through virtual functions
- **Abstract Classes**: `ClsRepositary` is an abstract base class with pure virtual functions
- **Encapsulation**: Private member variables with public interfaces

## 📁 Project Structure

```
Resturant/
├── ClsUser.h/cpp          - Base user class
├── ClsRepositary.h/cpp    - Abstract repository class
├── ClsClient.h/cpp        - Client class implementation
├── ClsResturant.h/cpp     - Restaurant class implementation
├── ClsAdmin.h/cpp         - Admin class implementation
├── Resturant.cpp          - Main program demonstrating functionality
└── README.md              - This file
```

## 🔧 Classes

### ClsUser
Base class containing common user information:
- ID, Name, Email, Password
- Phone, City, Location
- Virtual `ShowOrder()` function (pure virtual)
- `DisplayInfo()` function

### ClsRepositary
Abstract base class providing CRUD operations:
- `Add()` - Add new items
- `Edit()` - Edit existing items
- `Delete()` - Delete items
- `GetAll()` - Retrieve all items

### ClsClient
Client class for customers:
- Additional fields: Flat, Floor, Phone, SecondPhone, Location
- Functions: `SendOrder()`, `RecieveOrder()`, `ShowOrder()`

### ClsResturant
Restaurant class for restaurant owners:
- Additional fields: Logo, TaxCard, Telephone
- Functions: `DeliverOrder()`, `ApproveOrder()`, `ShowOrder()`

### ClsAdmin
Administrator class:
- Additional field: JobName
- Functions: `ContactUser()`, `CancelOrder()`, `ShowOrder()`

## 🚀 Building and Running

### Prerequisites
- Visual Studio 2019 or later (Windows)
- C++17 or later compiler

### Build Instructions

1. Open `Resturant.sln` in Visual Studio
2. Select configuration (Debug/Release) and platform (x64)
3. Build the solution (Ctrl+Shift+B)
4. Run the executable from `x64/Debug/Resturant.exe`

### Command Line Build (MSBuild)
```bash
msbuild Resturant.sln /p:Configuration=Debug /p:Platform=x64
```

## 💻 Usage

The main program demonstrates:
- Creating instances of Client, Restaurant, and Admin
- Displaying user information
- Polymorphism through base class pointers
- Various operations for each user type

### Example Output
```
========================================
    Restaurant Management System
========================================

--- Creating Client ---
[Client information displayed]

--- Demonstrating Polymorphism ---
Calling ShowOrder() on Client:
Welcome from ClsClient - Viewing your orders...
...
```

## 🎯 Key Concepts Demonstrated

1. **Virtual Inheritance**: Used to resolve diamond inheritance when both `ClsRepositary` and derived classes inherit from `ClsUser`
2. **Pure Virtual Functions**: `ShowOrder()` in `ClsUser` is pure virtual, requiring implementation in derived classes
3. **Function Overriding**: Derived classes override base class functions using the `override` keyword
4. **Polymorphism**: Base class pointers can call derived class implementations

## 📝 Notes

- The project uses virtual inheritance to properly handle the diamond inheritance pattern
- All pure virtual functions from `ClsRepositary` are implemented in derived classes
- The `override` keyword ensures proper function overriding and catches errors at compile time

## 👤 Author

Restaurant Management System - C++ OOP Project

## 📄 License

This project is provided as-is for educational purposes.

