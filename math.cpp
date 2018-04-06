#include <iostream>
using namespace std;

int add(int num1,int num2,int num3);
int subtract(int num1,int num2);
int multiply(int num1,int num2);

int main()
{
    int sum = add(10,50);
    cout << "The result of addition is: " << sum;

	int diff = subtract(50,10);
    cout << "The result of subtraction is: " << diff;
}

int add(int num1,int num2,int num3)
{
    int result = num1 + num2;
    return result;

}

int subtract(int num1,int num2)
{
    int diff = num1 - num2;
    return diff;
}
