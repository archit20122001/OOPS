#include<iostream>
using namespace std;
int c=45;
int main()
{
    //**************************Built in Data Types**************************
    //int a,b,c;
    // cout<<"Enter the value of a: "<<endl;
    // cin>>a;
    // cout<<"Enter the value of b: "<<endl;
    // cin>>b;
    // c=a+b;
    // cout<<"The sum is "<<c<<endl;
    // // cout<<"The global c is "<<::c;
    //******************float, double and long double literals********************
    //float d=34.4f;
    //long double e=34.4l;
    //cout<<"The size of 34.4 is "<<sizeof(34.4)<<endl;
    //cout<<"The size of 34.4 is "<<sizeof(34.4f)<<endl;
    //cout<<"The size of 34.4 is "<<sizeof(34.4F)<<endl;
    //cout<<"The size of 34.4 is "<<sizeof(34.4l)<<endl;
    //cout<<"The size of 34.4 is "<<sizeof(34.4L)<<endl;
    //cout<<"The value of d is "<<d<<endl<<"The value of e is "<<e;

    //********************reference variables************************
    //Rohan---->Monty---->Rohu---->dangerouscoder
    // float x=455;
    // float &y=x;
    // cout<<x<<endl;
    // cout<<y<<endl;
    //********************Typecasting*********************
    int a=45;
    float b=45.46;
    cout<<"The value of a is "<<(float)a;
    cout<<"\nThe value of b is "<<float(a);

    cout<<"\nThe value of b is "<<(int)b;
    cout<<"\nThe value of b is "<<int(b);
    int c=int(b);
    cout<<"\nThe expression is "<<a+b;
    cout<<"\nThe expression is "<<a+int(b);
    cout<<"\nThe expression is "<<a+(int)(b);
    return 0;
}