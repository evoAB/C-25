#include <iostream>

using namespace std;

class LargestNumber
{
private:
    int a,b,c,ln;
public:
    void setValues(int x,int y,int z)
    {
        a=x;
        b=y;
        c=z;
    }
    void lN();
    void showLargest()
    {
        cout<<"Largest Number = "<<ln;
    }
};
void LargestNumber :: lN()
{
    if(a>b && a>c)
        ln=a;
    else if(b>a && b>c)
        ln=b;
    else
        ln=c;
}

int main()
{
    LargestNumber l;
    l.setValues(4,5,3);
    l.lN();
    l.showLargest();
    return 0;
}
