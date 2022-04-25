#pragma once
#include <iostream>
#include <string>
//Example to show order of constructors and destructors
// in containing class and derived class
using namespace std;
class Door
{
public:
	Door() { cout << "Door was created" << endl; }
	~Door() { cout << "Door was destructed" << endl; }
};

class House
{
	Door door;
public:
	House() { cout << "House was created" << endl; }
	~House() { cout << "House was destructed" << endl; }
};
class Villa :public House
{
public:
	Villa() { cout << "Villa was created" << endl; }
	~Villa() { cout << "Villa was destructed" << endl; }
	void privateGarden() { cout << "Beatuful..." << endl; }
};
