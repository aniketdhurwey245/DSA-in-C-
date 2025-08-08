#include<iostream>
using namespace std;
void printSum(int arr[][4], int row, int col){
    for(int row = 0; row<4; row++){
        int sum = 0;
        for(int col = 0; col<3; col++){
            sum += arr[row][col];
        }

        cout<<sum<<" ";
    }
    cout<<endl;
}
int main(){
    int arr[3][4];

    cout<<"Enter the elements"<<endl;

    for(int  j= 0; j<4; j++){
         for(int i=0; i<3; i++){
             cin>>arr[j][i];//row wise input
         }

    }

    // printing array
    cout<<"printing array"<<endl;
    for(int  j= 0; j<4; j++){
         for(int i=0; i<3; i++){
             cout<<arr[j][i]<<" ";//row wise input
         }

         cout<<endl;

    }


    
printSum(arr, 4, 3);


return 0;
    
}