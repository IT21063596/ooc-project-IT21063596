#include "staff.h"
#include "administrator.h"
class Doctor
{
     private:
           int doctorID;
           char doctorName[30];
           char d_specialist;
           string d_email;
     public:
           Doctor();
           Doctor(int p_doctorID, char p_doctorName[], char d_specialist, char d_email);
           Void displayDetails ();
           Void login ();
           Char checkAppointment ();
           ~ Doctor();

};



