#pragma once
#include "User.h"
#include"Time.h"
#include"Feedback.h"
#include"Payment.h"
#include"Appointment.h"
class Doctor :
    public User
{
    string hospital;
    string city;
    float satisfactionScores;
    Time waitTime;
    int experience;
    Feedback Review;
    Payment Balance;
    Time dateOfJoining;
    Appointment listOfAppointments[100];

public:
    Doctor()
    {
        name="Dr. Noname";
        emailID="noname@gmail.com";
        gender="neutral";
        age = 0;
        for (int i = 0; i < 13; i++) { CNIC[i] = 0; }
        password="vcnpldsh";

    }
    virtual void displayMenu();
    void dislplayProfile();
    void editprofile();
    void CheckAppointment();
    void viewPatientHistory();
    virtual void conditionsTreated();


};

