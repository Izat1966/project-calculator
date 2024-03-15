/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int op1,op2,res;
    char c;
    cin>>op1>>c>>op2;
    if (c=='+')
    res=op1+op2;
    if (c=='-')
    res=op1-op2;
    if(c=='/'){
        res=op1/op2;
    }else if (op2==0){
        return 1;
    }
    if(c=='*')
    res=op1*op2;
    cout<<res;

    return 0;
}

