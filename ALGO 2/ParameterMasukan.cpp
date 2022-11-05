#include<iostream>
using namespace std;
void Luas(int a, int b); //Prototype Procedure
	
	//PARAMETER MASUKAN
int main(){
	int panjang=5,lebar=3;
	Luas(panjang,lebar);
}

void Luas(int p, int l){
	int luas;
	luas=p*l;
	cout<<"Luas = "<<luas<<endl;
}
