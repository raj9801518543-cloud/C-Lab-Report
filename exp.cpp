
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int result = 0;

        for (int num : nums) {
            result ^= num;
        }

        return result;
    }
};

int main() {
    Solution sol;
    vector<int> nums = {4, 1, 2, 4, 3};

    cout << "Single number is: "
         << sol.singleNumber(nums) << endl;

    return 0;
}

