#include <bits/stdc++.h>
using namespace std;
int max(int number_1,int number_2){
  int result;

  if(number_1>number_2){
    result = number_1;
  }
  else{
    result = number_2;
  }

  return result;
}
int main(){
  int a,b;
  cin>>a>>b;
  cout<<max(a,b);
}