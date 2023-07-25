#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
 
int main(){
      
       int n;cin>>n;
         vector<int> ar(n);
         for (int i = 0; i < n; ++i)
         {
         	cin>>ar[i];
         }
         int c =0;
         sort(ar.begin(),ar.end());
         for (int i = 0; i < n; ++i)
         {
         	if(ar[i] != ar[i+1]) c++;
         }
 
         cout<< c<<endl;
 
return 0;
}