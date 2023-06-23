#include<bits/stdc++.h>
using namespace std;

int ncr(int n, int r)
{
	long long res=1;
	for(int i=0;i<r;i++)
	{
		res=res*(n-i);
		res=res/(i+1);
	}
	return res;
}

int pascalTriangleElement(int r,int c)
{
	int element= ncr(r-1,c-1);
	return element;
}

void main()
{
	int r=5;
	int c=3;
	int element = pascalTriangleElement(r,c);
	cout<<element;
}
