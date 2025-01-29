#include<iostream>
using namespace std;
void aP(){
     int a, d, n;
     cout<<"enter the first term:"<<endl;

    cin>>a;

    cout<<"enter the common difference:"<<endl;

    cin>>d;

    cout<<" number where you want to print a series:"<<endl;

     cin>>n;

    int an;


    for(int i =1; i<=n; i++){

        an = a+(i-1)*d;

         cout<<an<<" ";
    }
    
  cout<<"nTH term :"<<an;
  


}

int main(){

    aP();



    return 0;
}