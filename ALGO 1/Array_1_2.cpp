#include<iostream>
using namespace std;

int main()
{
	// SEMESTER 1
	cout<<"SEMESTER 1 \n";
	cout<<"ARRAY 1 DIMENSI \n";
	int arr[3] = { 1, 2, 3 };
	
	for(int i = 0; i < 3; i++)
	{
		cout<<arr[i]<<endl;
	}
	
	cout<<"\nARRAY 2 DIMENSI \n";
	int arr2d[3][3] =
	{ 
		{1, 2, 3},
		{4, 5, 6},
		{7, 8, 9}
	};
	
	for(int i = 0; i < 3; i++)
	{
		for(int j = 0; j < 3; j++)
		{
			cout<<arr2d[i][j];
		}
		cout<<endl;
	}
	
	cout<<"\n====================== \n";
	
	// SEMESTER 2
	cout<<"SEMESTER 2 \n";
	cout<<"ARRAY POINTER 1D \n";
	int arrP[] = {20, 21, 22};
	int *p = arrP;
	for(int i = 0; i < 3; i++){
		cout<<p[i]<<" ";
	}
	
	cout<<"\n\nARRAY POINTER LANJUTAN \n";
	char Kalimat[] = {"Himpunan Mahasiswa Teknik Informatika"};
	char *pKalimat = Kalimat;
	int hBesar = 0, hKecil = 0;
	cout<<"Himpunan Mahasiswa Teknik Informatika \n";
	while(*pKalimat){
		char kar = *pKalimat;
		if(kar >= 'a' && kar <= 'z'){
			hKecil++;
		} else if(kar >= 'A' && kar<='Z'){
			hBesar++;
		}
		pKalimat++;
	}
	cout<<"Huruf Besar ada = "<<hBesar<<endl;
	cout<<"Huruf Kecil ada = "<<hKecil;
	
	return 0;
}
