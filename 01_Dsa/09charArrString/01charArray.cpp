#include<iostream>
using namespace std;

bool checkPallindrome(char a[], int n){
    int s = 0;
    int e = n-1;
    while(s<=e){
        if(a[s] != a[e]){
            return 0;
        }
        else{
            s++;
            e--;
        }
    }
    return 0;
}

void reverse(char name[], int n){
    // reverse an string
    int s= 0;

    int e = n-1;
    while(s<e){
        swap(name[s++],name[e--]);
    }
}

int getLength(char name[]){

    // getting length of string

    int count =0;
    for(int i =0; name[i] !='\0'; i++){
        count++;
    }

    return count;
}

int main(){

    char name[20];

    cout<<"Enter your name ";
    cin>>name;
    cout<<"Your name is ";
    cout<<name<<endl;


    return 0;
}