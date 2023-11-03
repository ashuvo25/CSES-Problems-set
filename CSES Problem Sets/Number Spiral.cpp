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
        ll row,column;cin>> row>>column;

        if(row>column){
            if(row%2 == 0){
                cout<< row*row - (column - 1)<<endl;
            }
            else cout<< (row-1)*(row -1 ) + column <<endl;
        }else{
               if(column%2 != 0){
                cout<< column*column - (row - 1)<<endl;
            }
            else cout<< (column-1)*(column -1 ) + row <<endl;
        }

    }

    return 0;
}
