#include<iostream>
using namespace std;
void Tukar(int *, int *);
int main(void){
	int X, Y, Z;
	cout<<"X = ";cin>>X;
	cout<<"Y = ";cin>>Y;
	if(X<Y){
		Tukar(&X, &Y);
	}
	Z = X - Y;
	cout<<"Z = "<<Z<<endl;
}
void Tukar(int *A, int *B){
	int tmp;
	tmp = *A;
	*A = *B;
	*B = tmp;
}

