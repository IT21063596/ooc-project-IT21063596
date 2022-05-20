#include "Doctor.h"
class visitingDoctor
{
     private:
           int doctorID;
           char doctorName[30];
           char d_specialist;
           string d_email;
         string d_username;
         string d_password;
         char d_gender;
         int d_age;
         int d_phone;

     public:
           visitingDoctor();
         visitingDoctor (int doctorID, char doctorName, char d_specialist, 
         string  d_email, string d_username, string d_password, char d_gender, int  
         d_age, int d_phone);

        getDoctorDetails() ;
        void displayDoctorDetails();
        voidserveTelemedicine();
        void issuePrescription() ;
         ~ visitingDoctor();
}

