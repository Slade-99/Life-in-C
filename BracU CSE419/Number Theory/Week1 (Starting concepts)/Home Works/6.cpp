/*

#include <bits/stdc++.h>
using namespace std;

int main() {

  cin.tie(0);
  cout.tie(0);
  int r,c;
  cin>>r>>c;



  int num =1;


  while (r!=0 && c!=0) {


    string s;
    vector<string> v;
      for (int i=0;i<r;i++){
        cin >>s ;
        v.push_back(s);
      }
      for(int i=0;i<r;i++){

        for(int j=0;j<c;j++){

        if(v[i][j]=='.'){
        int answer = 0;

        for(int x=-1;x<2;x++){
            for(int y=-1 ; y<2; y++){
                if( (i+x)<r && (i+x)>-1   && (j+y)<c &&  (j+y)>-1 ){
                    if( v[i+x][j+y]=='*'){
                        answer++;
                    }
                }
            }
        }



        v[i][j] = (char) answer+48;

        }



        }
    }


    cout<<"Field #"<<num<<":"<<endl;
    for(string i : v){
        cout<<i<<endl;
    }
    cout<<"    "<<endl;




    cin>>r>>c;
    num++;

  }

  return 0;
}


*/
