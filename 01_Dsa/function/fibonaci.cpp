#include<iostream>
using namespace std;
void fibonaci(int x, int y , int z){

    int nextNumber;

    cout<<x<<" "<<y<<" ";
   
    for(int i = 1; i<=z; i++ ){
        
          nextNumber = x+y;

          cout<<nextNumber<<"  ";

         x = y;

         y = nextNumber;
    }
    
}

/*without arguement*/

void fibonaci(){

    

    int a, b, c;

    cout<<"enter the first number:"<<endl;

    cin>>a;

    cout<<"enter the second number:"<<endl;

    cin>>b;

    cout<<" number where you want to print a series:"<<endl;
    
    cin>>c;


    int nextNumber;

    cout<<a<<" "<<b<<" ";
   
    for(int i = 1; i<=c; i++ ){
        
          nextNumber = a+b;

          cout<<nextNumber<<"  ";

         a = b;

         b = nextNumber;
    }
    
}


int main(){

    int a, b, c;

    cout<<"enter the first number:"<<endl;

    cin>>a;

    cout<<"enter the second number:"<<endl;

    cin>>b;

    cout<<" number where you want to print a series:"<<endl;
    
    cin>>c;

    fibonaci(a,b,c);

    cout<<"for writting clear code"<<endl;

    fibonaci();



    return 0;
}