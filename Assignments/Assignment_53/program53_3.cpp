#include<iostream>
using namespace std;

///////////////////////////////////////////////////////////////////////////////////
//
//    Function Name :    SecondMax
//    Input :            Array , size of array (T, int)
//    Output :           Second Maximum element
//    Description :      used to find out second maximum element
//    Author :           Ashwini Vishnu Kauthale
//    Date :             11/01/2026
//
///////////////////////////////////////////////////////////////////////////////////

template<class T>
T SecondMax(T Arr[], int iSize)
{

    if (iSize < 2)
    {
        cout << "Array size should be at least 2\n";
        return Arr[0];
    }

    T max1, max2;

    if (Arr[0] > Arr[1])
    {
        max1 = Arr[0];
        max2 = Arr[1];
    }
    else
    {
        max1 = Arr[1];
        max2 = Arr[0];
    }

    for(int iCnt = 2; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] > max1)
        {
            max2 = max1;
            max1 = Arr[iCnt];
        }
        else if (Arr[iCnt] > max2 && Arr[iCnt] != max1)
        {
            max2 = Arr[iCnt];
        }
    }
    return max2;
}

///////////////////////////////////////////////////////////////////////////////////
//
//    Function Name :    MainX
//    Input :            Values entered by user (generic type)
//    Output :           Second maximum
//    Description :      Accepts N numbers values from user and calls SecondMax() function
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

    Ret = SecondMax(Arr, Value);

    cout<<"Second maximum element is : "<<Ret;
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
