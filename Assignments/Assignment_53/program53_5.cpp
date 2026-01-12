#include<iostream>
using namespace std;

///////////////////////////////////////////////////////////////////////////////////
//
//    Function Name :    Replace
//    Input :            Array , size of array,old value,new value (T, int ,T,T)
//    Output :           Array with replace value
//    Description :      used to replace new value in place of old value
//    Author :           Ashwini Vishnu Kauthale
//    Date :             11/01/2026
//
///////////////////////////////////////////////////////////////////////////////////

template<class T>
void Replace(T Arr[], int iSize,T oldVal, T newVal)
{
    int iCnt = 0;
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] == oldVal)
        {
            Arr[iCnt] = newVal;
        }
    }

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        cout<<Arr[iCnt]<<" ";
    }
}

///////////////////////////////////////////////////////////////////////////////////
//
//    Function Name :    MainX
//    Input :            Values entered by user (generic type)
//    Output :           Nothing
//    Description :      Accepts N numbers values from user and calls Replace() function
//    Author :           Ashwini Vishnu Kauthale
//    Date :             11/01/2026
//
///////////////////////////////////////////////////////////////////////////////////

template<class T>
void MainX()
{
    int Value = 0;
    T Ret,oldVal,newVal;
    cout << "How many elements you want to insert :\n";
    cin >> Value;

    T *Arr = new T[Value];

    cout << "Enter elements :\n";
    for(int iCnt = 0; iCnt < Value; iCnt++)
    {
        cin >> Arr[iCnt];
    }

    cout<<"Enter old value which you want to replace :";
    cin>>oldVal;

    cout<<"Enter new value :";
    cin>>newVal;

    Replace(Arr, Value,oldVal,newVal);

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
