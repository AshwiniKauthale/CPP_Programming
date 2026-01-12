#include<iostream>
using namespace std;

///////////////////////////////////////////////////////////////////////////////////
//
//    Function Name :    SearchLast
//    Input :            Array , size of array and one element (T, int,T)
//    Output :           return index oflast occurence given element
//    Description :      used to find last occurance of given element in array using template
//    Author :           Ashwini Vishnu Kauthale
//    Date :             11/01/2026
//
///////////////////////////////////////////////////////////////////////////////////

template<class T>
int SearchLast(T Arr[],int iSize, T iNo)
{
    int iCnt = 0;
    int iCount = 1;
    int LastOcc = 0;

    for(iCnt = 0; iCnt < iSize;iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            LastOcc =  iCount;
        }
        iCount++;
    }
    return LastOcc;
}

///////////////////////////////////////////////////////////////////////////////////
//
//    Function Name :    MainX
//    Input :            Values entered by user (generic type)
//    Output :           Return index of last occurnce of given element
//    Description :      Accepts N values from user and calls SearchLast() function
//    Author :           Ashwini Vishnu Kauthale
//    Date :             11/01/2026
//
///////////////////////////////////////////////////////////////////////////////////

template<class T>
void MainX()
{
    int Ret = 0;
    int iCnt = 0;
    int Value1 = 0;
    T Value2 = 0;

    cout<<"Enter number of element that you want to insert  :\n";
    cin>>Value1;

    T *Arr = new T[Value1];

    cout<<"Enter the values :\n";

    for(iCnt = 0; iCnt < Value1;iCnt++)
    {
        cin>>Arr[iCnt];
    }

    cout<<"Enter the element you want to search :\n";
    cin>>Value2;

    Ret = SearchLast(Arr,Value1,Value2);

    if(Ret == 0)
    {
        cout<<"Element is not found\n";
    }
    else
    {
        cout<<"Last Occured at index :"<<Ret;
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
    MainX<int>();

    return 0;
}