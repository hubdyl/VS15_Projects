#include "User.h"

using namespace std;


int User::idUser1 = 1000;
User::User()
{

}

User::User(string nU, string sU, string pU) :nameUser(nU), surnameUser(sU), passwordUser(pU) {
	cout << "User has been created Name: " << getName() << "....." << endl;
	idUser1 += 1;
	idUser = idUser1;
}


User::~User()
{
	cout << "User has been deleted ... " << endl;
}


void User::changeName(string nameUser) {
	this->nameUser = nameUser;
}

void User::changesName(string surnameUser) {
	this->surnameUser = surnameUser;
}

void User::changePassword(string passwordUser) {

	this->passwordUser = passwordUser;
}

string User::getName() {
	return nameUser;
}

string User::getsName() {
	return surnameUser;
};

string User::getPassword() {
	return passwordUser;
}
int User::getID() {
	return idUser;
}

User * User::getUser(int index, vector<User*> container){
	
	User * u1 = new User();
	u1 = container[index];

	return u1;
}