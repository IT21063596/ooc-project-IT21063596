#include "website.h"
class unregisteredPatient {
private:
	char patientName[50];
	char Email[25];
	char Address[50];
	char Password[20];
	char Gender[10];
	int Age;
	char Phone[10];

public:
	unregisteredPatient();
	unregisteredPatient(char Pname[], char PEmail[], char PAddress[], char PPassword[], char Pgender[], int PAge[], char PPhone[]);
	void registerPatient();
	void exploreServices();
	~unregisteredPatient();
};
