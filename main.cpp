/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

class employee
{
    char name[30];
    float age;
  public: 
  void getdata(void);
  void putdata(void);
};
void employee :: getdata(void)
{
    cout<<"Enter name";
    cin>>name;
    cout<<"enter age";
    cin>>age;
}
void employee :: putdata(void)
{
    cout<<"name"<<name;
    cout<<"age"<<age;
}
int main()
{
    employee manager[1];
    employee foreman[2];
     for(int i=0;i<2;i++)
     {
         manager[i].getdata();
         manager[i].putdata();
     }
     for(int j=0;j<3;j++)
     {
         foreman[j].getdata();
         foreman[j].putdata();
     }
}
  

    
