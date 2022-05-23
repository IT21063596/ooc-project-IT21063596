//admin.h
class admin
{
	private:
		int adminID;
		char adminName;
		char adminUsername;
		char adminEmail;
		int adminPhone;
		char adminPassword;
	public:
		admin();
		admin(int AID,char ANAme,char AUname,char AEmail,int APhone,char APassword);
		void login();
		void manage();
		void updatedeails();
		~admin();
};
