#include <iostream>
#include <cctype>
using namespace std;
 int main(){
   int choice;
   string text;
   cout<<"Enter Text\n";

   getline(std::cin,text);
   int length=text.length();;
   cout<<"The length = "<<length<<endl;
   cout<<text.append(".")<<endl;
   cout<<text.insert(length,"@gmail.com")<<endl;
   cout<<"The character in index 3 is: "<<text.at(3)<<endl;

 return 0;
 }




