#include<iostream>
using namespace std;

void playSong(string song_name){
	cout << "Playing song ..." <<song_name<<endl;
}

//total = 18% tax 
float apply_gst(int total,float gst_rate=0.18){
	float new_total = (1 + gst_rate) * total;
	return new_total;

}

float bookTickets(int n){
	int ticket_price = 50;
	int total =  ticket_price*n;
	float new_total =  apply_gst(total);
	return new_total;
}


int main(){ //Boss

	//Input from the user and calls play song to function
	string song_name;
	cout<<"Enter song name : ";
	cin>>song_name;

	//calling the function
	playSong(song_name);

	int n;
	cin>>n;
	cout<<bookTickets(n) <<endl;

	return 0;
}