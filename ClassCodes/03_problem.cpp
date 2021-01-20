//Take Input N, then take input marks of N students and find their average score

#include<iostream>
using namespace std;


int main(){

	int N; //No of Students
	cin>> N;
	int total_sum = 0;

	int marks;

	for(int i=0;i<N;i++){
		cin>> marks;
		total_sum = total_sum + marks;
	}

	cout<<"Total Sum "<<total_sum <<endl;
	cout<<"Marks "<<float(total_sum)/N <<endl;

	return 0;
}