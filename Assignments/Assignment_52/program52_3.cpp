#include<iostream>
using namespace std;

///////////////////////////////////////////////////////////////////////////////////
//
//    Function Name :    AddN
//    Input :            Array , size of array (T,int)
//    Output :           Addition
//    Description :      Used to add element from array using template
//    Author :           Ashwini Vishnu Kauthale
//    Date :             11/01/2026
//
///////////////////////////////////////////////////////////////////////////////////

template<class T>
T AddN(T Arr[], int iSize)
{
    T Sum = 0;
    int iCnt = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        Sum = Sum + Arr[iCnt];
    }

    return Sum;
}


///////////////////////////////////////////////////////////////////////////////////
//
//    Function Name :    MainX
//    Input :            Values entered by user (generic type)
//    Output :           Displays Addition of all elements
//    Description :      Accepts three values from user and calls AddN() function
//    Author :           Ashwini Vishnu Kauthale
//    Date :             11/01/2026
//
///////////////////////////////////////////////////////////////////////////////////

template<class T>
void MainX()
{
    int Value = 0;
    T Ret = 0;
    int iCnt = 0;

    cout<<"How many elements you want to insert : \n";
    cin>>Value;

    T *Arr = new T[Value];

    cout<<"Enter elements :\n";

    for(iCnt = 0;iCnt < Value; iCnt++)
    {
        cin>>Arr[iCnt];
    }

    Ret = AddN(Arr,Value);

    cout<<"Summation is : "<<Ret;

    delete[] Arr;
}

///////////////////////////////////////////////////////////////////////////////////
//    Entry Point function
///////////////////////////////////////////////////////////////////////////////////

int main()
{
    MainX<int>();
    return 0;
}