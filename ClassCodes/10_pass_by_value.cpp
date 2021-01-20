#include<iostream>
using namespace std;

//Pass By Value
int makeMoney(int rupees){
	rupees = rupees  + 10;
	cout<<"In make Money "<<rupees<<endl;
}


int changeArray(int array[]){
	arr[0] = 100;
}

int main(){

	int rupees = 50;
	makeMoney(rupees);
	cout<<"In Main "<<rupees <<endl;

	int b[] = {10,20,30};
	cout<<b[0] <<endl;
	changeArray(b);
	cout<<b[0] <<endl;

	return 0;
}