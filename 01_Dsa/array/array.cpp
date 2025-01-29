#include<iostream>
using namespace std;
// array with function
void printArray(int arr[], int size){

    cout<<"printing the array " << endl;

    for(int i = 0; i<size; i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    // declaration of array
    int array[10] = {1};
    
    //initilisation of array

    string car[5] = {"maruti suzuki", "creta", "baleno", "bolero", "bmw" };

    cout<<car[0]<<" ";//accesing of array by index
    cout<<car[1]<<" ";
    cout<<car[2]<<" ";
    cout<<array[0]<<endl;
    int first[15] = {2,3,5,6,9};
    
    printArray(first,10);
    return 0;
}