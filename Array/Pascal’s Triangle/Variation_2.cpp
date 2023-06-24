#include<bits/stdc++>
using namespace std;

int pascalTriangle(int n)
{
	long long ans = 1;
	cout<< ans << " ";

	for (int i = 1;i < n; i++)
	{
		ans=ans*(n-i);
		ans=ans/i;
		cout << ans << " ";
	}
	cout<< endl;
	return 0;
}
int main()
{
	int n =3;
	pascalTriangle(n);
	return 0;
}