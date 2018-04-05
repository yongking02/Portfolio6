#include <iostream>
using namespace std;

int add(int num1,int num2);

int main()
{
    int sum = add(10,50);
    cout << "The result of addition is: " << sum;
}

int add(int num1,int num2)
{
    int result = num1 + num2;
    return result;
}