 /*******************বিসমিল্লাহির রাহমানির রাহিম **********************/
 /*__________________ MD ASADUZZAMAN SHUVO ______________________ */

#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int INF = 1e9+7;
const int N = 1e5+10;
int main()
{
 int t;cin>>t;
  ll n = 1;
  for(int i = 0 ;i<t;i++){
    n = (n*2)%INF;
  }
 cout << n <<endl;
    return 0;
}
