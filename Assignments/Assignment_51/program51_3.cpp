#include<iostream>
using namespace std;

///////////////////////////////////////////////////////////////////////////////////
//
//    Function Name :    SearchFirst
//    Input :            Array , size of array and one element (T, int,T)
//    Output :           return index of given element
//    Description :      used to find first occurance of given element in array using template
//    Author :           Ashwini Vishnu Kauthale
//    Date :             11/01/2026
//
///////////////////////////////////////////////////////////////////////////////////

template<class T>
int SearchFirst(T Arr[],int iSize, T iNo)
{
    int iCnt = 0;
    int iCount = 1;

    for(iCnt = 0; iCnt < iSize;iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            return iCount;
        }
        iCount++;
    }
    return 0;
}

///////////////////////////////////////////////////////////////////////////////////
//
//    Function Name :    MainX
//    Input :            Values entered by user (generic type)
//    Output :           Return index of given element
//    Description :      Accepts N values from user and calls SearchFirst() function
//    Author :           Ashwini Vishnu Kauthale
//    Date :             11/01/2026
//
///////////////////////////////////////////////////////////////////////////////////

template<class T>
void MainX()
{
    int Ret = 0;
    int iCnt = 0;
    int iValue1 = 0;
    T iValue2 = 0;

    cout<<"Enter number of element that you want to insert  :\n";
    cin>>iValue1;

    T *Arr = new T[iValue1];

    cout<<"Enter the values :\n";

    for(iCnt = 0; iCnt < iValue1;iCnt++)
    {
        cin>>Arr[iCnt];
    }

    cout<<"Enter the element you want to search :\n";
    cin>>iValue2;

    Ret = SearchFirst(Arr,iValue1,iValue2);

    if(Ret == 0)
    {
        cout<<"Element is not found\n";
    }
    else
    {
        cout<<"first Occured at index :"<<Ret;
    }

    delete[] Arr;
}

///////////////////////////////////////////////////////////////////
//
//  Entry Point Function
//
///////////////////////////////////////////////////////////////////

int main()
{
    MainX<char>();

    return 0;
}