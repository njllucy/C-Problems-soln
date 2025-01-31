//Using PREFIX sum
#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cin>>n;
  int a[n+1],fre[n+1]={0};
  for(int i=1;i<=n;i++){
    cin>>a[i];
  }
  int que,l,r,v;
  char ch;
  cin>>que;
  while(que--){
    cin>>ch>>l>>r>>v;
    if(ch=='+'){
        fre[l]+=v;
        if(r+1<=n){
                if(v>0)
            fre[r+1]-=v;
        }
    }else{
        if(v>0){
        fre[l]-=v;
          if(r+1<=n){
            fre[r+1]+=v;
        }}else{
               fre[l]+=v;
                 if(r+1<=n){
            fre[r+1]-=v;
        }
        }
    }
  }
 for(int i=1;i<=n;i++){
    fre[i]+=fre[i-1];
  }
 for(int i=1;i<=n;i++){
    a[i]+=fre[i];
  }
  for(int i=1;i<=n;i++){
    cout<<a[i]<<" ";
  }
}
