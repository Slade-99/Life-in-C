#include <bits/stdc++.h>
using namespace std;

/*

    ordered map keeps everything lexiocgraphically sorted

    declaration map<type,type> name;

    count(x) counts the first one (the key)
    find(x) returns an iterator that is to be passed in erase()
    lower_bound(x)

*/


int main()
{

    map<string,int> a;


    a["star"] = 1;
    a["planet"] = 2;
    a["comet"] = 3;
    a["nebula"] ; // value is set to 0

    
    // each elements are a pair
    auto x = a.find("nebula");
    a.erase(x);
    
    cout<<(a.find("star")!=a.end())<<endl; // result is 1 which means start is found


    for(auto x:a){
        cout<<x.second<<endl;
    }



    //cout<<a.count("a")<<endl;


    return 0;
}