#include<iostream>
using namespace std;

///////////////////////////////////////////////////////////////////////////////////
//
//    Function Name :    Reverse
//    Input :            Array , size of array (T, int)
//    Output :           Display array in reverse order
//    Description :      used to display array in reverse order using template
//    Author :           Ashwini Vishnu Kauthale
//    Date :             11/01/2026
//
///////////////////////////////////////////////////////////////////////////////////

template<class T>
void Reverse(T Arr[],int iSize)
{
    int iCnt = 0;

    for(iCnt = iSize-1; iCnt >= 0;iCnt--)
    {
        cout<<Arr[iCnt]<<" ";
    }
}


///////////////////////////////////////////////////////////////////////////////////
//
//    Function Name :    MainX
//    Input :            Values entered by user (generic type)
//    Output :           Nothing
//    Description :      Accepts N values from user and calls Reverse() function
//    Author :           Ashwini Vishnu Kauthale
//    Date :             11/01/2026
//
///////////////////////////////////////////////////////////////////////////////////

template<class T>
void MainX()
{
    int iCnt = 0;
    int Value1 = 0;

    cout<<"Enter number of element that you want to insert  :\n";
    cin>>Value1;

    T *Arr = new T[Value1];

    cout<<"Enter the values :\n";

    for(iCnt = 0; iCnt < Value1;iCnt++)
    {
        cin>>Arr[iCnt];
    }

    Reverse(Arr,Value1);

    delete[] Arr;
}

///////////////////////////////////////////////////////////////////
//
//  Entry Point Function
//
///////////////////////////////////////////////////////////////////

int main()
{
    MainX<int>();

    return 0;
}