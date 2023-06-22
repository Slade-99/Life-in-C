/*
#include <bits/stdc++.h>
using namespace std;

int main() {

  cin.tie(0);
  cout.tie(0);
  double v = 6.000;

  string s;
  getline(cin, s);

  while (s != "0:00") {


      string num1 = "";
      string num2 = "";

      int i = 0;
      while (s[i] != ':'){
        i++;
      }

      int t = 0;
      while (t < i) {
        num1 += s[t];
        t++;
      }

        if(s[i+1]=='0'){
            num2 += s[i+2];
        }else{
            num2 += s[i+1];
            num2 += s[i+2];
        }

        int h = stoi(num1);
        int m = stoi(num2);

        if(h==12){
            h =0;
        }
        double d = 0.083333333333333333333333333;

        double diff = abs(5*(double)h - (double)m + (d*(double)m));

        double result;
        if((v*diff)>180){
            result = (360-diff*6)*(1.000);
        }else{
            result = (diff*6)*(1.000);
        }


       printf("%.3f", result);
       cout<<endl;







    getline(cin, s);
  }

  return 0;
}

*/
