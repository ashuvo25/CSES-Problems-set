 /*******************বিসমিল্লাহির রাহমানির রাহিম **********************/
 /*__________________ MD ASADUZZAMAN SHUVO ______________________ */

#include<bits/stdc++.h>
using namespace std;

#define ll long long
const int INF = 1e9+10;
const int N = 1e5+10;

int main()
{
 int t;cin>>t;
   while(t--){
    ll a,b;cin>>a>>b;
     if((a+b)%3 !=0 || (b > 2*a || a > 2*b) ){
        cout<<"NO\n";
        }
      else {cout<<"YES\n";}
   }


    return 0;
}