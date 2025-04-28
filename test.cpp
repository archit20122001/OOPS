#include<bits/stdc++.h>
using namespace std;
int main()
{
    string Name;
    float Salary, BasicSalary, HRA, DA, PF;
    cout<<"Enter the name of the employee: ";
    getline(cin,Name);
    cout<<"Enter the Basic Salary: ";
    cin>>BasicSalary;
    DA=0.6*BasicSalary;
    HRA=0.35*BasicSalary;
    PF=0.12*BasicSalary;
    Salary=BasicSalary+HRA+DA-PF;
    cout<<"The Salary is: "<<Salary;
    return 0;
}