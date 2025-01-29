#include<iostream>
using namespace std;

int duplicateElement(int arr[], int size){

    int ans = 0;

    for(int i = 0; i<size ; i++){

        ans = ans^arr[i];

       
    }

    for(int i =1; i<size; i++){
            ans = ans^i;
        }

    return ans;
}


int main(){

    int arr[10] =  {1, 4, 3, 5, 8, 7, 2, 6, 9,4};

    cout<<"duplicate element is :"<<duplicateElement(arr,10)<<endl;


    return 0;
}