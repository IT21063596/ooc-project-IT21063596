#include "website.h"
class  registeredPatient {
private:
	int patientID;
	char Password;

public:
	registeredPatient();
	registeredPatient(int ID[], char PPassword[]);
	void bookAnAppointment();
	void exploreServices();
	~registeredPatient();
};
