#pragma once
#include <string>
#include <iostream>
#include <vector>


using namespace std;


class User
{

private:
	string nameUser, surnameUser, passwordUser;
	static int idUser1;
	int idUser;

public:
	User();
	User(string nameUser, string surnameUser, string passwordUser);
	~User();


	void changeName(string nameUser);
	void changesName(string surnameUser);
	void changePassword(string passwordUser);



	string getName();
	string getsName();
	string getPassword();
	int getID();
	
	User * getUser(int index, vector<User*> container);

};

