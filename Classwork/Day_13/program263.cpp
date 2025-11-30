#include<iostream>
using namespace std;
template<class T>

T Add(T No1,T No2)
    {
        T Ans;
        Ans = No1 + No2;
        return Ans;
    }

int main()
{
    int iValue1 = 10, iValue2 = 11,iRet = 0;
    float fValue1 = 10, fValue2 = 11,fRet = 0;
    double dValue1 = 10, dValue2 = 11,dRet = 0;

    iRet = Add(iValue1,iValue2);
    cout<<"Addition of int :"<<iRet<<"\n";

    fRet = Add(fValue1,fValue2);
    cout<<"Addition of int :"<<fRet<<"\n";

    dRet = Add(dValue1,dValue2);
    cout<<"Addition of int :"<<dRet<<"\n";

    return 0;
}