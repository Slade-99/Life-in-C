#include <bits/stdc++.h>
using namespace std;



int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);



    int n,m;

    cin>>n>>m;


    map<int,int> tickets;
    cout<<n<<endl;
    cout<<m<<endl;

    for(int i = 0;i<n;i++)
    {

        int ticket_price;
        cin>>ticket_price;
        tickets[ticket_price]= tickets[ticket_price]+1;





    }


    cout<<"MAP CREATED"<<endl;

    for(int j = 0;j<m;j++)
    {

        int customer_issued;
        cin>>customer_issued;

        auto it = tickets.upper_bound(customer_issued);

        it--;

        cout<<(*it).first<<endl;

        




    








    }











}



















