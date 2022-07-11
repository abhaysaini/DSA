// #include <bits/stdc++.h>
// using namespace std;
// class A
// {
//     int id;
//     static int count;

// public:
//     A()
//     {
//         count++;
//         id = count;
//         cout << "constructor called " << id << endl;
//     }
//     ~A()
//     {
//         cout << "destructor called " << id << endl;
//     }
// };
// int A::count = 0;
// int main()
// {
//     A a[2];
//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;
int area(int rad)
{
    return 3.14 * rad * rad;
}
int area(float l, float h)
{
    return (l * h) / 2;
}
int area(int l, int b)
{
    return l * b;
}
int main()
{
    cout << "Area of circle: " << area(5) << endl;
    cout << "Area of triangle: " << area(5, 3) << endl;
    cout << "Area of rectangle: " << area(4, 3) << endl;
}