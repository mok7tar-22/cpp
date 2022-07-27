#include <iostream>
using namespace std;
 int main(){
     int number;
     int counter=0;
     cout<<"Multiplication table for a number: ";
     cin>>number;
     while(counter<11){
        cout<<number<<" * "<<counter<<" = "<<number*counter<<endl;
        counter++;
     }


 return 0;
 }

