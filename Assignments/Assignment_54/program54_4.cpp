#include<iostream>
using namespace std;

///////////////////////////////////////////////////////////////////////////////////
//
//    Function Name :    Reverse
//    Input :            Array , size of array (T, int)
//    Output :           Reverse Array
//    Description :      used to Reverse the array
//    Author :           Ashwini Vishnu Kauthale
//    Date :             11/01/2026
//
///////////////////////////////////////////////////////////////////////////////////

template<class T>
void Reverse(T Arr[], int iSize)
{
    int iCnt = 0;

    cout<<"Reverse array is : ";
    for(iCnt = iSize -1; iCnt >= 0; iCnt--)
    {
        cout<<Arr[iCnt]<<" ";
    }
}

///////////////////////////////////////////////////////////////////////////////////
//
//    Function Name :    MainX
//    Input :            Values entered by user (generic type)
//    Output :           Nothing
//    Description :      Accepts N numbers values from user and calls Reverse() function
//    Author :           Ashwini Vishnu Kauthale
//    Date :             11/01/2026
//
///////////////////////////////////////////////////////////////////////////////////

template<class T>
void MainX()
{
    int Value1 = 0;
    int iCnt = 0;

    cout<<"How many elements you want to insert : \n";
    cin>>Value1;

    T *Arr = new T[Value1];

    cout<<"Enter elements :\n";

    for(iCnt = 0;iCnt < Value1; iCnt++)
    {
        cin>>Arr[iCnt];
    }

    Reverse(Arr,Value1);

    delete[] Arr;
}

//////////////////////////////////////////////////////////////////////////////////
//    Entry Point function
///////////////////////////////////////////////////////////////////////////////////

int main()
{
    MainX<char>();

    return 0;
}