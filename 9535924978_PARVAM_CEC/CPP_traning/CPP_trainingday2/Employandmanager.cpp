/*Employee Salary System Using Inheritance:
=========================================
1. Define a base class named "Employee":

Attributes:
name (string)
id (int)
baseSalary (float)

Constructor(protected):
=======================
* to initialize the instance variables.

Functions(protected):
calculateSalary() → prints base salary only.
display() → prints name, id, and salary (by calling calculateSalary()).

2. Create a derived class "Manager":
Additional attribute(private): bonus (float)
Constructor:
============
Create Constructor and call the Parent Constructor by passing parameters and initialize the remaining attributes.

Override calculateSalary() → salary = baseSalary + bonus
Override display() → prints name, id, and total salary

3. Create a derived class "Developer":
Additional attribute(private): overtimePay (float)

Constructor:
============
Create Constructor and call the Parent Constructor by passing parameters and initialize the remaining attributes.

Override calculateSalary() → salary = baseSalary + overtimePay
Override display() → prints name, id, and total salary

4. In the main() function:
Create one Manager and one Developer object using hardcoded values.
Call their respective display() methods to show full details and computed salaries.*/
#include <iostream>
#include <string>
using namespace std;

// Base class: Employee
class Employee {
protected:
    string name;
    int id;
    float baseSalary;

public:
    Employee(string n, int i, float bSalary)
        : name(n), id(i), baseSalary(bSalary) {}

    virtual float calculateSalary() {
        return baseSalary;
    }

    virtual void display() {
        cout << "Name: " << name << endl;
        cout << "ID: " << id << endl;
        cout << "Salary: " << calculateSalary() << endl;
    }
};

// Derived class: Manager
class Manager : public Employee {
private:
    float bonus;

public:
    Manager(string n, int i, float bSalary, float b)
        : Employee(n, i, bSalary), bonus(b) {}

    float calculateSalary() override {
        return baseSalary + bonus;
    }

    void display() override {
        cout << "Manager Details:" << endl;
        cout << "Name: " << name << endl;
        cout << "ID: " << id << endl;
        cout << "Total Salary: " << calculateSalary() << endl;
    }
};

// Derived class: Developer
class Developer : public Employee {
private:
    float overtimePay;

public:
    Developer(string n, int i, float bSalary, float otPay)
        : Employee(n, i, bSalary), overtimePay(otPay) {}

    float calculateSalary() override {
        return baseSalary + overtimePay;
    }

    void display() override {
        cout << "Developer Details:" << endl;
        cout << "Name: " << name << endl;
        cout << "ID: " << id << endl;
        cout << "Total Salary: " << calculateSalary() << endl;
    }
};

// Main function
int main() {
    Manager mgr("Alice Johnson", 101, 50000.0f, 10000.0f);
    Developer dev("Bob Smith", 202, 45000.0f, 5000.0f);

    mgr.display();
    cout << endl;
    dev.display();

    return 0;
}