#include "Doctor.h"

class regularDoctor
{
     private:
           int doctorID;
           char doctorName[30];
           char d_specialist;
           string d_email;
     public:
           regularDoctor();
           reguarDoctor(int p_doctorID, char p_doctorName[], char d_specialist, char d_email);
           Void serverTelemedicine ();
           Void issuePrescription ();
           ~ regularDoctor();

};



