#include<iostream>
using namespace std;
int main(){
    // create 2 D array
    int arr[3][4];
    cout<<"enter the array"<<endl;
    // for(int i = 0; i<3; i++){
    //     for(int j=0; j<4; j++){
    //         cin>>arr[i][j];//row wise input
    //     }

    // }

    // taking input col wise

    for(int j = 0; j<4; j++){
         for(int i=0; i<3; i++){
             cin>>arr[i][j];//row wise input
         }

    }

    // output
    for(int i = 0; i<3; i++){
        for(int j=0; j<4; j++){
            cout<<arr[i][j]<<" ";
        }

        cout<<endl;

    }
    
    return 0;
}