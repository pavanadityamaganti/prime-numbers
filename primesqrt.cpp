#include<iostream>
using namespace std;
int main()
{
	int a,cou=0;
	cout<<"enter the number :";
	cin>>a;
	for(int i=2;i*i<=a;i++)
	{
		if(a%i==0)
		{
			cou+=1;
			break;
		}
    }
	if(cou==1)
	{
		cout<<"not prime";
	}
	else
	{
		cout<<"prime";
	}
			
	return 0;
}
