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
     
     for(int i = 1; i<= t; i++){
        ll ans =((pow(i,2) *(pow(i,2)-1))/2 - (4*(i-2)*(i-1)));
        cout<< ans <<endl;
     }
 
    return 0;
}