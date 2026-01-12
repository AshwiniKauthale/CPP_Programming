#include<iostream>
using namespace std;

///////////////////////////////////////////////////////////////////////////////////
//
//    Function Name :    Sub
//    Input :            Two values of generic type (T, T)
//    Output :           Substraction of two values (T)
//    Description :      Performs Substraction of two values using template
//    Author :           Ashwini Vishnu Kauthale
//    Date :             11/01/2026
//
///////////////////////////////////////////////////////////////////////////////////

template<class T>
T Sub(T no1, T no2)
{
    T sum;
    sum = no1 - no2;
    return sum;
}

///////////////////////////////////////////////////////////////////////////////////
//
//    Function Name :    MainX
//    Input :            Values entered by user (generic type)
//    Output :           Displays difference of two values
//    Description :      Accepts two values from user and calls Sub() function
//    Author :           Ashwini Vishnu Kauthale
//    Date :             11/01/2026
//
///////////////////////////////////////////////////////////////////////////////////

template<class T>
void MainX()
{
    T Ret;
    T Value1,Value2;

    cout<<"Enter First element : "<<"\n";
    cin>>Value1;

    cout<<"Enter Second element : "<<"\n";
    cin>>Value2;

    Ret = Sub(Value1,Value2);

    cout<<"Difference is :"<<Ret<<"\n";
}

///////////////////////////////////////////////////////////////////////////////////
//    Entry Point function
///////////////////////////////////////////////////////////////////////////////////

int main()
{
    MainX<int>();
    MainX<float>();

    return 0;
}