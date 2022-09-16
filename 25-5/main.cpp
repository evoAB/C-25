#include <iostream>

using namespace std;

class ReverseNumber
{
private:
    int a;
public:
    void setValues(int x)
    {
        a=x;
    }
    int rN();
};
int ReverseNumber :: rN()
{
    int res;
    while(a)
    {
        res=res*10+a%10;
        a/=10;
    }
    return res;
}
int main()
{
    ReverseNumber r;
    r.setValues(1223);
    cout<<"Reverse Number : "<<r.rN();
    return 0;
}
