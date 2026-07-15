class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        int sumOdd = 0, sumEven = 0;

        for (int i = 0; i < n; i++) {
            sumOdd += (2 * i + 1);
            sumEven += (2 * i + 2);
        }

        int a = sumEven;
        int b = sumOdd;

        while (b != 0) {
            int rem = a % b;
            a = b;
            b = rem;
        }

        return a;
    }
};