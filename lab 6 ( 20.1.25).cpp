#include<iostream>
using namespace std;
// Fibonacci function using recursion
int fibonacci(int x)
{
    if (x == 0)
    {
        return 0;
    }
    else if (x == 1)
    {
        return 1;
    }
    else
    {
        return fibonacci(x - 1) + fibonacci(x - 2);
    }
}
// Main function
int main()
{
    int i,n,fibo,sum = 0;
    cout << "Enter the number of terms in Fibonacci series: ";
    cin >> n;

    cout << "Fibonacci series: ";
    for (i = 0; i < n; i++)
    {
        fibo = fibonacci(i);  // Calculate Fibonacci number
        cout << fibo << " ";     // Print the number
        sum = sum+fibo;             // Add the number to sum
    }
    cout <<endl<<"Sum of Fibonacci series: " << sum << endl;
}


