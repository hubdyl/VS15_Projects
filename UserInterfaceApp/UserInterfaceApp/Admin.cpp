#include "Admin.h"



Admin::Admin()
{


}

Admin::Admin(string nameUser, string surnameUser, string passwordUser, LEVELADMIN leveladmin):User(nameUser, surnameUser, passwordUser),leveladmin(leveladmin){
	setFunctions(leveladmin);
}

Admin::~Admin()
{
}


/*
void Admin::changePassword(string passwordUser, int index, vector <User*> container1)
{
	if (leveladmin == 0 || leveladmin == 1 || leveladmin == 2){
		container1[index]->changePassword(passwordUser);
	}
}

void Admin::deleteUser(int index, string uwaga, vector <User*> container1) {
	if(leveladmin == 2){
		container1[index]->~User();
	}
}
*/

void Admin::scanUsers(int uID) {
	for (int i = 0; i <= users.size(); i++) {
		if (uID == users[i]->getID()){
			this->index = i;
		}
		else {
			this->index = 0;
		}
	}
}


void Admin::setFunctions(LEVELADMIN leveladmin) {
	if (leveladmin == 0) {
		title = "JUNIOR";
	}
	if (leveladmin == 1) {
		title = "SENIOR";
	}
	if (leveladmin == 2) {
		title = "HEAD";
	}
}


void Admin::saveUsers(vector<User*> u1) {
	file.open("users.txt");
	if (file.good())
	{
		users = u1;
		for (int j = 0; j <= users.size() - 1; j++)
		{
			file << users[j]->getName() << ' ' << users[j]->getsName() << ' ' << users[j]->getPassword()<<' '<<users[j]->getID()<< '\n';
		}
		file.close();

	}
	else {
		cout << "nie udalo sie" << endl;
	}

}

void Admin::getUsers() {
	string name, surname, password, line;
	int id;
	file1.open("users.txt");
	if (file1.good())
	{
		while (getline(file1,line)){
			file1 >> name >> surname >> password>>id;
			users.push_back(new User(name, surname, password));
		}

	}
	else {
		cout << "nie udalo sie" << endl;
	}
}

string Admin::returnTitle() {
	return title;
}

string Admin::getName(int index_user) {
	return users[index]->getName();
}


