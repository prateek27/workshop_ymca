#include<iostream>
using namespace std;


int main(){

	int arr[6]={0};
	int n = sizeof(arr)/sizeof(int);

	//Input
	int no;
	for(int i=0;i<=n-1;i++){
		cin >> no;
		//Processing
		if(no%2==0){
			arr[i] = no*2;
		}
		else{
			arr[i] = no/2;
		}
	}

	//Output
	for(int i=0;i <n;i++){
		cout<< arr[i] <<",";
	}
	return 0;
}