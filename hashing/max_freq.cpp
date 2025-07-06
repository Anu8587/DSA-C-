#include <bits/stdc++.h>
using namespace std;
//to find element with max and min frequency
int main(){
/* brute force
  int n;
  cin>>n;
  int arr[n];
  for(int i = 0; i<n;i++){
    cin>>arr[i];
  }
  
  int maxCount = 0;
  int maxElement = arr[0];
  int minCount = n+1;
  int minElement = arr[0];

  for (int i = 0; i<n; i++) {
    int count = 0;
    for (int j =0; j<n; j++) {
      if (arr[i] == arr[j]){
        count ++;
      }
    }
    if (count > maxCount){
      maxCount = count;
      maxElement = arr[i];
    }

    if ( count < minCount){
      minCount = count;
      minElement = arr[i];
    }

  }
  cout<<maxElement<<endl;
  cout<<minElement;
  return 0;  */


  //optimized using hashing

  int n;
  cin>>n;
  int arr[n];
  unordered_map<int,int>hash_map;
  for(int i = 0; i<n;i++){
    cin>>arr[i];
    hash_map[arr[i]]++;
  }

  int maxCount = 0;
  int maxElement = arr[0];
  int minCount = n+1;
  int minElement = arr[0];

  for (auto it : hash_map){
    int element = it.first;
    int freq = it.second;

    if(freq >maxCount){
      maxCount =freq;
      maxElement = element;
    }
    if(freq <minCount){
      minCount =freq;
      minElement = element;
    }
  }

  cout<<maxElement<<endl;
  cout<<minElement<<endl;

 return 0; 
}