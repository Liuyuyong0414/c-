#include<bits/stdc++.h>
using namespace std;
int main()
{
	float a,b,c,d,x,y;
	cin>>a>>b>>c>>d;
	float fushu(float i,float j);
	x=fushu(a,c);
	y=fushu(b,d);
	cout<<fixed<<setprecision(2)<<x<<' '<<y;
}
float fushu(float i,float j)
{
	return (i-j);
}

