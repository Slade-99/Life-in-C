#include <bits/stdc++.h>
using namespace std;

int main()
{

    set<int> s;

    s.insert(1);
    s.insert(10);
    
    auto it = s.find(1);

    if(it==s.end()){
        cout<<"yes"<<endl;
    }


    cout<<(s.count(4))<<endl;




    





    return 0;
}


