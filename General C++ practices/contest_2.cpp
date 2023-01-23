#include <bits/stdc++.h>
using namespace std;

int main()
{

    


    int test_cases;
    cin>>test_cases;


    for(int i=0;i<test_cases;i++)
    {

        long long int value;
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

            

            long long int result = ((value-1)*(value))%(m);
            long long int result_2 = ((result)*(answer))%(m);
            cout<<result_2<<endl;

        }






    }



















    return 0;



}


