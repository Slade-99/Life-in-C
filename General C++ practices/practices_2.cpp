# include <bits/stdc++.h>
using namespace std;


int main()
{

    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);



    int test_cases;
    cin>>test_cases;



    for(int i = 0;i<test_cases;i++)
    {


        int elements;
        cin>>elements;



        vector<int> ar[elements];

        map<int,int> combination;


        
        for(int j = 0;j<elements;j++)
        {


            int size;
            cin>>size;


            for(int k=0;k<size;k++)
            {

                int bit;
                cin>>bit;

                ar[j].push_back(bit);
                combination[bit]++;




            }






        }



        
        

        
    
        bool flag_2 = false;

        

        
        for(int x=0 ; x<elements; x++)
        {
            
            int length = ar[x].size();

            bool flag = false;
            
            for(int m=0;m<length;m++)
            {
                
                int target = (ar[x])[m];


                
                int result = combination[target]-1;

                
                
                if(result==0)
                {
                    flag = false;
                    break;

                }
                
                if(m==length-1 & result!=0);
                {
                    flag= true;
                }

            
            }


            
            
            
            
            
            if(flag==false){
                continue;
            }else{
                flag_2 = true;
                break;
            }

        
        
        }


        if(flag_2==false){
            cout<<"No"<<endl;

        }else{
            cout<<"Yes"<<endl;
        }



        
        








    }














    







}


