#include <iostream>

size_t recursiveFactorial(int n)
{
    if(n <= 1) return 1;
    else
    {
        return n * recursiveFactorial(n - 1);
    }
}

size_t iterativeFactorial(int n)
{
    size_t fact = 1;
    for (size_t i = 1; i <= n; ++i)
    {
        fact *= i;
    }
    return fact;
}

int main(int argc, char* args[])
{
    std::cout << "Output Running!" << std::endl;

    int n = 0;
    std::cout << "Enter number for factorial : ";
    std::cin >> n;

    // size_t answer = recursiveFactorial(n);
    size_t answer = iterativeFactorial(n);

    std::cout << "Recursive Factorial of " << n << " is " << answer << std::endl;

    return 0;
}

//Write a recursive function that is given an array of integers and the size of the array as parameters.
//The function returns the sum of the integers in the array.


//Iterative Solution
int iterativeArraySum(int integers[], int size)
{
    int sum = 0;

    for (size_t i = 0; i < size; ++i)
    {
        sum += integers[i];
    }

    return sum;
}

//Delegate Solution
int arraySumDelegate(int integers[], int size)
{
    if(size == 0) return 0;
    int lastNumber = integers[size - 1];
    int allButLastSum = iterativeArraySum(integers, size - 1);
    return lastNumber + allButLastSum;
}

//Recursive Solution
int arraySumRecursive(int integers[], int size)
{
    if(size == 0) return 0;
    int lastNumber = integers[size - 1];
    int allButLastSum = arraySumRecursive(integers, size - 1);
    return lastNumber + allButLastSum;
}