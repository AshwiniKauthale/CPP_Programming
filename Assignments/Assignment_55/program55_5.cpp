#include<iostream>
using namespace std;

///////////////////////////////////////////////////////////////////////////////////
//
//    Function Name :    Max
//    Input :            Four values of generic type (T, T)
//    Output :           Maximum  values (T)
//    Description :      Return maximum from four values using template
//    Author :           Ashwini Vishnu Kauthale
//    Date :             11/01/2026
//
///////////////////////////////////////////////////////////////////////////////////

template<class T>
T Max(T no1, T no2, T no3, T no4)
{
    if((no1 > no2) && (no1 > no3) && (no1 > no4))
    {
        return no1;
    }
    else if((no2 > no1) && (no2 > no3) && (no2 > no4))
    {
        return no2;
    }
    else if((no3 > no1) && (no3 > no2) && (no3 > no4))
    {
        return no3;
    }
    else
    {
        return no4;
    }
}

///////////////////////////////////////////////////////////////////////////////////
//
//    Function Name :    MainX
//    Input :            Values entered by user (generic type)
//    Output :           Displays Maximum of four values
//    Description :      Accepts four values from user and calls Max() function
//    Author :           Ashwini Vishnu Kauthale
//    Date :             11/01/2026
//
///////////////////////////////////////////////////////////////////////////////////

template<class T>
void MainX()
{
    T Ret;
    T Value1,Value2,Value3,Value4;

    cout<<"Enter First element : "<<"\n";
    cin>>Value1;

    cout<<"Enter Second element : "<<"\n";
    cin>>Value2;

    cout<<"Enter Third element : "<<"\n";
    cin>>Value3;

    cout<<"Enter Fourth element : "<<"\n";
    cin>>Value4;

    Ret = Max(Value1,Value2,Value3,Value4);

    cout<<"Maximum is :"<<Ret<<"\n";
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