#include<iostream>
using namespace std;
void hitung(int panjang, int lebar, int *luas);
int main(){
	
	//PARAMETER KELUARAN
	int panjang,lebar,luas;
	cout<<"Panjang = ";cin>>panjang;
	cout<<"Lebar = ";cin>>lebar;cout<<endl;
	hitung(panjang,lebar,&luas);
	cout<<"Luas = "<<luas<<endl;
}

void hitung(int A, int B, int *luas){
	*luas=A*B;
}
