// 09/28/2022 01:26 | Accepted | 0 ms | 6.4 MB | cpp
class Solution {
public:
    bool isSubsequence(string s, string t) {
        if (s == "" and t == "")
            return true;
        
        if (s == "")
            return true;
        
        int i = 0, j = 0, ss = s.size(), ts = t.size();
        
        while (j < ts) {
            if (s[i] == t[j++])
                i++;
            
            if (i == ss)
                return true;
        }
        
        return false;
    }
};
