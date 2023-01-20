# include <iostream>
#include <bits/stdc++.h>
using namespace std;

/*

pointer is a data type which holds the address of other data types
& -> address of operator
* -> dereference operator
** -> pointer to pointer


Array does not have any for each loop

sort of an array

sort(arr,arr+size of array)

*/






int main()
{

    int x = 10;

    int* z = &x;

    int** m = &z;


    //cout<<z<<endl<<*z<<endl<<m<<endl;

    
    
    

    int arr[5];

    arr[0] = 7;



    cout<<arr<<endl;



    for(int i =1; i<5 ; i++){
        arr[i] = i+5;

    }



    int* p = arr;
    int b = 0;

    while(b<5){
        
        cout<<*(p++)<<endl;
        b++;

    }

    
    
    int given[4] = {2,9,5,6};

    
    sort(given,given+4);
    
    
    for(int i = 0; i<4;i++){

        cout<<given[i]<<endl;
    }
    
    
    return 0;
}   


