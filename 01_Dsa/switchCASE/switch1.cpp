#include <iostream>
using namespace std;

int main() {
    int amount;
    cout<<"enter the amount"<<endl;
    cin>>amount;
    int count;
   
    int note100 =0,  note50=0 , note20=0 , note1=0;
    char ch;
        switch( ch ){

            case '100':switch(100){

                case 100: note100 = amount/100;
                amount = amount%100;
                cout<<note100<<endl;
                break;

            }
            
           
            case 50:switch(50){

                case 50: note50 = amount/50;
              amount=amount%50;
             break;

            }

            case 20:switch(20){

                case 20:note20 = amount/20;
                amount= amount%20;
                break;

            }

            


            ;case 1: note1 = amount/1;

        
        }
    
           
          

    


   
    return 0;
}
