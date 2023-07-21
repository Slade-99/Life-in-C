/*
Fibonacci Number
The only input to the code is an integer, n
The output is the n-th Fibonacci number.

Constraints: 1<=n<=1e18

Author: Farhan Feroz
*/

#include <bits/stdc++.h>

using namespace std;

void init_code() {
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif // ONLINE_JUDGE
}

const int N = 100;
const int mod = 1e9 + 7;



struct Matrix {
  int row, col;
  long long int m[N][N];

  // Constructor for the structure Matrix
  Matrix(int row_num, int col_num) {
    row = row_num;
    col = col_num;
    // Initializing with a zero matrix
    for (int i = 0; i < row; i++) {
      for (int j = 0; j < col; j++) {
        m[i][j] = 0;
      }
    }
  }

  // Overloading the multiplication operator
  Matrix operator*(Matrix B) {
    Matrix product(row, B.col);
    // Product is initialized as a zero matrix
    // The following code is the basic matrix multiplication code

    for (int i = 0; i < row; i++) {
      for (int j = 0; j < B.col; j++) {
        for (int k = 0; k < col; k++) {
          product.m[i][j] += m[i][k] * B.m[k][j];
          product.m[i][j] %= mod;
        }
      }
    }

    // Write the basic matrix multiplication code using three nested loops or
    // you can also use Strassen's Matrix Multiplication Algorithm ;p

    return product;
  }
  // The iterative implementation of the fast exponentiation
  Matrix pow(long long int n) {
    Matrix ans(row, col);
    // ans is still a zero matrix
    for (int i = 0; i < row; i++)
      ans.m[i][i] = 1;
    // ans is now the identity matrix

    Matrix a = (*this) * ans;
    // a is basically the original (*this) matrix, the matrix that is to be
    // raised to the power of n. The value of a will get changed but we will not
    // be losing our original (*this) matrix. Well you do not need to preserve
    // the original matrix anyways. It's just a "Bhodrota".
    while (n) {
      if (n & 1) {
        ans = ans * a;
      }
      a = a * a;
      n >>= 1;
    }
    // Hope you recognize the while loop from our iterative implementation of
    // fast exponentiation
    return ans; // Since ans is now holding the final answer.
  }

  void
  print_matrix() // This type of functions are prepared for debugging purposes
                 // mainly. You can print your matrix in any way you wish.
  {
    for (int i = 0; i < row; i++) {
      for (int j = 0; j < col; j++) {
        cout << m[i][j] << " ";
      }
      cout << endl;
    }
  }
};

int main() {
  // init_code();
  ios::sync_with_stdio(false); // this actually makes difference
  cin.tie(NULL);
  cout.tie(NULL);
  long long int n;
  cin >> n;
  Matrix Q(2, 2);

  Q.m[0][0] = 0, Q.m[0][1] = 1;
  Q.m[1][0] = 1, Q.m[1][1] = 1;

  // Q.print_matrix();

  Matrix F(2, 1);

  F.m[0][0] = 0;
  F.m[1][0] = 1;

  // F.print_matrix();

  Matrix Qn = Q.pow(n);

  // Qn.print_matrix();

  Matrix Ans = Qn * F;

  cout << Ans.m[0][0] << endl;
  return 0;
}

