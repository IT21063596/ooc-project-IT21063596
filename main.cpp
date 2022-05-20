#include<iostream>
#include<string>
#include<Admin.h>
#include<staff.h>
#include<Doctor.h>
#include<Regular Doctor.h>
#include<Visiting Doctor.h>
#include<unregisteredPatient.h>
#include<registeredPatient.h>
#include<Appointment.h>
#include<Receptionist.h>
#include<Laboratory Assistant.h>
#include<Report.h>

using namespace std;

int main()
{
	//admin
	admin * nAdmin;
	nAdmin = new admin(AD2394, "S.M.Sunil", "Sunil", sunilkaruna34@gmail.com, 0773465234);//Create admin object
	nAdmin -> updatedetails();//Updating Details

	//staff
	staff * nStaff;
	nStaff = new staff(ST3495, "P.M.Zoisa", zoizared123@gmail.com, Zoiza);//Create staff object

	//Doctor
	Doctor * doc;
	doc = new Doctor(DC5673, "P.R.Priyanath", "Dentist", priynaththushara34@gmail.com);//Create doctor object

	//Regular_Doctor
	Regular_Doctor * R_Doctor;
	R_Doctor = new Regular_Doctor(DC5673, "P.R.Priyanath", "Dentist", priynaththushara34@gmail.com);//Creating Regular Doctor

	//visiting_Doctor
	Visiting_Doctor * V_Doctor;
	V_Doctor = new Visiting_Doctor(DC5673, "P.R.Priyanath", "Dentist", priynaththushara34@gmail.com);//Create Visiting Doctor
	V_Doctor -> displayvisitingDoctorsDetails();

	//unregestered patient 
	unregisteredPatient * UN_patient;
	UN_patient = new unregisteredPatient("A.D.Siriwardhana", siriwardhanaphp@gmail.com, "Malabe", "Male", 0763457645);//Create unregistered patient object
	UN_patient -> registerPatient();

	//registered patient
	registeredPatient * R_patient;
	R_patient = new registeredPatient(PT3547);//Create registered patient

	//Appointment
	Appoitnment * appoint;
	appoint = new Appointment(AP0001, "Dental", 2022 / 03 / 22);//Create Appointment object
	appoint -> setappoinmentDetails(AP0001, "Dental", 2022 / 03 / 22);//set appointment details
	appoint -> displayappoinmentDetails();//display appointment details

	//Receptionist
	Receptionist * recep;
	recep = new Receptionist(RE2354, "W.A.Gamlath");//Create Receptionist object
	recep -> setreceptoinistDetails(RE2354, "W.A.Gamlath");//set receptionist details 
	recep -> displayreceptionistDetails();//display appointment details

	//Laboratory Assistant
	Laboratory_Assistant * labAssistant;
	labAssistant = new Laboratory Assistant(LA2345, "S.P.Samarathunga", samarathunga23@gmail.com);//Create Laboratory Assistant object
	labAssistant -> setlaboratoryAssistanrDetails(LA2345, "S.P.Samarathunga", samarathunga23@gmail.com);//set laboratory assistant details
	labAssistant -> displaylaboratoryAssistantDetails();//display laboratory assistant details

	//Report
	Report * nReport;
	nReport = new Report(RP2343,);//Create Report Object
	nReport -> setReportDetails();//set Report details
	nReport -> displayreportDetails();//display report details

	//Delete dynamic variables
	delete nAdmin;
	delete nStaff;
	delete doc;
	delete UN_patient;
	delete R_patient;
	delete appoint;
	delete recep;
	delete labAssistant;
	delete nReport;

	return 0;
}
