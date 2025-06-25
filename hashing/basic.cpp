// brute force

#include<bits/stdc++.h>
using namespace std;

/*
int main() {
  int n;
  cin>> n;
  int arr[n];
  for (int i = 0; i < n;i++){
     cin>> arr[i];
  }


int q;
cin>> q;

for (int i = 0; i < q; i++){
  int query;
  cin>>query;
  int count = 0;
  for( int j = 0;j<n;j++){
    if(arr[j] == query){
      count = count+1;
    }
  }
  cout<<count<<endl;

}

return 0;
}
*/

// optimizing using hash array
/*
int main (){
  int n;
  cin>> n;
  int arr[n];
  int hash[51] = {0};
  for(int i = 0; i<n;i++){
    cin>>arr[i];
    hash[arr[i]] =   hash[arr[i]]+ 1;
  }

  int q;
  cin>> q;
  for ( int i = 0; i<q;i++){
    int query;
    cin>>query;
    int count = hash[query];
    cout<<count<<endl;

  }
  return 0;
}
 */

 // using hash-map
int main (){
  int n;
  cin>> n;
  int arr[n];
  unordered_map<int,int>hash_map;
  for(int i = 0; i<n;i++){
    cin>>arr[i];
    hash_map[arr[i]] =   hash_map[arr[i]]+ 1;
  }

  int q;
  cin>> q;
  for ( int i = 0; i<q;i++){
    int query;
    cin>>query;
    int count = hash_map[query];
    cout<<count<<endl;

  }
  return 0;
}