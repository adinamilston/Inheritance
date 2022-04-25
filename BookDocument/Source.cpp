#include "Book.h"
#include "Document.h"
#include <iostream>
using namespace std;
void f(Document d) 
{ 
	d.print();
	cout << " in f\n";
}
void g(Book b) { cout << " in g\n"; }
int main()
{
	Document d;
	d.setName("targil1sadna.txt");
	Book b;//looking for default ctor for father
	Book b1("mybook", 100, 80.7);
	d.print();
	b1.Document::print();
	b1.print();//book print

	f(d);
	f(b1);//upcasting, only has document part
	g(b1);
	//g(d);
	Document* db = new Book("Anne of Green Gables", 700, 120.8);
	db->print();//here the document print will be called;
	return 0;
	
}