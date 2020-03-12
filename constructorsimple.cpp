#include<iostream>
using namespace std;
class integer
{
    int m,n;
    public:
    integer(int x, int y)
    {
        m=x;
        n=y;
    }
    void display(void)
    {
        cout<<" m ="<<m;
        cout<<" n ="<<n;
    }
};
int main()
{
    integer int1(0,100); //construcot called implicitly
    integer int2 = integer(25,100); //constructor called explicitly
    cout<<" object1 " <<'\n';
    int1.display();
    cout<<"\n object2" <<'\n';
    int2.display();
    return 0;
}
