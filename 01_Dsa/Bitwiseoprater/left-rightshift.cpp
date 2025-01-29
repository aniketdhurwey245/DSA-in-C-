#include<iostream>
using namespace std;
int main(){
    int a = 4;
    int b = 6;
    /*performing left and right shift operator*/

    cout<<"left shift operator  "<<(17<<1)<<endl;
    cout<<"left shift operator  "<<(17<<2)<<endl;
    cout<<"right shift operator  "<<(19>>1)<<endl;
    cout<<"right shift operator  "<<(19>>2)<<endl;

    /*fibonacci series*/
    cout<<a<<" "<<b<<" ";
    for(int i=0; i<10; i++){
        int nextNumber = a  + b;
        cout<<nextNumber<<" ";
        a = b;
        b = nextNumber;
    }
    return 0;

}