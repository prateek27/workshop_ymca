#include<iostream>
using namespace std;

void printArray(int marks[],int n){

	cout<<"Printing Marks "<<endl;

	for(int i=0;i<n;i++){
		cout << marks[i] <<" ";
		marks[i] = marks[i]/10;
	}

	return;

}

int main(){

	int marks[] = {10,20,30,40,50};
	int n = sizeof(marks)/sizeof(int);
	//cout<< sizeof(marks) <<" in main" <<endl;
	printArray(marks,n);

	for(int i=0;i<n;i++){
		cout << marks[i] <<" ";
	}


	return 0;
}