class Solution {
public:
int sumFourDivisors(vector<int>& nums) {
    int sum2 = 0;

    for (int d : nums) {
        int count = 0;
        int sum1 = 0;

        for (int i = 1; i * i <= d; i++) {
            if (d % i == 0) {
                int j = d / i;

                if (i == j) {
                    count++;
                    sum1 += i;
                } else {
                    count += 2;
                    sum1 += i + j;
                }

                if (count > 4)
                    break;
            }
        }

        if (count == 4)
            sum2 += sum1;
    }

    return sum2;
}
};