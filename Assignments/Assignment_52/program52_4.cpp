#include<iostream>
using namespace std;

///////////////////////////////////////////////////////////////////////////////////
//
//    Function Name :    Max
//    Input :            Array , size of array (T, int)
//    Output :           Return maximum value (T)
//    Description :      used to find out maximum element
//    Author :           Ashwini Vishnu Kauthale
//    Date :             11/01/2026
//
///////////////////////////////////////////////////////////////////////////////////

template<class T>
T Max(T Arr[], int iSize)
{
    int iCnt = 0;
    T max = Arr[iCnt];

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] > max)
        {
            max = Arr[iCnt];
        }
    }
    return max;
}

///////////////////////////////////////////////////////////////////////////////////
//
//    Function Name :    MainX
//    Input :            Values entered by user (generic type)
//    Output :           Maximum element
//    Description :      Accepts N numbers values from user and calls Max() function
//    Author :           Ashwini Vishnu Kauthale
//    Date :             11/01/2026
//
///////////////////////////////////////////////////////////////////////////////////

template<class T>
void MainX()
{
    int Value1 = 0;
    int iCnt = 0;
    T Ret;

    cout<<"How many elements you want to insert : \n";
    cin>>Value1;

    T *Arr = new T[Value1];

    cout<<"Enter elements :\n";

    for(iCnt = 0;iCnt < Value1; iCnt++)
    {
        cin>>Arr[iCnt];
    }

    Ret = Max(Arr,Value1);

    cout<<"Maximum element is : "<<Ret;

    delete[] Arr;
}

//////////////////////////////////////////////////////////////////////////////////
//    Entry Point function
///////////////////////////////////////////////////////////////////////////////////

int main()
{
    MainX<double>();

    return 0;
}