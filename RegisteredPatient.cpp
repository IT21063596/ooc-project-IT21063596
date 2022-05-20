#include "registeredPatient.h"
#include <string.h>

registeredPatient::registeredPatient()
{
	patientID = 0;
	strcpy(Password, "");
}

registeredPatient::registeredPatient(int ID[], char PPassword[])
{
	patientID = ID;
	strcpy(Password, PPassword);
}

void registeredPatient::bookAnAppointment()
{

}

void registeredPatient::exploreServices()
{

}

registeredPatient::~registeredPatient()
{

}