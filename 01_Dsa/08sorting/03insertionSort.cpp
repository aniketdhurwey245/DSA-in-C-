#include<iostream>
using namespace std;

void insertionSort(int arr[], int n){
    for(int i = 1; i<n; i++){
        // for round 1 to n-1
        int temp = arr[i];
        int j= i-1;
        for(; j>=0; j--){
            if(arr[j]>temp){
                // shift
                arr[j+1]= arr[j];
            }
            else{ //stop
                break;
            }
        }
        arr[j+1]= temp;
    }
}

void printSortedArr(int arr[],int n){

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ,";
    }

}

int main(){
    int arr[10]= {12,1,6,1,2,4,80,34,23,78};

     insertionSort(arr,10);

    cout<<"Sorted array is :"<<endl;
    printSortedArr(arr,10);



    return 0;
}