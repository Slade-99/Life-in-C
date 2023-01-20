#include <iostream>
using namespace std;


int main()

{

    for(int i=0; i<2 ; i++ )
    {

        cout<<i<<endl;
    }
    


    




    int j = 0;
    while(j<5)
    {
        cout<<"J is"<<j<<endl;

        j += 1;

    }

    


    int k = 0;
    do{

        cout<<k<<endl;
        k +=1;
    }while(k<3);



    for(int m= 0 ; m<12 ; m++){

        if(m==10){
            break;
        }
        else if(m==2){
            continue;
        }else{

            cout<<"M is printed"<<m<<endl;

        }
    }


    return 0 ;
}