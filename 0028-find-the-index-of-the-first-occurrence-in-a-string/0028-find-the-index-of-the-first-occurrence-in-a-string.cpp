class Solution {
public:
int strStr(string haystack, string needle) {
    int j;
        int m = haystack.size(), n = needle.size();
        for (int i = 0; i <= m - n; i++) {
            for (j = 0; j < n; j++) {
                if (haystack[i + j] != needle[j]) {
                    break;
                }
            }
            if (j == n) {
                return i;
            }
        }
        return -1;
    }
};
