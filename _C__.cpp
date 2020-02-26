#include  <iostream> 
using  namespace  std; 
int  main() 
{
	int c[9][9]={0},i,j,x,y=36,flag=0;
	char b[8];
	cin>>b;
	for(i=0;i<8;i++)
	{
		if(b[i]=='*')x=i+1;
		else 
		{
			c[i+1][b[i]-'0']=1;
			y-=(b[i]-'0');
		}
	}
	for(i=1;i<9;i++)
	for(j=1;j<9;j++)
	{
		if(c[i][j]==1)
		{
			if((x-i)==(y-j)||(x-i)==(j-y))flag=1;
		}
	}
	if(flag)cout<<"No Answer";
	else cout<<y;
}

