class Solution {
public:
    bool checkDivisibility(int n) {
        int sumOfDigits = 0;
        int productOfDigits = 1;
        int init_n = n;

        while (n != 0)
        {
            int temp;
            temp = n % 10;
            sumOfDigits += temp;
            productOfDigits *= temp;
            n=n/10;
        }

        if (init_n % (sumOfDigits + productOfDigits) == 0)
        {
            return true;
        }
        else
        {
            return false;
        }

    }
};