#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    while(k--){
      for(int i=0;i<n-1;i++){
        int temp=a[i];
        a[i]=a[i+1];
        a[i+1]=temp;
      }
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
return 0;}
