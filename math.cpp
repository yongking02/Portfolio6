#include <iostream>
using namespace std;

int add(int num1,int num2, num3);

int main()
{
    int sum = add(10,50,100);
    cout << "The result of addition is: " << sum;
}

int add(int num1,int num2,int num3)
{
    int result = num1 + num2 + num3;
    return result;
}