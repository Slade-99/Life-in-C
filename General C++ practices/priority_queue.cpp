#include <bits/stdc++.h>
using namespace std;



int main()
{

    priority_queue<int> pq;

    pq.push(100);
    pq.push(130);
    pq.push(180);
    pq.push(150);
    pq.push(200);
    pq.push(110);



    //cout<<pq.top()<<endl;   // pointing at the highest element

    //cout<<pq.size()<<endl;

    


    //pq.pop();
    //cout<<pq.size()<<endl;


    while(pq.size()!= 0)
    {
        cout<<pq.top()<<endl;
        pq.pop();


    }











    return 0;
}