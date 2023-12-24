#include <bits/stdc++.h>
using namespace std;

  int main(){

#ifndef  ONLINE_JUDGE
    freopen("input1.txt", "r", stdin);

    freopen("output1.txt", "w", stdout);
  #endif
    int size = 5;

    for(int i=5; i>=0; i--){

      for(int j=0; j<=i; j++){
        cout<<"*";

      }
      cout<<endl;


    }
    return 0;

  }
