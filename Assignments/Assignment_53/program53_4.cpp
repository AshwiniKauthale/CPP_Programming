#include<iostream>
using namespace std;

///////////////////////////////////////////////////////////////////////////////////
//
//    Function Name :    SecondMin
//    Input :            Array , size of array (T, int)
//    Output :           Second Minimum element
//    Description :      used to find out second minimum element
//    Author :           Ashwini Vishnu Kauthale
//    Date :             11/01/2026
//
///////////////////////////////////////////////////////////////////////////////////

template<class T>
T SecondMin(T Arr[], int iSize)
{

    if (iSize < 2)
    {
        cout << "Array size should be at least 2\n";
        return Arr[0];
    }

    T min1, min2;

    if (Arr[0] > Arr[1])
    {
        min2 = Arr[0];
        min1 = Arr[1];
    }
    else
    {
        min2 = Arr[1];
        min1 = Arr[0];
    }

    for(int iCnt = 2; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] < min2)
        {
            min1 = min2;
            min2 = Arr[iCnt];
        }
        else if (Arr[iCnt] < min2 && Arr[iCnt] != min1)
        {
            min2 = Arr[iCnt];
        }
    }
    return min2;
}

///////////////////////////////////////////////////////////////////////////////////
//
//    Function Name :    MainX
//    Input :            Values entered by user (generic type)
//    Output :           Second minimum
//    Description :      Accepts N numbers values from user and calls SecondMin() function
//    Author :           Ashwini Vishnu Kauthale
//    Date :             11/01/2026
//
///////////////////////////////////////////////////////////////////////////////////

template<class T>
void MainX()
{
    int Value = 0;
    T Ret;
    cout << "How many elements you want to insert :\n";
    cin >> Value;

    T *Arr = new T[Value];

    cout << "Enter elements :\n";
    for(int iCnt = 0; iCnt < Value; iCnt++)
    {
        cin >> Arr[iCnt];
    }

    Ret = SecondMin(Arr, Value);

    cout<<"Second smallest element is : "<<Ret;
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
