//admin.cpp
#include "admin.h"
#include "staff.h"
#include<iostream>
using namespace std;
admin::admin(int AID,char AName,char AUname,char AEmail,int APhone,char APassword)
{
	adminID=AID;
	adminName=AName;
	adminUsername=AUname;
	adminEmail=AEmail;
	adminPhone=APhone;
	adminPassword=APassword;
}
void admin::login()
{
}
void admin::manage()
{
}
void admin::updatedeails()
{
}
admin::~admin()
{
}



