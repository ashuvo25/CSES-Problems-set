#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
 
int main(){
      long long n,m,k;cin>>n>>m>>k;
      vector<long long> a(n);
      vector<long long> b(m); 
      for (int i = 0; i < n; ++i)
      {
        cin>>a[i];
 
      }
      for (int i = 0; i < m; ++i)
      {
        cin>>b[i];
      }
      long long co = 0;
      sort(a.begin(),a.end());
      sort(b.begin(),b.end());
      
      int i = 0;int j = 0; int apt = 0;
 
      while(i<n && j<m){
        if(abs(a[i] - b[j]) <= k)
        {
          i++;j++ ;apt ++;
        }
        else if(a[i] > b[j] ) j++;
        else i++;
      }
 
cout<< apt <<endl;
 
 
return 0;
}