#include<iostream>
using namespace std;
int main()
{
    //logical operator
    int exp1=true;
    int exp2=false;

    cout<<(exp1&&exp2)<<endl;//false
    cout<<(exp1||exp2)<<endl;//true
    cout<<(!exp1)<<endl;//false

    return 0;
}