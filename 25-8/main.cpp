#include <iostream>

using namespace std;

class Rectangle
{
private:
    int len,wid,area;
public:
    void setValue(int l, int w)
    {
        len=l;
        wid=w;
    }
    void areaR()
    {
        area=len*wid;
    }
    void getArea()
    {
        cout<<"Area of Recangle : "<<area<<endl;
    }
};
int main()
{
    Rectangle r;
    r.setValue(4,5);
    r.areaR();
    r.getArea();
    return 0;
}
