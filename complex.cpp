#include<iostream>
using namespace std;
class complex
{
  float x,y;
  public:
  complex(){}
  complex(float a)
  {
      x = y = a;
  }
  complex(float real, float imag)
  {
      x =  real;
      y = imag;
  }
  friend complex sum(complex, complex);
  friend void show(complex);
};
complex sum(complex c1, complex c2)
{
    complex c3;
    c3.x = c1.x+c2.x;
    c3.y = c1.y+c2.y;
}
void show(complex c)
{
    cout<<c.x<<"+j "<<c.y;
}
int main()
{
    complex A,B,C;
    A= complex(1.3,2.5);
    B= complex(2.6,5.6);
    C= sum(A,B);
    cout<<"\n"<<"A ";show(A); cout<<"\n"<<"B ";show(B);cout<<endl<<"C ";show(C);
    return 0;
}
