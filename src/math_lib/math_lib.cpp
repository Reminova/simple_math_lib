#include "math_lib.h"
#include <cmath>
#include <algorithm>

namespace MathLib
{
    bool isEqual(double a, double b, double tolerance)
    {
        return std::abs(a - b) <= tolerance;
    }

    bool isPrime(int n)
    {
        if (n <= 1)
            return false;
        
        for (int i = 2; i * i <= n; i++)
        {
            if (n % i == 0)
                return false;        
        }
        return true;
    }

    int leastCommonMultiple(int a, int b)
    {
        int lcm = 1;
        int maxNum = std::max(a, b);
        for (int i = maxNum; i <= a * b; i += maxNum)
        {
            if (i % a == 0 && i % b == 0)
            {
                lcm = i;
                break;
            }
        }
        return lcm;
    }

    int GCD(int a, int b)
    {
        if (b == 0) return a;
        return GCD(b, a % b);
    }

    long long fibonacci(int n)
    {
        if (n < 0)
        {
            throw std::invalid_argument("Fibonacci index cannot be negative.");
        }
        if (n == 0) return 0;
        if (n == 1) return 1;

        long long prev = 0;
        long long curr = 1;

        for (int i = 2; i <= n; ++i)
        {
            long long next = prev + curr;
            prev = curr;
            curr = next;
        }

        return curr;
    }
}
