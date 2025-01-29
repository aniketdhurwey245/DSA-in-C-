#include<iostream>
using namespace std;
int main(){
int n;
cin>>n;
int m;
cin>>m;
int k=1;
int i = 1;
while(i<=n){
   int j = 1;
   while(j<=n){
      cout<<j;
      j++;
   }
  cout<<endl;
   i++;
}

//revese printing
cout<<"reverse printing"<<endl;

while(k<=n){
   int l = 1;
   while(l<=n){
      cout<<n-l+1;
      l++;
   }
  cout<<endl;
   k++;
}


   return 0;
}