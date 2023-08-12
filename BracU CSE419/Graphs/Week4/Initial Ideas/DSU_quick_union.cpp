
// DSU (Quick Union)

#include <bits/stdc++.h>
using namespace std;
const int N= 1e6+10;
int root[N];

int find(int x)
{
    if(x == root[x]){
        return x;
    }else{
        return find(root[x]);
    }
}



void uni(int x,int y)
{
    int rx = find(x);
    int ry = find(y);
    if(rx != ry){
        root[ry]=rx;
    }

}








int main(){

// Taking  input
  freopen("input.txt","r",stdin);
  int n; cin>>n; // 'n' denotes number of nodes.
  int a,b;  // edges 
   

  for(int i=0;i<N;i++)
  {
    root[i] = i;
  }


  while(cin>>a>>b)
  {
        uni(a,b);

}

for(int i=1;i<=n;i++){
  cout<<root[i]<<endl;
}

    
  return 0;
}





