#pragma once
#include <iostream>
#include <string>
using namespace std;

class Document
{
protected:
	string name;
public:
	Document();//if commented out can see compilation error 
	Document(string docName);
	~Document() { cout << " in Doc dtor\n"; }
	void setName(string _name);
	string getName();
	void print();//prints the document
};