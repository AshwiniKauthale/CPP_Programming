#include<iostream>
using namespace std;

///////////////////////////////////////////////////////////////////////////////////
//
//    Function Name :    CheckSorted
//    Input :            Array , size of array (T, int)
//    Output :           Boolean value
//    Description :      used to check array is sorted or not
//    Author :           Ashwini Vishnu Kauthale
//    Date :             11/01/2026
//
///////////////////////////////////////////////////////////////////////////////////

template<class T>
bool CheckSorted(T Arr[], int iSize)
{
    T min = Arr[0];

    for(int iCnt = 1; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] < min)
        {
            return false;
        }
        min = Arr[iCnt];
    }
    return true;
}

///////////////////////////////////////////////////////////////////////////////////
//
//    Function Name :    MainX
//    Input :            Values entered by user (generic type)
//    Output :           Soted or not
//    Description :      Accepts N numbers values from user and calls CheckSorted() function
//    Author :           Ashwini Vishnu Kauthale
//    Date :             11/01/2026
//
///////////////////////////////////////////////////////////////////////////////////

template<class T>
void MainX()
{
    int Value = 0;
    cout << "How many elements you want to insert :\n";
    cin >> Value;

    T *Arr = new T[Value];

    cout << "Enter elements :\n";
    for(int iCnt = 0; iCnt < Value; iCnt++)
    {
        cin >> Arr[iCnt];
    }

    bool bRet = CheckSorted(Arr, Value);

    if(bRet)
    {
        cout << "Array is sorted\n";
    }
    else
    {
        cout << "Array is not sorted\n";
    }
    delete[] Arr;
}

//////////////////////////////////////////////////////////////////////////////////
//    Entry Point function
///////////////////////////////////////////////////////////////////////////////////

int main()
{
    MainX<int>();

    return 0;
}
