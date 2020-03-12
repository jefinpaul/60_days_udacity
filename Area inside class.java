class Rectangle
{
    int length;
    int breadth;
    void getdata(int a, int b)
    {
        length=a;
        breadth=b;
    }
    int rectarea()
    {
       int x = length*breadth;
       return x;
    }
    
}

class Main
{
    public static void main(String args[])
    {
        Rectangle a1= new Rectangle();
        a1.getdata(15,10);
        int area = a1.rectarea();
        System.out.println(area);
    }
}
