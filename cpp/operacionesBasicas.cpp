#include <iostream>
using namespace std;

int Addition(int, int);
int Substraction(int, int);
int Multiply(int, int);
int Divide(int, int);
int SquareRoot(int, int);

int main()
{
    return 0;
}

int Addition(int a, int b)
{
    return a + b;
}

int Substraction(int a, int b)
{
    if (a < b)
    {
        cout << "La resta es negativa";
        return a - b;
    }
    else
    {
        return a - b;
    }
};
