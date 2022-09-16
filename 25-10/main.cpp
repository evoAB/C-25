#include <iostream>

using namespace std;

class Area
{
private:
    int r,l,w;
public:
    void setCircleValue(int rad)
    {
        r=rad;
    }
    void setSquareValue(int s)
    {
        l=s;
    }
    void setRectangleValue(int len, int wid)
    {
        l=len;
        w=wid;
    }
    void areaC()
    {
        cout<<"Area of Circle : "<<3.14*r*r<<endl;
    }
    void areaS()
    {
        cout<<"Area of Square : "<<l*l<<endl;
    }
    void areaR()
    {
        cout<<"Area of Rectangle : "<<l*w<<endl;
    }
};
int main()
{
    Area c,s,r;
    c.setCircleValue(3);
    s.setSquareValue(5);
    r.setRectangleValue(4,5);
    c.areaC();
    r.areaR();
    s.areaS();
    return 0;
}
