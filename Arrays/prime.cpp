#include <bits/stdc++.h>
using namespace std;
int main(){
  int start = 5;
  int end = 500;
  int count_prime=0;

  for(int i = start; i<= end; i++){
    int count = 0;
    for (int j = 1; j<= i; j++){
      if(i%j == 0){
        count++;
      }
    }
    if(count == 2){
      count_prime++;
      
    }
  }
  cout<<endl;
  cout<<count_prime;
}