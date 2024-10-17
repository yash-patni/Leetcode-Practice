class Solution {
public:
    int maximumSwap(int num) {
        string no = to_string(num);
        int n = no.length();
        char max_digit = '0';
        int maxi_i = -1;
        int swap_i = -1;
        int swap_j = -1;

        for (int i = n - 1; i >= 0; i--) {
            if (no[i] > max_digit) {
                max_digit = no[i];
                maxi_i = i;
            }
            if (no[i] < max_digit) {
                swap_i = i;
                swap_j = maxi_i;
            }
        }

        if (swap_i != -1) {
            swap(no[swap_i], no[swap_j]);
        }

        return atoi(no.c_str());
    }
};
