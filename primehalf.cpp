#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a,cou=0;
	cout<<"enter the number :";
	cin>>a;
	for(int i=2;i<=a/2;i++)
	{
		if(a%i==0)
		{
			cou+=1;
		}
    }
	    if(cou==0)
		{
			cout<<"prime";
	    }
	    else
	    {
	    	cout<<"not prime";
	    }
	return 0;	
}
