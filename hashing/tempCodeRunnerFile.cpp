// brute force

#include<bits/stdc++.h>
using namespace std;

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
  cout<<count<<" ";

}
return 0;
}

