// 09/27/2022 | 13:50 | Accepted | 28 ms | 23.3 MB | cpp
class Solution {
public:
    void reverseString(vector<char>& s) {
        int i = 0, j = s.size() - 1;
        
        while (i < j) {
            swap(s[i], s[j]);
            i++;
            j--;
        }
    }
};
