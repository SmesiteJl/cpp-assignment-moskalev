#include <hw01.h>
#include <cmath>

bool isPrime(int num) {
    if (num <= 1) {
        return false;
    }

    for (int i = 2; i <= std::sqrt(num); i++) {
        if (num % i == 0) {
            return false;
        }
    }

    return true;
}

int sumOfDigits(int num) {
    int sum = 0;

    while (num != 0) {
        sum += num % 10;
        num /= 10;
    }

    return sum;
}

int hw01(int start, int end)
{
  if (start < 10 || start > 99 || end < 10 || end > 99) {
        return -1;
    }

    int sum = 0;
    for (int i = start; i <= end; i++) {
        if (isPrime(i)) {
            sum += sumOfDigits(i);
        }
    }
    return sum;
}
