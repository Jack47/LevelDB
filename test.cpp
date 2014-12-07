#include<iostream>
using namespace std;
int main()
{
    double d = 0.301;
    double t = ~(static_cast<unsigned long>(d));
    cout<<t<<endl;
}
