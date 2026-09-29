#include "math_lib.h"
#include <cmath>
#include <algorithm>
#include <gtest/gtest.h>
#include "math_lib.h"

namespace MathLib
{
    bool isEqual(double a, double b, double tolerance)
    {
        return abs(a - b) <= tolerance;
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

    int gcd(int a, int b) {
        a = std::abs(a);
        b = std::abs(b);
        while (b! = 0) {
            int temp = b;
            b = a % b;
            a = temp;
        }
    return a;
    }
}

