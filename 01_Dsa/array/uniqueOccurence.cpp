#include<iostream>
using namespace std;
int findDuplicate(int arr[], int size){
    int ans = 1;
    for(int i= 0; i<size; i++){
        ans= ans ^ arr[i];
    }

    return ans;
}

int main(){
    int n;
    cout<<"Enter the size of Array"<<endl;
    cin>>n;

    int brr[101];
    cout<<"Enter the array"<<endl;

    for(int i = 0; i<n; i++){
        cin>>brr[i];
    }

    cout<<"Duplicate number is :"<<findDuplicate(brr, n)<<endl;


    return 0;
}