#include <iostream>
#include <string>
#include "Main_Menu.h"

using namespace std;

string to_lower(string str) {

	string lower = "";

	for (char ch : str) {

		lower += tolower(ch);
	}

	return lower;
}

int main_menu() {

	bool flag = false;

	while (!flag) {

		system("cls");

		cout << "\n\n\t\t\tDo you have already account? ( y / n)\n>> ";

		string option;

		cin >> option;

		option = to_lower(option);

		if (option == "y" || option == "yes") {

			system("cls");

			cout << "\n\n\t\t\tAccount Login" << endl;

			flag = login();

		}
		else if (option == "n" || option == "no") {
			
			system("cls");

			cout << "\n\n\t\t\tAccount Registration" << endl;

			registration();

			flag = true;
		}
		else {

			cout << "Enter correct option" << endl;
		}
	}
	
	return 0;

}