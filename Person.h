#pragma once
#include <iostream>
#include <string>
using namespace std;

class Person {
public:
	Person();	//default constructor
	Person(string, string, string);		//other constructor
	void SetLast(string last) { ln = last; }	//setters
	void SetFirst(string first) { fn = first; }
	void SetPhone(string phn) { phn = phone; }
	string GetLast() const { return ln; }		//getters
	string GetFirst() const { return fn; }
	string GetPhone() const { return phone; }
	void display() const {			//displays people, called in phonebook
		cout << "Name: " << fn << " " << ln << endl << "Phone: " << phone << endl << endl;
	}
private:
	string ln;
	string fn;
	string phone;
};