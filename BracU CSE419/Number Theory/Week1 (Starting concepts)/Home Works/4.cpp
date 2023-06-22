/*

#include <bits/stdc++.h>
using namespace std;

int main() {

  cin.tie(0);
  cout.tie(0);
  int answer = 0;

  string s;
  getline(cin, s);

  while (s != "") {
    if (s[((s.size()) - 1)] != '?') {
      bool flag = true;
      string num1 = "";
      string num2 = "";
      string num3 = "";
      int i = 0;
      while (s[i] != '+' && s[i] != '-') {
        i++;
      }

      int t = 0;
      while (t < i) {
        num1 += s[t];
        t++;
      }
      if (s[i] == '-') {
        flag = false;
      }
      t++;

      i++;
      while (s[i] != '=') {
        i++;
      }

      while (t < i) {
        num2 += s[t];
        t++;
      }
      i++;
      while (i < (s.size())) {
        num3 += s[i];
        i++;
      }

      if (flag) {
        if ((stoi(num1)) + (stoi(num2)) == (stoi(num3))) {
          answer += 1;
        }
      } else {
        if ((stoi(num1)) - (stoi(num2)) == (stoi(num3))) {
          answer += 1;
        }
      }
    }

    getline(cin, s);
  }
  cout << answer << endl;
  return 0;
}



*/