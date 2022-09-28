// 09/28/2022 01:00 | Accepted | 34 ms | 15.7 MB | cpp
class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int i = 0, j = numbers.size() - 1, sum;
        
        while (i < j) {
            sum = numbers[i] + numbers[j];

            if (sum == target)
                break;
            else if (sum < target)
                i++;
            else
                j--;
        }
        
        return {i+1, j+1};
    }
};
