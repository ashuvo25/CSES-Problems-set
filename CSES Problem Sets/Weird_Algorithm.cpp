 /*বিসমিল্লাহির রাহমানির রাহিম */
 /* MD ASADUZZAMAN SHUVO  */

#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
	long long n;cin>>n;
      //cout<< "HLLO"<<endl;
	while(n!=1){
 
		cout << n << " ";
 
		if(n%2 ==  0){
			n = n/2;
		}
		else{
			n =  n*3+1;
		}
		
	}
	if(n == 1) cout<< 1;
	 cout<<  endl;
	 return 0;


    return 0;
}