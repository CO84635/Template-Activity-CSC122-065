#include <iostream>

using namespace std;

template <typename T>
T max_two(T x, T y)
{
    return (x > y) ? x : y;
}

template <typename T>
T max_three(T x, T y, T z) 
{
    return (x > y) ? (x > z) ? x : z : (y > z) ? y : z;
}

template <typename T>
void swapper(T &x, T &y) {
    cout << "The original x is: " << x << ".The original y is: "  << y << endl;
    T temp;
    temp = x;
    x = y;
    y = temp;
    cout << "The new x is: " << x << ". The new y is: " << y << endl;
}

int main() {

    cout << max_two(5, 7) << endl;
    cout << max_two(5.1, 7.1) << endl;
    cout << max_two('B', 'A') << endl;
    cout << max_three(1, 2, 3) << endl;
    cout << max_three(8, 6, 4) << endl;
    cout << max_three('A', 'B', 'C') << endl;
    int a = 1;
    int b = 2;
    swapper(a, b);

    return 0;
}