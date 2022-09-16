#include <iostream>

using namespace std;

class Factorial
{
private:
    int a;
    int fac;
public:
    void setValue(int f)
    {
        a=f;
    }
    void fact();
    void displayFactorial()
    {
        cout<<"Factorial of "<<a<<" = "<<fac<<endl;
    }
};
void Factorial :: fact()
{
    int res=1;
    for(int i=1;i<=a;i++)
        res*=i;
    fac=res;
}
int main()
{
    Factorial f;
    f.setValue(5);
    f.fact();
    f.displayFactorial();
    return 0;
}
