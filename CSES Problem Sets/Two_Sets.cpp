 /*******************বিসমিল্লাহির রাহমানির রাহিম **********************/
 /*__________________ MD ASADUZZAMAN SHUVO ______________________ */

#include<bits/stdc++.h>
using namespace std;

#define ll long long
const int INF = 1e9+10;
const int N = 1e5+10;
void display(vector<ll> &v) {
  for (auto i : v) {
    cout << i << " ";
  }
  cout << endl;
}
int main()
{
 int n;cin>>n;
   
  vector<ll> a, b;
 
  if (n % 4 == 1 || n % 4 == 2 ) {
    cout << "NO" << endl;
    return 0;
  }
else {
     cout<< "YES" <<endl;
    if(n%4 == 0){
         for (int i = n; i >= 1; i--) {
            if(i%4 == 1 || i%4 == 0){
                a.push_back(i);
            }
            else{
                b.push_back(i);
            }  
        }
    }
    else {
         for (int i = 4 ;i<=n;i++) {
            if(i%4 == 3 || i%4 == 0){
                a.push_back(i);
            }
            else{
                b.push_back(i);
            }
        }
        a.push_back(1);
        a.push_back(2);
        b.push_back(3);
    }
    cout << a.size() << endl;
    display(a);
    cout << b.size() << endl;
    display(b);
  }

    return 0;
}  