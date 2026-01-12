#include<iostream>
using namespace std;

///////////////////////////////////////////////////////////////////////////////////
//
//    Function Name :    Frequency
//    Input :            Array , size of array and one element (T, int,T)
//    Output :           count of given element
//    Description :      used to count given element no of times appear in array using template
//    Author :           Ashwini Vishnu Kauthale
//    Date :             11/01/2026
//
///////////////////////////////////////////////////////////////////////////////////

template<class T>
int Frequency(T Arr[],int iSize, T iNo)
{
    int iCnt = 0;
    int iCount = 0;

    for(iCnt = 0; iCnt < iSize;iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            iCount++;
        }
    }
    return iCount;
}

///////////////////////////////////////////////////////////////////////////////////
//
//    Function Name :    MainX
//    Input :            Values entered by user (generic type)
//    Output :           Return count of given element
//    Description :      Accepts N values from user and calls Frequency() function
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

    cout<<"Enter the element you want to count :\n";
    cin>>iValue2;

    Ret = Frequency(Arr,iValue1,iValue2);

    cout<<"Count is :"<<Ret;

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