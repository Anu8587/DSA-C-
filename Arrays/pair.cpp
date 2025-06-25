#include <bits/stdc++.h>
using namespace std;
int main(){
  int arr1[] = {1,2,3,4};
  int arr2[] = {5,6,7,8};
  int n = sizeof(arr1)/sizeof(arr1[0]);
  int m = sizeof(arr2)/sizeof(arr2[0]);
  int sum  = 0;
  int max_sum = 0;
  for ( int i =0; i< n; i++){
    for (int j = 0; j < m;j++ ){
       sum = arr1[i]+arr2[j];
       
       max_sum = max(max_sum,sum);
       }
       
    }
  
  cout<<max_sum;

}