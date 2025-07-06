#include <bits/stdc++.h>
using namespace std;
//brute force
/*bool checkdistance(const vector <int> &arr,int distance){
  int n =arr.size();
  for (int i = 0; i < n; i++){
    for (int j = 0; j< n && j <= i+distance;j++ ){
      if (arr[i] == arr[j]){
        cout<<"yes";
        return true;
      }
    }
  }
 return false;
}
*/

bool checkdistance(const vector <int> &arr,int distance){
  unordered_map<int,int> num;

  for(int i=0; i< arr.size();++i){
    if(num.find(arr[i]) != num.end() && i - num[arr[i]] <= distance){
      return true;
    }
    num[arr[i]] = i;
  }

  return false;
}

int main(){
  int n;
  cin>>n;
  
  vector<int> arr(n);
  for(int i = 0; i<n;++i){
    cin>>arr[i];
  }

  int distance;
  cin>>distance;
  cout<< checkdistance(arr,distance);
  return 0;
} 


