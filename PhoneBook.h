#pragma once
#include <iostream>
#include "Person.h"
#include <vector>
class PhoneBook {
public:
	PhoneBook() {
		capacity = 20;
		personList = new Person[capacity];
		size = 0;
	}
	int getSize() { return size; }
	void searchNum(string phone);
	void addPerson(Person person);

	void display() const;
private:
	Person* personList;
	int size;
	int capacity;
};