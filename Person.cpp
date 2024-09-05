#include <iostream>
#include "Person.h"
using namespace std;

Person::Person() { //default constructor
	ln = "Undefined";
	fn = "Undefined";
	phone = "0";
}
Person::Person(string lastName, string firstName, string phoneNum) {	//other constructor
	ln = lastName;
	fn = firstName;
	phone = phoneNum;
}