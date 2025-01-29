#include<iostream>
#include<math.h>
using namespace std;
int main(){
/*revese order of the number*/
int n;
cin>>n;
int ans = 0;

while(n !=0){
    
    int digit = n%10;
    ans = (ans*10)+digit;
    n= n/10;


}
cout<<"reverse order of the number entered number: "<<ans<<endl;

}