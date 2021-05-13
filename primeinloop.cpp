#include<iostream>
using namespace std;
int main()
{
	int a,cou=0;
	cout<<"enter the ";
	cin>>a;
	for(int i=2;i<=a;i++)
	{
		if(a%i==0)
		{
			cout<<"not prime";
		}
		else
		{
			cout<<"prime";
		}
	}
	return 0;
}
