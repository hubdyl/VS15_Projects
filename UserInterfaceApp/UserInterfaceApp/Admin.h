#pragma once
#include "User.h"
#include "LEVELADMINr.h"
#include <fstream>


class Admin :	public User
{
private: 

	LEVELADMIN leveladmin;
	
	User * u1;
	string title;
	int index;
	ofstream file;
	ifstream file1;

public:
	
	Admin();
	Admin(string nameUser, string surnameUser, string passwordUser, LEVELADMIN leveladmin);
	~Admin();
	vector<User*> users;

	void setFunctions(LEVELADMIN leveladmin);
	void scanUsers(int uID);
	void saveUsers(vector<User *> u1);
	void getUsers();

	/*
	void changePassword(string passwordUser, int index, vector <User*> container);
	void changeName(string nameUser, User*obj);
	void changsName(string surnameUser, User*obj);
	*/
	
	string getName(int index_user);
	
	string returnTitle();

};

