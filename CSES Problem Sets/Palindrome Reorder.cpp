 /*******************বিসমিল্লাহির রাহমানির রাহিম **********************/
 /*__________________ MD ASADUZZAMAN SHUVO ______________________ */

#include<bits/stdc++.h>
using namespace std;

#define ll long long
const int INF = 1e9+10;
const int N = 1e5+10;

int main()
{
   string s; cin>> s;
   vector<int> count(26);
   for (int i=0;i<s.length();i++) {
      count[s[i] - 65]++;
   }
   int p_check = 0;
   vector<string>even_len,odd_len;

   for (int i=0;i<count.size();i++) {
      if(count[i] % 2 != 0){
        p_check++;
      }
   }
   if(p_check > 1) {
    cout<< "NO SOLUTION" <<endl;
   }
   else{
      if(s.length()%2 == 0){
        //cout<< "EVEN LENGTH STRINGS" << endl;
        for(int i = 0 ;i < count.size() ; i++){
            int val = (count[i] / 2 );
            while (val--){
                  string m(1, 'A' + i);
                    even_len.push_back(m);
            }         
        }
       
      }
      else{
        //cout<< "ODD LENGTH STRINGS" << endl;
          for(int i = 0 ;i < count.size() ; i++){
            int val = (count[i] / 2 );
            while (val--){
                  string m(1, 'A' + i);
                    odd_len.push_back(m);
            }         
        }
          for(int i = 0 ;i < count.size() ; i++){
            if(count[i]% 2 ==  1){
                 string m(1, 'A' + i);
                odd_len.push_back(m);
            }        
        }
      }
      }
      // for even length print
      if(s.length() % 2 == 0) {
           for(int i = 0;i< even_len.size() ; i++){
             cout<< even_len[i];
              }
   reverse(even_len.begin() , even_len.end());

          for(int i = 0;i< even_len.size() ; i++){
          cout<< even_len[i];
          }
      }
 else{
       for(int i = 0;i< odd_len.size() ; i++){
    cout<< odd_len[i];
   }
   reverse(odd_len.begin() , odd_len.end());

   for(int i = 1;i< odd_len.size() ; i++){
    cout<< odd_len[i];
   }
 }
   


    return 0;
}