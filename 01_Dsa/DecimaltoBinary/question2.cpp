/* power of Two*/
#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=0; i<=30; i++){
        int ans= pow(2,i);
        if(ans==n){
            cout<<"1"<<endl;
            return true;
        }  
    }
    cout<<"0"<<endl;
    return 0 ;
}