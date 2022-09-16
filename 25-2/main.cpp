#include <iostream>

using namespace std;

class Time
{
private:
    int hr,min,sec;
public:
    void setValues(int h, int m, int s)
    {
        hr=h;
        min=m;
        sec=s;
    }
    void displayValues()
    {
        cout<<"Time = "<<hr<<"hr"<<min<<"min"<<sec<<"sec"<<endl;
    }
};
int main()
{
    Time t;
    t.setValues(3,45,20);
    t.displayValues();
    return 0;
}
