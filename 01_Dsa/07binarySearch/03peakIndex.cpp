// 852 Peak Index in a mountain Array

#include<iostream>
using namespace std;
int peakIndex(int arr[], int size){
    int start =0;
    int end = size-1;
    int mid = start + (end-start)/2;
    while(start<end){
        if(arr[mid]<arr[mid+1]){
            start = mid + 1;
        }
        else{
            end= mid;
        }

        mid = start + (end-start)/2;
    }

    return start;
}


int main(){

    int arr[8] = {1,2,3,4,5,3,2,1};

    cout<<peakIndex(arr,8);


    return 0;
}