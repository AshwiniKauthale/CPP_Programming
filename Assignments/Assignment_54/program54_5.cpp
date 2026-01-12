#include<iostream>
using namespace std;

///////////////////////////////////////////////////////////////////////////////////
//
//    Function Name :    Min
//    Input :            Array , size of array (T, int)
//    Output :           Return minimum value (T)
//    Description :      used to find out minimum element
//    Author :           Ashwini Vishnu Kauthale
//    Date :             11/01/2026
//
///////////////////////////////////////////////////////////////////////////////////

template<class T>
T Min(T Arr[], int iSize)
{
    int iCnt = 0;
    T min = Arr[iCnt];

    for(iCnt = iSize -1; iCnt >= 0; iCnt--)
    {
        if(Arr[iCnt] < min)
        {
            min = Arr[iCnt];
        }
    }
    return min;
}

///////////////////////////////////////////////////////////////////////////////////
//
//    Function Name :    MainX
//    Input :            Values entered by user (generic type)
//    Output :           Minimum element
//    Description :      Accepts N numbers values from user and calls Min() function
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

    Ret = Min(Arr,Value1);

    cout<<"Minimum element is : "<<Ret;

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