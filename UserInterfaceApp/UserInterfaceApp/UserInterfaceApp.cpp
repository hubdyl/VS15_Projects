#include <iostream>
#include "Admin.h"
#include "User.h"
#include "MADMIN.h"
#include "JADMIN.h"

int main()
{
	
	vector <User*> container2;
	Admin a1;
	
	a1.getUsers();

	cout << a1.getName(3) << endl;
	cout << a1.users.size() << endl;
	//Admin * a1 = new Admin("Hubert", "Dylag", "plokijuh12", SENIOR);
	/*
	for (int i = 0; i <= 5; i++) {
		
		container2.push_back(new User("Wlodzimierz", "Chuj", "zenek"));
	}

	for (int j = 0; j <= 5; j++)
	{
		cout << container2[j]->getID() << endl;
	}
	
	a1.saveUsers(container2);
	
	/*
	a1->changePassword("tomasz", 3, container2);
	container2[1]->changePassword("asd");
	a1->deleteUser(1, "jebsie", container2);
	cout << container2[1]->getsName() << "PUCHA" << endl;
	cout << a1->returnTitle() << endl;
	*/
	
	return 0;
}