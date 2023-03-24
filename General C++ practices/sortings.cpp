#include <bits/stdc++.h>
using namespace std;


/*
Sorting helps us in solving many problems


-sort(it.start,it.end)
-to sort in descending order use greater function    -sort(it.start,it.end,greater<int>())

-make pairs and sortings will be done in lexiographical order to make it a stable sort
 and keep track of their indexes

-arrays only work with indices to sort and no iterators are needed.

-for sorting by a different coparator , make that function
 outside the main function and pass it as the third argument

*/

bool com(pair<int,int> x , pair<int,int> y){
        
        if((1.0*x.first/x.second)<(1.0*y.first/y.second)){
            return true;
        }
        else{
            return false;
        }
}







int main(){

    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);

    
    
    
    
    
    
    vector <int> v{60,20,90,40,50};

    int s = v.size();

    vector <pair<int,int>> x(5);

    for(int i=0;i<s;i++){

        
        x[i] = make_pair(v[i],i);


    }    
    
    
    auto it = x.begin();
    auto it_2 = x.end();




    
    
    
    sort(it,it_2,com);

    




    
    
    
    
    
    for(pair<int,int> y : x){

        cout<<y.first<<"  "<<y.second<<endl;
        
    }



    int z[]={10,50,30,20,90,80,65};

    sort(z,z+7);


    for(int i=0;i<7;i++){
        cout<<z[i]<<endl;
    }








    return 0;
}