#include<iostream>
using namespace std;

int main()
{
	// BREAK
	int i=1;
	cout<<"BREAK"<<endl;
	do
	{
		cout<<i<<endl;
		i++;
		if(i==3)
		{
			break;
		}
	} while (i <= 5);
	
	// CONTINUE
	cout<<"CONTINUE"<<endl;
	for (int j = 1; j <= 10; j++)
	{
    if (j == 4)
	{
      continue;
    }
    cout << j << "\n";
	}
	
	return 0;
}
