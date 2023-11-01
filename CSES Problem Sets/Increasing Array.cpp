 /*******************বিসমিল্লাহির রাহমানির রাহিম **********************/
 /*__________________ MD ASADUZZAMAN SHUVO ______________________ */

#include<bits/stdc++.h>
using namespace std;

#define ll long long
const int INF = 1e9+10;
const int N = 1e5+10;

int main()
{
  ll n; cin>>n;
  vector<ll>v(n);
  ll count = 0; 
  for(int i = 0;i<n; i++) cin>>v[i];
  for(int i = 0;i < n-1 ;i++){
    if(!(v[i] <= v[i+1])){
         count+= abs( v[i] - v[i+1]);
         v[i+1] += abs( v[i] - v[i+1]);
     }
  }
  cout << count <<endl;


    return 0;
}