#include<iostream>
using namespace std;
int arraySum(int arr[], int n){
    
    int sum = 0;
    for(int i = 0; i<n; i++){

        cout<<arr[i]<<" "<<endl;
 
        sum +=arr[i];
    }
    return sum;
}

int main(){
    int arr[5] = {1,6,4,5,9};

    cout<<"array sum is: "<<arraySum(arr,5)<<endl;

    return 0;
}