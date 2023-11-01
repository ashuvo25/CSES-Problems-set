 /*******************বিসমিল্লাহির রাহমানির রাহিম **********************/
 /*__________________ MD ASADUZZAMAN SHUVO ______________________ */

#include<bits/stdc++.h>
using namespace std;

#define ll long long
const int INF = 1e9+10;
const int N = 1e5+10;

int main()
{
    int t;
    cin>>t;
    long long arr[t];
    for (int i = 0; i < t; i++)
    {
        cin>>arr[i];
    }
    long long sum = 0;long long maxs = arr[0];
    for (int i = 0; i < t; i++)
    {
        sum += arr[i];
      maxs =   max(maxs,sum);
        if(sum<0) sum = 0;
    }
    cout<<maxs<<endl;
    



    return 0;
}