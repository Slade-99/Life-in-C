

#include <bits/stdc++.h>
using namespace std;
const int N = 2e5 +7;
typedef long long int ll;
const ll INF = 1e18 +7;

int ara [N];
ll tree[4*N];


ll query(int i , int l ,int r, int a, int b)
{

    if(b<l || a>r)
    {
        return INF;
    }else if(a<=l && r<=b)
    {
       
        return tree[i];
    }


    int mid= (l+r)/2;
    ll p = query((2*i),l,mid,a,b);
    ll q = query((2*i+1),mid+1,r,a,b);

    return min(p,q);

}

void update(int i, int l, int r, int k, ll u)
{
    int mid = (l+r)/2;

    if(l==r){
        tree[i] = u;
        return;
    }

    if(k<=mid){
        update(2*i,l,mid,k,u);
    }else{
        update((2*i+1),mid+1,r,k,u);
    }



    tree[i] = min(tree[2*i] , tree[2*i+1]);
}


void create_st(int i, int l, int r)

{

    if(l==r){

        tree[i] = ara[l];
        return;
    }


    int mid = (l+r)/2;



    create_st(2*i,l,mid);
    create_st((2*i+1),mid+1,r);

    tree[i] = min(tree[2*i] , tree[2*i+1]);


}



int main(){
  
  
  freopen("input.txt","r",stdin);
  
  int n,q; cin>>n>>q;

  
  for(int i=1; i<=n; i++)
  {
        cin>>ara[i];
  }



    create_st(1,1,n);

  










    while(q--)
    {
        int t = 2; 
        if(t==1){
            int k;
            ll u; cin>>k>>u;
            update(1,1,n,k,u);

        }else{
            int a,b;
            cin>>a>>b;
            ll x = query(1,1,n,a,b);
            cout<<x<<endl;
        }   
    }








  return 0;
}





