#pragma once
#include<iostream>
#include"User.h"
using namespace std;

class OlaDoc
{
	User all_users[1000];
public:
	void displayMainMenu()
	{
		int role, choice;
		cout << "\n\t Welcome to OlaDoc! Book in-person or online video appointments with the best Doctors and Specialists such as Gynecologists, Skin Specialists, Child Specialists, Surgeons, ...\n\nBEST SPECIALISTS IN LAHORE.\n\n To book an appointmnet or video consultation with the best doctors in Lahore right now, you can use oladoc.com. oladoc makes appointment booking fast, convenient and affordable by connecting you with the best doctors near you, in a matter of seconds, with no extra charges.\n\nBEST SPECIALISTS IN KARACHI.\n\n To book an appointment or a video consultation with the best doctors in Karachi right now, you can use oladoc.com. oladoc makes appointment booking fast, convenient and affordable by connecting you with the best doctors near you, in a matter of seconds, with no extra charges.\n\n\nBEST SPECIALISTS IN ISLAMABAD.\n\n To book an appointmnet or video consultation with the best doctors in Islamabad right now, you can use oladoc.com. oladoc makes appointment booking fast, convenient and affordable by connecting you with the best doctors near you, in a matter of seconds, with no extra charges.\n\n";

		cout << "Choose your role:\n1.Doctor\n2.Patient\n3.Admin\n\nYour role: ";
		cin >> role;
		all_users[User().numOfUsers];
		switch (role)
		{
		case 1:
			cout << "Please... \n1.Register\n2.Login (if already a member)\n Your choice:  ";
			cin >> choice;
			switch (choice)
			{
			case 1:
				all_users[User().numOfUsers].Registration();
			}

		}
	}


};

int main()
{
	OlaDoc obj;
	obj.displayMainMenu();
	//Doctor doc;
	//User* ptr = &doc;
	//ptr->displayMenu();


}
