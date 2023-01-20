#include <bits/stdc++.h>
using namespace std;



/*

-> push_back() : add an element to the end of the vector
-> pop_back()  : removes the last element
-> access[]
-> size():  size of the vector
-> resize(n): change the size of the vector
-> intialize vector<int> a(2); -> means creating a vector of length 2 with all elements as 0
->                       a{2,34,5} -> means vector is created with these items
-> clear()
-> erase(index with iterator) -> erases the given element
-> find(it.begin,it.end,element)
-> reverse(it.being,it.end)
-> sort(it.begin(),it.begin()+size)



*/

int main()

{

    vector<int> a(2);


    a.push_back(10);
    a.push_back(20);


    
    
    vector<int> b{2,3,4,5,6};

    //b.clear();


    b.erase(b.begin()+4);

    b.insert(b.begin()+4,6);

    
    auto x = b.begin()+4;
    
    
    x = find(b.begin(),b.end(),4);


    int y = x - b.begin();



    
    //cout<<*x<<endl;

    //cout<<y<<endl;


    reverse(b.begin(),b.end());

    

    sort(b.begin(),b.begin()+3);







    
    for(int i: b){

        cout<<i<<endl;
    }








}


