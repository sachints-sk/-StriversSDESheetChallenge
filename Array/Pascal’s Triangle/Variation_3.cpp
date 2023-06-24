#include<bits/stdc++>
using namespace std;

vector<int> generateRaw(int raw)
{
	long long ans = 1;
	vector<int> ansRaw;
	ansRaw.push_back(ans);

	for(int col = 1; col < raw; col++)
	{
		ans = ans * ( raw - col );
		ans = ans / col;
		ansRaw.push_back(ans);
	}
	return ansRaw;
}

vector<vector<int>> pascalTriangle(int n)
{
	vector<vector<int>> ans;

	for(int raw = 1;raw <= n;raw++)
	{
		ans.push_back(generateRaw(raw));
	}
	return ans;
}

int main()
{
	int n=5;
	vector<vector<int>> ans= pascalTriangle(n);
	for(auto it : ans){
		for(auto ele : it){
			cout<< ele <<" ";
		}
		cout<<endl;
	}
	return 0;
}