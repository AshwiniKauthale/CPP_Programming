#include<iostream>
using namespace std;

///////////////////////////////////////////////////////////////////////////////////
//
//    Function Name :    Max
//    Input :            Three values of generic type (T, T)
//    Output :           Max Value
//    Description :      Used to find out maximum from three values using template
//    Author :           Ashwini Vishnu Kauthale
//    Date :             11/01/2026
//
///////////////////////////////////////////////////////////////////////////////////

template<class T>
T Max(T no1, T no2,T no3)
{
    if((no1 > no2) && (no1 > no3))
    {
        return no1;
    }
    else if((no2 > no1) && (no2 > no3))
    {
        return no2;
    }
    else
    {
        return no3;
    }
}

///////////////////////////////////////////////////////////////////////////////////
//
//    Function Name :    MainX
//    Input :            Values entered by user (generic type)
//    Output :           Displays Maximum of three values
//    Description :      Accepts three values from user and calls Max() function
//    Author :           Ashwini Vishnu Kauthale
//    Date :             11/01/2026
//
///////////////////////////////////////////////////////////////////////////////////

template<class T>
void MainX()
{
    T Ret;
    T Value1 = 0,Value2 = 0,Value3 = 0;
    
    cout<<"Enter first number : \n";
    cin>>Value1;

    cout<<"Enter Second number : \n";
    cin>>Value2;

    cout<<"Enter third number : \n";
    cin>>Value3;

    Ret = Max(Value1,Value2,Value3);

    cout<<"Maximum is : "<<Ret;
}


///////////////////////////////////////////////////////////////////////////////////
//    Entry Point function
///////////////////////////////////////////////////////////////////////////////////

int main()
{
    MainX<double>();
    return 0;
}