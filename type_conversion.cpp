#include <iostream>
using namespace std;

int main(){

    int correct;
    int question;
    cout<<"Enter your correct question you answer:-\n";
    cin>>correct;
    cout<<"Enter your number question:- \n ";
    cin>>question;
    //you use type conversion(cast) to convert int to double
    double score=(correct/(double)question)*100;
    cout<<"You get score: "<<score<<"%";

    return 0;
}
