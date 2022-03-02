#include<iostream>
using namespace std;
int n[5];
int j, t, r;
int main(){

	for(int i=1; i<=5; i++){
		cout << "Data" <<i<< ": ";
		cin>>n[i];
		t = t + n[i];	
	}
	j= sizeof(n)/sizeof(n[0]);
	r= t/j;
	cout<< "banyaknya data: "<<j<<endl;
	cout<< "jumlah:"<<t<<endl;
	cout<< "rata-rata: " << r << endl;
}
