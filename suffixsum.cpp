#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    vector<int>suffix(n,0);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
  for(int i=0;i<n;i++){
    for(int j=i;j<n;j++){
        suffix[i]+=a[j];
    }
  }
  cout<<"Suffix Sum Array : ";
   for(int i : suffix){
    cout<<i<<" ";
   }
return 0;
}
