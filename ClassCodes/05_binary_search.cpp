#include<iostream>
using namespace std;


int main(){
	//Sample Input Sorted Array
	int a[] = {10,12,15,16,19,25,32};
	int n = sizeof(a)/sizeof(int);

	int key;
	cin>>key;


	int s = 0;
	int e = n - 1;
	int mid ;

	while(s<=e){
		mid = (s+e)/2;

		if(a[mid]==key){
			cout << "Found at "<<mid<<endl;
			break;
		}
		else if(a[mid] > key){
			e = mid - 1;
		}
		else{
			s = mid + 1;
		}
	}
	if(s>e){
		cout << "No such element"<<endl;
	}

	return 0;
}