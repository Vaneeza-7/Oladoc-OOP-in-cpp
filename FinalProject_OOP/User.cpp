#include<iostream>
#include<string>
#include<cctype>
#include<fstream>
#include<cstring>
#include "User.h"
#include"Doctor.h"
#include"Admin.h"
#include"Patient.h"
using namespace std;

int User::numOfUsers = 0;

User::User()
{
    name = "\0";
    emailID = "\0";
    gender = "\0";
    password='\0';
    age = 0;
    for (int i = 0; i < 13; i++) { CNIC[i] = 0; }

    numOfUsers++;
}

void User::setName(string n)
{
	name = n;
}

void User::setGender(string g)
{
	gender = g;
}

void User::setAge(int a)
{
	age = a;
}

void User::setEmailID(string em)
{
	emailID = em;
}

void User::setCNIC(int* cnic)
{
    for (int i = 0; i < 13; i++)
    {
        CNIC[i] = cnic[i];
    }
}

void User::setPassword(string pswd)
{
    if (passwordValidation(pswd))         //If password passes all validation checks then password should be set
    {
        password = pswd;
    }
    while (!passwordValidation(pswd))
    {
        cin >> pswd;
    }
}

bool User::verifyPassword(string pswd)
{
    bool flag = true;
    for (int i = 0; i < 8; i++)
    {
        if (password[i] != pswd[i])
            flag = false;
    }

    return flag;
}

void User::displayMenu()
{
    cout << " welcome to ola doc user. \n";
}

void User::LogIn()
{
    string un1, un2, pswd;
    cout << "Enter userName: ";
    cin >> un1>>un2;
    cout << "Enter Password: ";
    cin >> pswd;
}

string User::getName()
{
	return name;
}

string User::getGender()
{
	return gender;
}

string User::getEmailID()
{
	return emailID;
}

int User::getAge()
{
	return age;
}

int* User::getCNIC()
{
	return CNIC;
}

string User::getPassword()
{
	return password;
}

//void addRecord()
//{
//    ofstream fbout("Doctor.dat", ios::binary | ios::out | ios::app);
//    fbout.write((char*)&Doc, sizeof(Doctor));
//}

void User::Registration()
{
    Doctor doc;
    cout << "***For Registration kindly fill the form*** \n";
    string firstn,lastn, em, gender;
    int a=0;
    string pswd;
    int cnic[13];
    cout << "Enter your Name: ";
    cin>>firstn>>lastn;
    string Name = firstn + lastn;
    doc.setName(Name);
    cout << "Enter your Email Address: ";
    cin>>em;
    doc.setEmailID(em);
    cout << "Enter your gender: ";
    cin>>gender;
    doc.setGender(gender);
    cout << "Enter your age: ";
    cin >> a;
    doc.setAge(a);
    cout << "Enter your CNIC :";
    for (int i = 0; i < 13; i++) {
        cin >> cnic[i];
    }
    /*while (CNICValidation(cnic) == false)
    {
        cout << "Enter valid 13 digit cnic: ";
        cin >> cnic;
    }*/
    doc.setCNIC(cnic);
    cout << "Enter your Password (Password must be 8 characters long with one special charatcer, one digit, one upper case and one lowerCase letter) : ";
    cin >> pswd;
    while (passwordValidation(pswd)==false)
    {
        cin >> pswd;
    }
    doc.setPassword(pswd);
    ofstream fbout("Doctor.txt", ios::binary | ios::out | ios::app);
    fbout.write((char*)&doc, sizeof(Doctor));
    fbout.close();

    int* ptr;
    ptr=doc.getCNIC();

    ifstream fbin("Doctor.txt", ios::binary | ios::in);
    while (fbin.read((char*)&doc, sizeof(Doctor))) {
        cout << "Name \t" << doc.getName() << " CNIC \t";
        for (int i = 0; i < 13; i++) { cout << ptr[i]; }
        cout << endl;
    }
    fbin.close();
}

bool User::CNICValidation(string str)
{
    bool flag = true;
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] < '0' && str[i]>'9')
            flag = false;
    }
    return flag;
}
bool User::passwordValidation(string str)
{
    int digit = 0, lower = 0, upper = 0;
    int special = 0;
    for (int i = 0; str[i]!='\0'; i++)
    {
        if (isdigit(str[i]))
        {
            digit++;
        }

        if (isupper(str[i]))
        {
            upper++;
        }

        if (islower(str[i]))
        {
            lower++;
        }

        if (ispunct(str[i]))
        {
            special++;
        }
    }

    int count = digit + special + upper + lower;

    if (digit == 0 || special == 0 || upper == 0 || lower == 0 || count < 8)
    {
        cout << "Enter valid password: ";
        return false;
    }
    else return true;

}