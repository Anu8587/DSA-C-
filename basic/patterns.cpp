#include<bits/stdc++.h>
using namespace std;
int main(){
 // int n; cin>>n;

  /* for (int i = 1; i <= n; i++ ){
    for (int j = 1 ; j <=n; j++){
       cout<< "* ";
    }
   
   cout << endl;

  --------------- patter 1:
   * * * * * 
   * * * * *
   * * * * *
   * * * * *
   * * * * *
  }*/

 /* for (int i=1; i<=n;i++){
    for (int j = 1; j<=i; j++){
      cout << "* " ;
    }
    cout<<endl;
-----------pattern 2
* 
* *
* * *
* * * *
* * * * *    
  } */

// --------------pattern 3
// mirror image of 2nd 
/*  *
   **
  ***
 ****
***** 
for (int i =1; i<=n;i++){
  for(int j=1; j<=n-i ;j++){
    cout<< " ";
  }
  for (int j = 1; j<=i;j++){
    cout <<"*";
  }
  cout <<endl;
} */

//------------------------pattern 5 (pyramid)
/* 5
    * 
   * *
  * * *
 * * * * 
* * * * * 

for (int i = 1; i<= n; i++){
  for ( int j=1; j<=n-i;j++){
    cout<<" ";
  }
  for (int j=1; j<=i;j++){
    cout<<"* ";
  }
  cout<<endl;
} */

//------------pattern 6
for (int i =1; i<=20;i++){
 for(int j=1; j<=10;j++){
 cout<< i*j<< " ";
}
 cout<<endl;
}
}