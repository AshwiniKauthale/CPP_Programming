#include<iostream>
using namespace std;

///////////////////////////////////////////////////////////////////////////////////
//
//    Function Name :    SumEven
//    Input :            Array , size of array (T, int)
//    Output :           Addition of even value(T)
//    Description :      used to Summation of even values  using template
//    Author :           Ashwini Vishnu Kauthale
//    Date :             11/01/2026
//
///////////////////////////////////////////////////////////////////////////////////

template<class T>
T SumEven(T Arr[], int Size)
{
    int iCnt = 0;
    T Sum = 0;
    for(iCnt = 0; iCnt < Size; iCnt++)
    {
        if((Arr[iCnt] % 2) == 0)
        {
            Sum = Sum + Arr[iCnt];
        }
    }
    return Sum;
}

///////////////////////////////////////////////////////////////////////////////////
//
//    Function Name :    MainX
//    Input :            Values entered by user (generic type)
//    Output :           Sum of even numbers
//    Description :      Accepts N numbers values from user and calls SumEven() function
//    Author :           Ashwini Vishnu Kauthale
//    Date :             11/01/2026
//
///////////////////////////////////////////////////////////////////////////////////

template<class T>
void MainX()
{
    int Value1;
    int iCnt = 0;
    T Ret;

    cout<<"Enter how many element you want to insert :";
    cin>>Value1;

    T *Arr = new T[Value1];

    for(iCnt = 0; iCnt < Value1; iCnt++)
    {
        cin>>Arr[iCnt];
    }

    Ret = SumEven(Arr,Value1);

    cout<<"Sum of even number is :"<<Ret;

    delete[] Arr;
}

///////////////////////////////////////////////////////////////////////////////////
//    Entry Point function
///////////////////////////////////////////////////////////////////////////////////

int main()
{
    MainX <int>();

    return 0;
}