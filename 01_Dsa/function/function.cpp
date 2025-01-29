#include<iostream>
using namespace std;

int power(int a, int b ){
    int ans = 1;
    for(int i = 1; i<=b; i++){
         ans = ans*a;

         

    }
    return ans;

}

/*to calculate nCr*/

int facto(int n){

    int facto = 1;

 
    for(int i = 1; i<=n;i++ ){

         facto = i*facto;
    }

    return facto;
}

int nCr(int n, int r){

    int ans;

    if( n>r && n>0 ){

         int num = facto(n);

         int denom = facto(r) * facto(n-r);

          ans = num/denom;


    }
    else{
        return 0;
    }


    return ans;

}


int main(){
   /* int a, b;
    cin>>a>>b;
   int answer = power(a,b);
   cout<<answer<<endl;*/

   int n, r;
   cin>>n>>r;
   cout<<"answer is: "<<nCr(n,r)<<endl;

   return 0;
}