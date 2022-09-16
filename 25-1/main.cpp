#include <iostream>

using namespace std;

class Complex
{
private:
    int real, imag;
public:
    void setValues(int a, int b)
    {
        real=a;
        imag=b;
    }
    void printValues()
    {
        cout<<"Complex number = "<<real<<"+"<<imag<<"j"<<endl;
    }

};

int main()
{
    Complex c;
    c.setValues(3,4);
    c.printValues();
    return 0;
}
