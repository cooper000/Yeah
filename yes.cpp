#include <iostream>
using namespace std;
int main(){
    char op; //operation
    double a; //first user input
    double b; //second user input

    cout<<"Please Enter Your First Number: "<<endl;
    cin>>a;

    cout<<"Please Enter Your Second Number"<<endl;
    cin>>b;

    cout<<"Please Enter Your Operation/Sign: "<<endl;
    cin>>op;  

    if (op == '+')
    {
        cout<<a+b<<endl;
    } else if (op == '-')
    {
        cout<<a-b<<endl;
    } else if (op == '*')
    {
        cout<<a*b<<endl;
    } else if (op == '/')
    {
        cout<<a/b<<endl;
    } else {
        cout<<"Could Not Read The Operation You Have Entered... "<<endl;
    }     
}
