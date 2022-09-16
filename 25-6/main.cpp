#include <iostream>

using namespace std;

class Square
{
private:
    int a;
    static int count;
public:
    void setValue(int x)
    {
        a=x;
    }
    void sq()
    {
        count++;
        cout<<"Square : "<<a*a<<endl;
    }
    void funCall()
    {
        cout<<"Function called : "<<count<<endl;
    }
};
int Square :: count=0;
int main()
{
    Square s;
    s.setValue(7);
    s.sq();
    s.setValue(9);
    s.sq();
    s.funCall();
    return 0;
}
