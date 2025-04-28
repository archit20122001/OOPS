#include<iostream>
using namespace std;
int main()
{
    int Quotient,Remainder,Dividend,Divisor;
    cout<<"Enter the dividend:\n";
    cin>>Dividend;
    cout<<"Enter the Divisor:\n";
    cin>>Divisor;
    Quotient=Dividend/Divisor;
    Remainder=Dividend%Divisor;
    cout<<"Quotient is "<<Quotient<<endl;
    cout<<"Remainder is "<<Remainder;
}