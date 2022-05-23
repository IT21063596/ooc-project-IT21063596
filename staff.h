//staff.h
class staff
{
	private:
		int staffID;
		char staffName;
		char staffEmail;
		char staffUsername;
		char staffPassword;
	
	public:
		staff();
		staff(	int sID,char sName,char sEmail,char sUsername,char sPassword);
		void login();
		~staff();
};
