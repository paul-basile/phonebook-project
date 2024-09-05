#include <iostream>
#include <string>
#include <vector>
#include "PhoneBook.h"
using namespace std;

void PhoneBook::searchNum(string phone) {
	Person people;
	for (int i = 0; i < size; i++) {		//takes in a number, if a number in the list
		if (personList[i].GetPhone() == phone) {		//is exactly equal that, displays that person
			people = personList[i];					//and their number
			people.display();
		}
	}
}

void PhoneBook::addPerson(Person person) {
	if (size == capacity) {						//double the capacity for more array storage
		capacity *= 2;
		Person* temp = new Person[capacity];	//copying elements to temp
		for (int i = 0; i < size; i++) {
			temp[i] = personList[i];
		}
		delete[] personList;		//deleting old size of personList
		personList = temp;			//personList size is doubled
	}
	personList[size] = person;
	size++;
}

void PhoneBook::display() const {		//creates a person object, uses it to display the personList with
	Person people;																		//people.display()
	cout << "Contents of phone book: " << endl;
	for (int i = 0; i < size; i++) {
		people = personList[i];
		people.display();
	}
}