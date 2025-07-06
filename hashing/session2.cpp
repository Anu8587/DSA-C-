#include<bits/stdc++.h>
using namespace std;
//brute force
int sumPair(const vector<int> &arr, int sum){
 /* int count = 0;
  for(int i = 0; i < arr.size();++i){
    for (int j = i+1; j<arr.size();++j){
      if(arr[i]+arr[j] == sum){
        count++;
        
      }
    }
  }
 return count;*/


 unordered_map<int,int> hash_map;
 int count = 0;

 for(int i = 0; i<arr.size(); ++i){
  int complement = sum - arr[i];
  if(hash_map.find(complement) != hash_map.end()){
    count = count + hash_map[complement];
  }
  hash_map[arr[i]]++ ;
 }
 
 for(const auto& pair: hash_map){
  cout<< pair.first <<pair.second<<endl;
 }
 return count;
}

int main(){
  int n;
  cin>>n;
  vector<int> arr(n);
  for(int i =0;i<n;++i){
    cin>>arr[i];
  }

  int sum;
  cin>>sum;

  cout<<sumPair(arr,sum);

  return 0;
}