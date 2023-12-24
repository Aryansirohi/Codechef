#include <bits/stdc++.h>
using namespace std;

  int main()
  {
#ifndef  ONLINE_JUDGE
    freopen("input1.txt", "r", stdin);

    freopen("output1.txt", "w", stdout);
#endif

    

  int numbers[5] = {7, 5, 6, 12, 35};

  cout << "The numbers are: ";

  
  for (const int &n : numbers) {
    cout << n << "  ";
  }

  cout << "\nThe numbers are: ";

  
  for (int i = 0; i < 5; ++i) {
    cout << numbers[i] << "  ";
  }

  return 0;
  }