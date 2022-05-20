class Appointment
{
private:
	int appointmentID;
	char appointmentType[50];
	int appointmentDate;
public:
	Appointment();
	int calcappintmentRequest();
	void setappointmentDetails(int appoinID, char appoinType, int appoinDate);
	void getappointmentDetails();
	void makeappointment();
	void displayappointmentDetails();
	~Appointment();
};

