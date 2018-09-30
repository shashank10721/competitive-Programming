# competitive-Programming
#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int a[1000],b[1000],c[1000],s1=0,s2=0,s3=0,sum;
	for(int i=1;i<1000;i++)
	{
		a[i]=3*i;
		b[i]=5*i;
		c[i]=15*i;
	}
	 
	for(int i=1;i<1000;i++)
	{
		if(a[i]<1000)
		s1=s1+a[i];
		if(b[i]<1000)
		s2=s2+b[i];
		if(c[i]<1000)
		s3=s3+c[i];
	}
	cout<<(s1+s2-s3);

	return 0;
	
 
 
}
