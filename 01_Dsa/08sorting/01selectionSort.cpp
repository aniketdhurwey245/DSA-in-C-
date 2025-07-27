#include<iostream>
using namespace std;
void selectionSort(int arr[], int n){
    
    for(int i=0; i<n-1; i++){
        int minIndex = i;
        for(int j = i+1; j<n; j++){
            if(arr[j]< arr[minIndex]){
                minIndex = j;
            }
        }
        swap(arr[minIndex],arr[i]);
    }
}

void printSortedArr(int arr[],int n){

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ,";
    }

}

int main(){
    int arr[10]= {12,1,6,1,2,4,80,34,23,78};

     selectionSort(arr,10);

    cout<<"Sorted array is :"<<endl;
    printSortedArr(arr,10);
    


    return 0;

    
}