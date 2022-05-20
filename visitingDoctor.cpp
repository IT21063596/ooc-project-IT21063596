#include "visitingDoctor.h"
#include<cstring>
visitingDoctor::visitingDoctor()
{
  Doctor_ID = 0;
  strcpy(Doctor_name, "");
  strcpy(Specialist, "");
  strcpy(Email, "");
  strcpy(Username, "");
  strcpy(Password, "");
  strcpy(Gender, "");
  strcpy(Age, "");
  strcpy(Phone, "");
}
visitingDoctor::visitingDoctor(int pDoctor_ID, const char pDoctor_name[], const char pSpecialist, const string pEmail, const string pUsername, const string pPassword, const char pGender, int pAge, int pPhone)
{
  Doctor_ID = pDoctor_ID;
  strcpy(Doctor_name, pDoctor_name);
  strcpy(Specialist, pSpecialist);
  strcpy(Email, pEmail);
  strcpy(Username, pUsername);
  strcpy(Password, pPassword);
  strcpy(Gender, pGender);
  strcpy(Age, pAge);
  strcpy(Phone, pPhone); 
}
int visitingDoctor::getvisitingDoctorDetails()
{	
}
void visitingDoctor::displayvisitingDoctorDetails()
{	
}
void visitingDoctor::serveTelemedicine()
{ 
}
void visitingDoctor::issuePrescription()
{
}
visitingDoctor::~visitingDoctor()
{
 //destructor
}


