#include<iostream>
#include<cmath> // Library math di C++

int main()
{
	double k = 9 * pow(10,-9); // 9 x 10^-9
	double Q1 = 3 * pow(10,-5); // 3 x 10^-5
	double Q2 = 5 * pow(10,-5); // 5 x 10^-5
	double r = 5 * pow(10,-2); // 5 x 10^-2
	double r2 = pow(r,2); // r^2
	double F = k * Q1 * Q2 / r2;
	
	std::cout<<F;
	
	return 0;
}

//int main()
//{
//	double k, Q1, Q2, r, F;
//	k = 9 * pow(10,-9); // 9 x 10^-9
//	Q1 = 3 * pow(10,-5); // 3 x 10^-5
//	Q2 = 5 * pow(10,-5); // 5 x 10^-5
//	r = pow(5 * pow(10,-2), 2); // (5 x 10^-2)^2
//	F = k * Q1 * Q2 / r;
//	
//	std::cout<<F;
//	
//	return 0;
//}
