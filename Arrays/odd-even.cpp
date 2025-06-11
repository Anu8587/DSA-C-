#include <bits/stdc++.h>
using namespace std;
int main(){
   int arr[] = {1,2,3,4,5,6};
  int n = sizeof(arr)/ sizeof(arr[0]);
  //int even_sum = 0;
 // int odd_sum = 0;
  int even_ind_sum = 0;
  int odd_ind_sum = 0;
  
/* for(int  i =0;i<n; i++){
    if ( arr[i]%2 == 0){
      even_sum += arr[i];

    } else {
      odd_sum += arr[i];
    }
  } */

    for(int  i =0;i<n; i++){
    if ( i%2 == 0){
      even_ind_sum += arr[i];

    } else {
      odd_ind_sum += arr[i];
    }  
   
  }
  //cout<<even_sum<< " "<<odd_sum<<endl;
  cout<<even_ind_sum<< " "<<odd_ind_sum;

}

