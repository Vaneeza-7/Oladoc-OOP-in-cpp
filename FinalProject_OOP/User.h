#pragma once
#include<iostream>
using namespace std;
class User
{
protected:
	string name;
	string emailID;
	string gender;
	int age;
	int CNIC[13];
	string password;

public:
	static int numOfUsers;
	User();
	void Registration();
	bool passwordValidation(string pswd);
	bool CNICValidation(string cnic);
	bool verifyPassword(string pswd);
	void LogIn();
	//void LogOut();
	virtual void displayMenu();
	//Getters and Setters
	void setName(string n);
	void setAge(int a);
	void setGender(string g);
	void setEmailID(string em);
    void setCNIC(int* cnic);
	void setPassword(string pswd);
	string getName();
	string getEmailID();
	string getGender();
	int getAge();
	int* getCNIC();
	string getPassword();

};
