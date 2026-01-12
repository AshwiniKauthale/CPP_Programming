#include<iostream>
using namespace std;

///////////////////////////////////////////////////////////////////////////////////
//
//    Function Name :    Swap
//    Input :            Two values of generic type (T, T)
//    Output :           Swap two values (T)
//    Description :      Performs Swapping of two values using template
//    Author :           Ashwini Vishnu Kauthale
//    Date :             11/01/2026
//
///////////////////////////////////////////////////////////////////////////////////

template<class T>
void Swap(T no1, T no2)
{
    T temp = no1;
    no1 = no2;
    no2 = temp;

    cout<<no1<<" "<<no2<<"\n";
}

///////////////////////////////////////////////////////////////////////////////////
//
//    Function Name :    MainX
//    Input :            Values entered by user (generic type)
//    Output :           Nothing
//    Description :      Accepts two values from user and calls Swap() function
//    Author :           Ashwini Vishnu Kauthale
//    Date :             11/01/2026
//
///////////////////////////////////////////////////////////////////////////////////

template<class T>
void MainX()
{
    T Value1,Value2;

    cout<<"Enter First element : "<<"\n";
    cin>>Value1;

    cout<<"Enter Second element : "<<"\n";
    cin>>Value2;

    Swap(Value1,Value2);
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