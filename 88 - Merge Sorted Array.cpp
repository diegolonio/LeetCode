// 09/28/2022 00:41 | Accepted | 8 ms | 9.2 MB | cpp
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int As = m + n, i = 0, j = 0;

        nums2.push_back(INT_MAX);
        
        while (i < As) {
            if (As - i > n) {
                if (nums1[i] <= nums2[j]) {
                    i++;
                } else if (nums1[i] > nums2[j] and nums1[i] <= nums2[j + 1]) {
                    swap(nums1[i], nums2[j]);
                    j = 0;
                } else {
                    j++;
                }
            } else {
                nums1[i++] = nums2[j++];
            }
        }
    }
};
