#include<bits/stdc++.h>

using namespace std;


int fibo(int x){


    if(x==2 || x==1){
        return 1;
    
    }else{

        return fibo(x-1) + fibo(x-2);
    }
}




int main(){


    cin.tie(0);cout.tie(0);
    ios::sync_with_stdio(false);



    //int x = fibo(8);

/*
    int x;
    cin>>x;

    vector<int> fib(x,0);



    fib[0] = 1;
    fib[1] = 1;

    for(int i=2;i<x;i++){
        fib[i] = fib[i-1] + fib[i-2];

    }

cout<<fib[x-1]<<endl;


*/



    
    return 0;
}