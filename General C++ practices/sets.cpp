#include <bits/stdc++.h>
using namespace std;




/*


    It is not a linear data structure like array so iterator cannot be incremented by integers
    rather ++ is applicable to move to the next node


    insert(x)
    count(x)
    find(it.begin(),it.end(),x) -> returns an iterator holding of the position of "x"
    erase(it)
    size()
    lower_bound(<it.begin(),it.end(),x) returns iterator holding any value of x or just greater than x
    upper_bound(x) returns iterator holding any value greater than x




*/






int main()
{

    set<int> s{7,3,4,5,6};

    
    s.insert(10);

    ///int y = s.count(3);

    //cout<<y<<endl;
    
    

    
    
    vector<int> v{4,6,2,1,8};

    auto m = v.begin()+7;





    
    

    auto x = find(s.begin(),s.end(),4);



    s.erase(x);





    //cout<<*x<<endl;

    


   





    
    
    
    
    
    for(int x:s){
        cout<<x<<endl;
    }

    auto z = lower_bound(s.begin(),s.end(),1);



    cout<<*z<<endl;




}