#include<iostream>
using namespace std;
int main(){
    int a, b;
    cout<<"enter the value of a: "<<endl;

    cin>>a;

    cout<<"enter the value of b : "<<endl;

    cin>>b;

    char op;

    cout<<"Enter the operation you want to perform "<<endl;

    cin>>op;

    switch(op){

        case '+': cout<<"sum is :"<<a+b<<endl;
                 break;

        case '-': cout<<"difference is :"<<a-b<<endl;
                 break;

        case '*': cout<<"product is :"<<a*b<<endl;
                break;


        case '/': cout<<"division is :"<<a/b<<endl;
                break;


        case '%': cout<<"reminder is :"<<a%b<<endl;
                 break;

        default:cout<<"please Enter valid operator";


    
    }

}