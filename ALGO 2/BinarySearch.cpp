#include<iostream>
using namespace std;

int main(){
	int nilai[8] = { 10, 21, 32, 33, 47, 59, 60, 100 };
	int search, a, t, b;
	
	//tampilkan isi nilai
	for(int i = 0; i < 8; i++){
		cout<<nilai[i]<<" ";
	}
	cout<<"\n\nSearch angka = "; cin>>search;
	
	a = 0; //indeks awal
	b = 7; //indeks akhir
	
	cout<<t;
	while(a <= b){ //start
		cout<<
		"\na = "<<a<<
		"\nt = "<<t<<
		"\nb = "<<b<<endl;
		t = (a+b)/2; // Metode bagi 2
		if(search > nilai[t]){ // Jika dicari > daripada nilai tengah
			a = t+1;
		} else if(search < nilai[t]){ // Jika dicari < nilai tengah
			b = t-1;
		} else {
			a = b+1; // Jika tidak ditemukan
		}
	}
	
	if(search == nilai[t]){
		cout<<"Angka "<<search<<" ditemukan.";
	} else {
		cout<<"Angka "<<search<<" tidak ditemukan.";
	}
	
	return 0;
}
