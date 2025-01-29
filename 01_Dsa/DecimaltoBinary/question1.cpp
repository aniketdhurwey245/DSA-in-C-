#include<iostream>
using namespace std;
int main(){
    int n;
    int m = n;
    cin>>n;
    int mask = 0;

    if(n==0)
    return 1;
       

    while(m !=0){
        
        mask = (mask<<1) | 1;
        

        m = m>>1;
      
    }
     int ans = (~n)&mask;
    cout<<ans<<"\n";

// something error in code

    return 0;
}