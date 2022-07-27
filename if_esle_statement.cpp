#include <iostream>
using namespace std;

int main(){
   double grade;
   cout<<"Enter your grade: ";
   cin>>grade;
   if(grade<=100&&grade>=90){

       cout<<"You get: A";
   }
   else if(grade<=90&&grade>=80){

       cout<<"You get: B";
   }
   else if(grade<=80&&grade>=70){

       cout<<"You get: C+";
   }
   else if(grade<=70&&grade>=60){

       cout<<"You get: c";
   }
   else if(grade<=60&&grade>=50){

       cout<<"You get: c";
   }

    else if(grade<50){

       cout<<"You get: F";
   }
   else{
    cout<<"Enter Right Number";
   }

    return 0;
}
