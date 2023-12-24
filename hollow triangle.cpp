#include <bits/stdc++.h>
using namespace std;

  int main(){

#ifndef  ONLINE_JUDGE
    freopen("input1.txt", "r", stdin);

    freopen("output1.txt", "w", stdout);
  #endif
    int size = 5;

    for(int i=0; i<=size; i++){

      for(int j=0; j<=i; j++){
        if(i=1 || i=size || j=1 || j=size-1){
          cout<<"*";
        }
      }
      else{
        cout<<" ";
      }
      cout<<endl;


    }
    return 0;

  }
