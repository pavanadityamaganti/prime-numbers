#include<iostream>
using namespace std;
int main()
{
	int a,fac=0;
	cout<<"enter the number :";
	cin>>a;
	for(int i=1;i<=a;i++)
	{
		if(a%i==0)
		{
			fac+=1;
		}
	}
	if(fac==2)
	{
		cout<<"it is prime number";
	}
	else
	{
		cout<<"it is not prime number";
	}
	return 0;
}

