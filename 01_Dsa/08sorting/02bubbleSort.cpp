#include<iostream>
using namespace std;

void bubbleSort(int arr[], int n){
    for(int i = 1; i<n; i++){
        // for round 1 to n-1
        bool swapped = false;

        for(int j=0; j<n-i; j++){
            // process element till n-i th index
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                swapped = true;
            }
            
            
        }

        if(swapped == false){
            break;
        }
    }
}

void printSortedArr(int arr[],int n){

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ,";
    }

}

int main(){

    int arr[10]= {12,1,6,1,2,4,80,34,23,78};

     bubbleSort(arr,10);

    cout<<"Sorted array is :"<<endl;
    printSortedArr(arr,10);


    return 0;
}