#include <iostream>
using namespace std;


/*

    Built in functions:

    swap(a,b)
    max(a,b)
    min(a,b)
    __gcd(a,b) -> gives the LCM


*/



int sub(int a , int b)
{

    int x = a - b;
    return x;

}


void statement()
{

    cout<<"A function is working"<<endl;


}

int ref(int* x,int* y)
{

    *x = *x +50;
    *y = *y +50;

    



}



int main()
{

    cout<<sub(6,3)<<endl;
    
    int x = 50;
    int y = 75;


    ref(&x,&y);
    
    cout<<x<<endl;
    cout<<y<<endl;

    
    
    statement();








}