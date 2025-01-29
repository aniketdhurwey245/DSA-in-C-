#include<iostream>
using namespace std;

 int isPrime(int n){

     

    for(int i = 2; i<n; i++){

        if( n % i== 0){

          cout<<"num is not prime";

          return 0;

          
        }

       

        
    }
     
    return 1;


}

bool isEven(){
    int x;
    cin>>x;
    if(x & 1){
        
        return 0;
    }
    return 1;
}

int main(){

    int n;
    cin>>n;

   cout<< isPrime(n)<<endl;

   //cout<<isEven()<<endl;

    return 0;
}