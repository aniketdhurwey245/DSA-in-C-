#include<iostream>
using namespace std;

int pivotElement(int arr[], int n){
    int start = 0;
    int end = n-1;
    int mid = start +(end-start)/2;

    while(start<end){
        if(arr[mid]>=arr[0]){
            start = mid +1;
        }
        else{
            end = mid;
        }

         mid = start +(end-start)/2;

    }
    
    return start;
}

// binary search function

int binarySearch(int arr[], int s,int e, int key){
    int start = s;
    int end = e;
    int mid = start + (end-start)/2;

    while(start<=end){
        if(arr[mid]== key){
            return mid;
        }
        else if(arr[mid]>key){
            end = mid-1;
        }
        else{
            start = mid+1;
        }

        mid = start + (end-start)/2;
    }

    return -1;

}

int main(){

    int n=10;
    int index;

    int key;
    cout<<"Enter key whose index you want to find is :"<<" "<<endl;
    cin>>key;
    int brr[10] ={5,6,7,8,9,25,1,2,3,4};
    int pivot = pivotElement(brr,10);

    if(brr[pivot]<= key && key<=brr[n-1]){
        index = binarySearch(brr, pivot, n-1, key);

    }
    else{
        index = binarySearch(brr,0, pivot-1, key);
    }

    cout<<"index is "<<index<<endl;



    return 0;

}