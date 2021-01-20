#include<iostream>
using namespace std;


int main(){


	int prateek = 10;

	float pi = 3.14;

	cout << prateek <<endl;

	//printing address without storing
	cout<< "Address of prateek " << &prateek <<endl;
	cout << "pi ka address "<< &pi <<endl;

	//Pointer  (storing address)
	int *prateek_address = &prateek;
	float *pi_address; //declare
	pi_address = &pi;

	//printing the pointer value (which stores address)
	cout << prateek_address <<endl;
	cout << pi_address <<endl;



	return 0;
}