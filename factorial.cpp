/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{   int n,fact=1;
    cout<<"Enter the number to find factorial";
    cin>>n;
    while(n)
    {
        fact=fact*n;
        n--;
    }
     cout<<fact;
    return 0;
}
