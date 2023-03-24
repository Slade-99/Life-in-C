#include <bits/stdc++.h>
using namespace std;


/*

-binary search is useful as it reduces the time complexity
-first we must sort becfore starting the binart search
- can be used to search the turning point in series like TTTTTTTTTFFFFFFFFF

*/




int main(){

    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);


    vector <int> v{70,20,40,10,20,80,120,150,30};
    auto it = v.begin();
    auto it_2 = v.end();

    sort(it,it_2);




    int low = 0 ;
    int high = v.size()- 1;
    

    int target = 500;


    while(high>low){
        int mid = (high+low)/2;

        if(v[mid]==target){
            cout<<"Found"<<endl;
            break;
        }
        else if(target<v[mid]){
            high = mid-1;
        }
        else if(target>mid){
            low = mid+1;
        } 
    }



    return 0;
}