#include <iostream>
using namespace std;
class A
{
private:
    int real, imag;

public:
    A(int r = 0, int i = 0)
    {
        real = r;
        imag = i;
    }
    A operator+(A const &obj)
    {
        A final;
        final.real = real + obj.real;
        final.imag = imag + obj.imag;
        return final;
    }
    void print()
    {
        cout << real << " + " << imag << endl;
    }
};
int main()
{
    A a(2, 4), b(5, 6);
    A c = a + b;
    c.print();
    return 0;
}