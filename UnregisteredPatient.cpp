#include "unregisteredPatient.h"
#include <string.h>

unregisteredPatient::unregisteredPatient()
{
	strcpy(patientName, "");
	strcpy(Email, "");
	strcpy(Address, "");
	strcpy(Password, "");
	strcpy(Gender, "");
	Age = 0;
	strcpy(Phone, "0000000000");
}

unregisteredPatient::unregisteredPatient(char Pname[], char PEmail[], char PAddress[], char PPassword[], char Pgender[], int PAge[], char PPhone[]) 
{
	strcpy(patientName,Pname);
	strcpy(Email, PEmail);
	strcpy(Address, PAddress);
	strcpy(Password, PPassword);
	strcpy(Gender, Pgender);
	Age = PAge;
	strcpy(Phone, PPhone);
}

void unregisteredPatient::registerPatient()
{

}

void unregisteredPatient::exploreServices()
{

}

unregisteredPatient::~unregisteredPatient()
{

}