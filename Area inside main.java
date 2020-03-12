/*code to find square root*/
class Room
{
    float length;
    float width;
    void getdata(float a, float b)
    {
        length =a;
        width =b;
    }
}
class Main
{
    public static void main (String args[])
    {
        Room room1 = new Room();
        room1.getdata(14,10);
        float area = room1.length*room1.width;
        System.out.println("Area is "+ area);
        
    }
}