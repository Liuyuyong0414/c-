#include<bits/stdc++.h>
using namespace std;
int main()
{
	string a,b;
	int c[50],i,j,n1,n2,x=0,min=100;
	for(i=0;i<50;i++)
	a[i]=100;
	getline(cin, a);
	getline(cin, b);
	for(i=0;a[i];i++)
	{
		if(a[i]<='Z')a[i]+=32;
	}
	for(j=0;b[j];j++)
	{
		if(b[j]<='Z')b[j]+=32;
	}
	for(n1=0;n1<i;n1++)
	for(n2=0;n2<j;n2++)
	{
		c[x++]=a[n1]-b[n2];
		if(c[x-1]<0)c[x-1]=-c[x-1];
	}
	for(i=0;i<x;i++)
	if(c[i]<min)min=c[i];
	cout<<min;
}

