 /*******************বিসমিল্লাহির রাহমানির রাহিম **********************/
 /*__________________ MD ASADUZZAMAN SHUVO ______________________ */

#include<bits/stdc++.h>
using namespace std;

#define ll long long
const int INF = 1e9+10;
const int N = 1e5+10;

int main()
{
ll t;cin>>t;
if(t< 4 && t>1) {cout<< "NO SOLUTION"<< endl; return 0;}
for(int i = 1;i<=t ;i++){
    if(i%2 == 0){
        cout<< i << " ";
    }
}
for(int i = 1;i<=t ;i++){
    if(i%2 != 0){
        cout<< i << " ";
    }
}

    return 0;
}