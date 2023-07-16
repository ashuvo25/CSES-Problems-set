#include<iostream>
#include<vector>
 
using namespace std;
 
int main(){
 
	int n;cin>>n;
 
	long long arr[n+1]={0};
 
	for (int i = 1; i <=n; ++i)
	{
		long long x;
		cin>>x;
 
		arr[x]++;
	}
 
	for (int i = 1; i <= n; ++i)
	{
		if(arr[i] == 0) cout<< i << " ";
	}
 
 
return 0;
}