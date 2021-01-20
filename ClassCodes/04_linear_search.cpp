#include<iostream>
using namespace std;


int main(){

	int marks[] = {10,20,30,40,18,25,13};

	//find index of the student who score 's', print -1 if student doesnt exist with marks s
	int s;
	cin>> s;

	//Linear Search
	int N  = sizeof(marks)/sizeof(int);

	int i;

	for(i=0;i<N;i++){
		if(marks[i]==s){
			cout<<"Student found at "<<i<<" index"<<endl;
			break;
		}
	}
	if(i==N){
		cout<< -1 <<" Not found"<<endl;
	}

	return 0;
}