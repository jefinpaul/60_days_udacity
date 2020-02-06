include<iostream>
using namespace std;
class staff
{

  int code;
  char name[20];
   public:
        void getstaff()
             {
                cout<<"Get the code : "<<endl;
                cin>>code;
                cout<<"Get the name : ";
                cin>>name;
             }
        void dispstaff()
        {
                cout<<code<<endl<<name;
        }
};
class teacher:public staff
{
   char subject[20];
   char publication[20];
   public:

        void gettech()
                {getstaff();
                cout<<"subject : ";
                cin>>subject;
                cout<<"publication : ";
                cin>>publication;
                }
        void showtech()
                {dispstaff();
                cout<<subject<<endl<<publication;
                }
};
class typist: public staff
{
  int speed;
  public:
        void getspeed(void)
                {getstaff();
                cout<<"speed : ";
                cin>>speed;
                }
        void showspeed(void)
                {dispstaff();
                cout<<"speed is : "<<speed<<endl;}
};
class officer: public staff
{
  char grade[20];
  public:
        void getgrade()
                {getstaff();
                cout<<"Grade of the officer is : ";
                cin>>grade[20];
                }
        void showgrade()
                {dispstaff();
                cout<<grade[20];
                }
};
class regular: public typist
{
   int monthwages;
   public:
        void getr()
                {
                cout<<"\nMonthly wage : ";
                cin>>monthwages;
                }
        void dispr()
                {
                cout<<"\nMonthly wages of typist is : "<<monthwages;
                }
};
class causal:public typist
{
   int dailywages;
   public:
        void getc()
                {
                cout<<"\nDaily wages : ";
                cin>>dailywages;
                }
        void showc()
                {
                cout<<"\nDaily wages of the typist is : "<<dailywages;
                }
};
int main()
{
int a,o;
teacher o1;
typist o2;
officer o3;
do
{

cout<<"\nEnter the category :";
cout<<"\n1.Teacher\n2.Typist\n3.Officer\n4.Exit";
cin>>a;
if(a<4)
{
cout<<"\nchoose your option :\n1.Create\n2.Display";
cin>>o;
}
else break;
switch(a)
{
case 1 :
        switch(o)
        {
        case 1 : o1.gettech();
                break;
        case 2 :o1.showtech();
                break;
        }
        break;

case 2 :
        switch(o)
        {
        case 1 : o2.getspeed() ;
                break;
        case 2 : o2.showspeed();
                break;
        }
        break;

case 3 :
        switch(o)
        {
        case 1 : o3.getgrade();
                break;
        case 2 : o3.showgrade();
                break;
        }
        break;
case 4 :
        break;

 default :cout<<"\n INVALID OPTION  ";
}
} while(a!=0);
}