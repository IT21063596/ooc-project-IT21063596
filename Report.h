class Report
{
private:
	int report_ID;
	char report_Type[50];
	int report_ReferanceNumber;
public:
	Reports();
	void setReportDetails(int reportID, char reportType, int reportReferanceNumber);
	int getreportDetails();
	void displayreportDetails();
	void sendreportDetailsToPatient();
	~Reports();
};

