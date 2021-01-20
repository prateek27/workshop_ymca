#include<iostream>
using namespace std;

//Pass By Value
void makeMoney(int &rupees){
	rupees = rupees  + 10;
}


int main(){

	int money = 100;
	makeMoney(money);
	cout << money <<endl;

	/*
	int x = 10;
	int &y = x;

	y++;

	cout << x <<endl;
	cout << y <<endl;
	*/



}