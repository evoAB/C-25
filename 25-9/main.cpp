#include <iostream>

using namespace std;

class Circle
{
private:
    int r,area;
public:
    void setValue(int rad)
    {
        r=rad;
    }
    void areaC()
    {
        area=3.14*r*r;
    }
    void getArea()
    {
        cout<<"Area of Circle : "<<area<<endl;
    }
};
int main()
{
    Circle c;
    c.setValue(6);
    c.areaC();
    c.getArea();
    return 0;
}
