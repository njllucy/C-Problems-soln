#include <bits/stdc++.h>
using namespace std;
int main()
{
    int m,n;
    cin>>m>>n;
    vector<vector<int>>v(m,vector<int>(n));
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            cin>>v[i][j];
        }
    }
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(v[i][j]==0)
            {
                //row
                for(int j=0; j<n; j++)
                {
                    if(v[i][j] != 0)
                    {
                        v[i][j]=-1;
                    }
                }
                //col
                for(int i=0; i<m; i++)
                {
                    if(v[i][j] != 0)
                    {
                        v[i][j]=-1;
                    }
                }
            }
        }
    }
  for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
        if(v[i][j]==-1){
            v[i][j]=0;
        }
    }
  }
   for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
     cout<<v[i][j]<<" ";
    }
    cout<<endl;
  }

    return 0;
}
