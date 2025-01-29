#include<iostream>
using namespace std;

int countOne(int a){

    int n;
    int read = 0;
    cin>>n;
    while(n != 0){
        if(n&1){
            read++;

       
        }
        n = n>>1;
    }
    return read ;

}

int main(){
int a;
    cout<<countOne(a);
    
    
    return 0;

}