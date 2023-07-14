 /*বিসমিল্লাহির রাহমানির রাহিম */
 /* MD ASADUZZAMAN SHUVO  */

#include<bits/stdc++.h>
using namespace std;

#define ll long long
int arr[1000];

int main()
{
  //memset(arr,-1,sizeof(arr));
    string s; cin>> s;
    int cnt = 1;int op = 1;
    for (int i = 0;i<s.size();i++){
         
          if(s[i] == s[i+1]) {
            cnt++;
            op = max(op,cnt);
          }
          else{
            cnt = 1;
          }
    }
    
   cout<< op <<endl;
    
    return 0;
}