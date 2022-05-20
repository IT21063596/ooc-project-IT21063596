#include "regularDoctor.h"
#include<cstring>
regularDoctor::regularDoctor()
{
  Doctor_ID = 0;
  strcpy(Doctor_name, "");
  strcpy(Specialist, "");
  strcpy(Email, "");
}
regularDoctor::regularDoctor(int pDoctor_ID, const char pDoctor_name[], const char pSpecialist, const char pEmail)
{
  Doctor_ID = pDoctor_ID;
  strcpy(Doctor_name, pDoctor_name);
  strcpy(Specialist, pSpecialist);
  strcpy(Email, pEmail);
}
void Doctor::serveTelemedicine()
{ 
}
void Doctor::issuePrescription()
{
}
regularDoctor::~regularDoctor()
{
 //destructor
}


