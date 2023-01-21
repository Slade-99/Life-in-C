#include <bits/stdc++.h>
using namespace std;




int main()
{

    

    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    
    
    int test_cases;
    cin>>test_cases;


    for(int i=0;i<test_cases;i++)
    {

        int size_of_array;
        cin>>size_of_array;


        int storage[size_of_array];


        for(int j=0;j<size_of_array;j++)
        {

            int element;
            cin>>element;

            storage[j] = element;




        }


        int count = 0;


        for(int k =0;k<size_of_array-1;k++)
        {

            if(storage[k]%2==0)
            {
                if(storage[k+1]%2==0)
                {
                    storage[k+1]= (storage[k])*storage[k+1];
                    count+=1;

                }else{
                    continue;

                }

            }else{

                if(storage[k+1]%2 !=0)
                {
                    storage[k+1]= (storage[k])*storage[k+1];
                    count+=1;
                }else{
                    continue;
                }
            }

        }


        cout<<count<<endl;








    }










    return 0;
}

