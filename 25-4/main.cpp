#include <iostream>

using namespace std;

class LargestNumber
{
private:
    int a,b,c;
public:
    void setValues(int x,int y,int z)
    {
        a=x;
        b=y;
        c=z;
    }
    int lN();
};
int LargestNumber :: lN()
{
    if(a>b && a>c)
        return a;
    else if(b>a && b>c)
        return b;
    else
        return c;
}

int main()
{
    LargestNumber l;
    l.setValues(4,5,3);
    cout<<"Largest Number = "<<l.lN();
    return 0;
}
