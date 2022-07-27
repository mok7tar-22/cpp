#include <iostream>
#include <cmath>
using namespace std;
 int main(){
     double num1,num2;
     int choice;
     do{
        cout<<"1.pow(x, y) :Returns the value of x to the power of y\n";
        cout<<"2.min(x, y) :Returns the value of x to the power of y\n";
        cout<<"3.max(x, y) :Returns the value of x to the power of y\n";
        cout<<"4.hypot(x, y):Returns sqrt(x^2 +y^2) without intermediate overflow or underflow\n";
        cout<<"5.Exit\n";
         cout<<"Enter your choice\n";
        cin>>choice;
        cout<<"Enter Number1: ";
        cin>>num1;
        cout<<"Enter Number1: ";
        cin>>num2;

        switch(choice){
        case 1:
            cout<<pow(num1,num2)<<endl;
            break;
        case 2:
            cout<<min(num1,num2)<<endl;
            break;
        case 3:
            cout<<max(num1,num2)<<endl;
            break;
        case 4:
            cout<<hypot(num1,num2)<<endl;;
            break;
        case 5:
            cout<<"Exit";
            break;
         default:
             cout<<"Please Enter number between 1-4\n";
             break;
        }

     }while(choice!=5);


 return 0;
 }


