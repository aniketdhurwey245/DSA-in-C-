#include<iostream>
#include<vector>
using namespace std;

void rotateArray(vector<int>&v, int n, int k){
    vector<int>temp(n);
    for(int i =0; i<n; i++){
        temp[(i+k)%n] = v[i];
    }
    // copy the value of temp into v
    v=temp;
}

void print(vector<int>&v, int n){
    for(int i=0; i<n; i++){
        cout<<v[i]<<" ";
    }
    cout<<"  "<<endl;
}

int main(){

    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(6);
    int k;
    cout<<"Enter the key step"<<endl;
    cin>>k;

    rotateArray(v,5,k);

    print(v,5);


  return 0;
}