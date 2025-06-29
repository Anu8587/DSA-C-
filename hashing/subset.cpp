#include<bits/stdc++.h>
using namespace std;
//brute (without duplicates)
/*int main(){
 int arr1[]={6,7,3,2};
 int arr2[]={2,3};
 int a1 = sizeof(arr1)/sizeof(arr1[0]);
 int a2 = sizeof(arr2)/sizeof(arr2[0]);

 for(int i=0; i<a2;i++){
   bool found = false ;
   for(int j =0; j<a1;j++){
    if (arr2[i] == arr1[j]){
       found = true;
       break;
    }
    
    }
    if(found == false){
      cout<< "not a subset";
      return 0;
    }

   }

   cout<<"subset";
   return 0;
 }*/

 //-----------------
//hashing 
/*
 int main(){
   int arr1[]={6,7,3,2};
 int arr2[]={2,3};
 int a1 = sizeof(arr1)/sizeof(arr1[0]);
 int a2 = sizeof(arr2)/sizeof(arr2[0]);

 unordered_set<int> st;
 for(int i = 0;i <a1;++i){
  st.insert(arr1[i]);
 }

 for(int i = 0;i<a2;++i){
  if(st.count(arr2[i]) == 0){
    cout<<"no";
    return 0;
  }
 }
 cout<<"subset";
 return 0;
 } */

 //--------hashing subset with duplicates
 int main(){
  int arr1[]={6,7,7,3,2};
 int arr2[]={2,5};
 int a1 = sizeof(arr1)/sizeof(arr1[0]);
 int a2 = sizeof(arr2)/sizeof(arr2[0]);
 map<int,int>mp;
 for(int i =0; i<a1;++i){
  mp[arr1[i]]++;
 }

 for(int i = 0; i<a2; ++i){
  if(mp[arr2[i]] == 0){
    cout<<"no";
    return 0;
    
  }
  mp[arr2[i]] --;
  
 
 }
 cout<<"yes";
 return 0;
 }