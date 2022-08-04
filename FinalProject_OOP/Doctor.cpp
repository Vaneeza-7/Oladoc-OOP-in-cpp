#include "Doctor.h"


// make a menu for display menu and call funcs of registration and login in switch caes. Then save that in file. make funcs for docread and doc write doc.
// the same display menu will give switch case to options like view profile, update profile, delete pofile..view patient history



void Doctor::displayMenu() {
	int choice;
	cout << "Welcome Doctor\n 1. View Profile \n2. Edit Profile\n3.View Pateient History\n 4. LogOut\n Your choice; ";
	cin >> choice;
	switch (choice)
	{
	case 1:
		dislplayProfile();
		break;
	case 2:
		editprofile();
		break;
	case 3:
		viewPatientHistory();
		break;
	case 4:
		//LogOut();
		break;
	}

 }
void Doctor::dislplayProfile()
{

}
void Doctor::editprofile() {

}
void Doctor::CheckAppointment()
{

}
void Doctor::viewPatientHistory() {

}

void Doctor::conditionsTreated()
{

}
