#include <iostream>
using namespace std;
 int main(){
     int number;
     do{
        cout<<"Enter Positive Number: ";
        cin>>number;
     }while(number<0);

     cout<<"The positive number is: "<<number;

 return 0;
 }


