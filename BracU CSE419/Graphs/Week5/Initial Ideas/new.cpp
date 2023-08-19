

#include <bits/stdc++.h>
using namespace std;
const int N = 2e5 +7;
typedef long long int ll;


int ara [N];
ll tree[4*N];


ll query(int i , int l ,int r, int a, int b)
{

    if(b<l || a>r)
    {
        return 0;
    }else if(a<=l && r<=b)
    {
       
        return tree[i];
    }


    int mid= (l+r)/2;
    ll p = query((2*i),l,mid,a,b);
    ll q = query((2*i+1),mid+1,r,a,b);

    return p+q;

}

void update(int i, int l, int r, int k, ll u)
{
    int mid = (l+r)/2;

    if(l==r){
        tree[i] += u;
        return;
    }

    if(k<=mid){
        update(2*i,l,mid,k,u);
    }else{
        update((2*i+1),mid+1,r,k,u);
    }



    tree[i] = tree[2*i] + tree[2*i+1];
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

    tree[i] = tree[2*i] + tree[2*i+1];


}



int main(){
  
  
  freopen("input.txt","r",stdin);
  
  int n,q; cin>>n>>q;

  
  for(int i=1; i<=n; i++)
  {
        cin>>ara[i];
  }
    ara[0] = 0;

    for(int i=n; i>0;i--)
    {
        ara[i] -= ara[i-1];
    }


    create_st(1,1,n);

  










    while(q--)
    {
        int t; cin>>t;
        if(t==1){
            int a,b,u;
             cin>>a>>b>>u;
            update(1,1,n,a,u);
            if(b!=n)
            {
            update(1,1,n,b+1,-u);
            }

        }else{
            int k;
            cin>>k;
            ll x = query(1,1,n,1,k);
            cout<<x<<endl;
        }   
    }








  return 0;
}





