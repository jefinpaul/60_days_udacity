
#include<iostream>
using namespace std;
class item
{
    int code;
    float price;
    public:
    void getdata(void)
    {
        cout<<"Enter code "<<endl;
        cin>>code;
        cout<<"Enter the price"<<endl;
        cin>>price;
    }
    void showdata()
    {cout<<"\nThe code is"<<code;
    cout<<"\nThe price is"<<price;
   
    }
};
int main()
{
  int size;
 
  cout<<"Enter the size of the item";
  cin>>size;
  item *ptr = new item[size];
  cout<<"*****Enter item details*****"<<endl;
  for (int i=0;i<size;i++)
  {
      ptr[i].getdata();
  }
  cout<<"The details are";
   for (int i=0;i<size;i++)
   {
       ptr[i].showdata();
   }
 
}