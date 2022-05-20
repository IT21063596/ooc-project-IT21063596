class Receptionist
{
private:
	int receptionID;
	char receptionName[50];
public:
	Receptionist();
	void setreceptionistDetails(int recepID, char recepName);
	int getreceptionistDetails();
	void displayreceptionistDetails();
	int getAppointment();
	void sendAppointmentDetailsToPatient();
	void calcpatientPayment();
};

