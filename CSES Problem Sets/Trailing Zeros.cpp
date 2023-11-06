 /*******************বিসমিল্লাহির রাহমানির রাহিম **********************/
 /*__________________ MD ASADUZZAMAN SHUVO ______________________ */

#include<bits/stdc++.h>
using namespace std;

#define ll long long
const int INF = 1e9+10;
const int N = 1e5+10;

int main()
{
 ll n ;cin>>n;
   ll max_count = 0;

   while(n / 5 > 0 ){
    max_count += (n/5);
    n = n/5;
   }
 
  cout<< max_count <<endl;
    return 0;
}