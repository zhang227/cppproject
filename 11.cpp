#include<iostream>
using namespace std;

int main() {
int*a = new int[100];

	delete a; // must use []  delete a
	
int*p;

	p = new int;

	delete p;

 int*q;  q = new int[100];
	delete [] q;
	
	int* e= & a;
	delete &e;


}
