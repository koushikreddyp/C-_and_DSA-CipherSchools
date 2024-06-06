#include<iostream>

using namespace std;

int main() 
{
    int a, b, c, d;
    cout<< "Enter the Integer Value for a: ";
    cin>>a;
    cout<< "Enter the Integer Value for b: ";
    cin>>b;
    cout<< "Enter the Integer Value for c: ";
    cin>>c;
    cout<< "Enter the Integer Value for d: ";
    cin>>d;


    cout<<(a>b || c>d); //Either one (or) both the conditions are true than the output will be 1.
    cout<<endl;
    cout<<(a>b && c>d); //If both the conditions are true than the output will be 1.
}