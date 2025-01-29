#include<iostream>
using namespace std;

int countSetBit(){
    int a, b;
    cout<<"Enter first number:"<<endl;
    cin>>a;
    cout<<"Second number: "<<endl;
    cin>>b;
    int countBitab =0;

    while(a || b != 0){

       int  countBita = a & 1 ;

       int countBitb = b & 1 ;  

        countBitab = countBita + countBitb + countBitab;

       

        a = a>>1;
        b = b>>1;
    }

    cout<<"sets bit of given number is:"<<endl;
    return countBitab;
}

int main(){

    
    

    cout<<countSetBit();
}