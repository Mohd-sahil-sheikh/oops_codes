#include <iostream>
using namespace std;
int add(int a, int b)
{
    int result;
    result = a + b;
    return result;
}
int subtract(int a, int b)
{
    int result;
    result = a - b;
    return result;
}
int multiply(int a, int b)
{
    int result;
    result = a * b;
    return result;
}
int divide(int a, int b)
{
    float result;
    result = a / b;
    return result;
}
int main()
{
    int result;
    int a, b;
    int choice;
    cout << "enter the value of two numbers" << endl;
    cin >> a >> b;
    char c;
    cout << "enter the operation you want(+,-,*,/)" << endl;
    cin >> c;
    switch (c)
    {

    case '+':
        result = add(a, b);
        cout << result;
        break;
    case '-':
        result = subtract(a, b);
        cout << result;

        break;
    case '*':
        result = multiply(a, b);
        cout << result;
        break;
    case '/':
        result = divide(a, b);
        cout << result;
        break;
    default:
        cout << "invalid option" << endl;
        break;
    }
    return 0;
}