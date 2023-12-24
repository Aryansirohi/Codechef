#include <bits/stdc++.h>
using namespace std;

  int main()
  {
#ifndef  ONLINE_JUDGE
    freopen("input1.txt", "r", stdin);

    freopen("output1.txt", "w", stdout);

#endif
    int a[10];

    for(int i=0; i<10; i++)
    {
      cout<<" Enter a number \n";
      cin>> a[i];
    }
      cout <<"Numbers are \n";
      for (int i = 0; i < 10; ++i)
      {
        cout << a[i] <<endl;
      }
      return 0;
    
       
  }