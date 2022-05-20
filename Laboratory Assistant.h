class Laboratory Assistant
{
private:
	int labAssistant_ID :
	char labAssistant_Name[50];
	string labAssistant_Email;
public:
	Laboratory Assistant();
	void setlaboratoryAssistantDetails(int labAssistantID, char labAssistantName, string labAssistantEmail);
	int getlaboratoryAssistantDetails();
	void displaylaboratoryAssistantDetails();
	void collectReport();
	void checkReport();
	void sendReportDetails();
};

