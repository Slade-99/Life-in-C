#include <bits/stdc++.h>
using namespace std;

int main()
{

    


    int test_cases;
    cin>>test_cases;


    for(int i=0;i<test_cases;i++)
    {

        int value;
        cin>>value;

        long long int answer = 1;
        long long int m = 1000000007;

        if(value==1)
        {
            cout<<0<<endl;
        }else
        {

            for(int j=1;j<=value;j++)
            {
                answer = (answer*j)%m;



            }

            

            cout<<(answer*2)<<endl;

        }





    }



















    return 0;



}


