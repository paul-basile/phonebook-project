#include <iostream>
#include <string>
#include <vector>
#include "PhoneBook.h"
using namespace std;
int main() {
	PhoneBook phoneBook;

	phoneBook.addPerson(Person("Yeager", "Eren", "1112223333")); //5 instances of person
	phoneBook.addPerson(Person("Arlert", "Armin", "2223334444"));	   //declared with the help of constructor
	phoneBook.addPerson(Person("Kotomine", "Kirei", "3334445555"));
	phoneBook.addPerson(Person("Mustang", "Roy", "4445556666"));
	phoneBook.addPerson(Person("Spiegel", "Spike", "5556667777"));

	int choice;

	do {													//switch statements are useful for
		cout << "Enter a character to choose: " << endl;	//option selectors
		cout << "(1) Display phone book" << endl;
		cout << "(2) Add a person" << endl;
		cout << "(3) Search for a phone number" << endl;
		cout << "(4) Exit" << endl;
		cout << "--> ";
		cin >> choice;

		switch (choice) {
		case 1: {
			phoneBook.display();			//displays the whole phonebook
			break;
		}
		case 2: {
			string lastName, firstName, phoneNum;		//adding in a person to phoneBook,
			cout << "Enter last name here: ";			//which brings the person to personList
			cin >> lastName;
			cout << "Enter first name here: ";
			cin >> firstName;
			cout << "Enter phone number here: ";
			cin >> phoneNum;

			phoneBook.addPerson(Person(lastName, firstName, phoneNum));
			break;
		}
		case 3: {
			string phoneNum;							//gets the phone number to search
			cout << endl << "Search phone number here: ";
			cin >> phoneNum;
			phoneBook.searchNum(phoneNum);
			break;
		}
		case 4: {									//exits the program
			cout << "Exiting...";
			break;
		}
		default: {
			cout << "Error occured. Please try a new input." << endl;
		}
		}
	} while (choice != 4);

	return 0;
}