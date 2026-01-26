class Solution {
public:
    int secondHighest(string s) {
        int largest = -1;
        int secondLargest = -1;

        for (char ch : s) {
            if (isdigit(ch)) {
                int d = ch - '0';

                if (d > largest) {
                    secondLargest = largest;
                    largest = d;
                }
                else if (d < largest && d > secondLargest) {
                    secondLargest = d;
                }
            }
        }

        return secondLargest;
    }
};
