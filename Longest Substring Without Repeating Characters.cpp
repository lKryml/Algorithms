class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int maxi = 0;
        map<char ,int>m;
        for(int i = 0 , j = 0 ; i < size(s);i++){
            m[s[i]]++;
            while(m[s[i]] > 1){
                m[s[j++]]--;
            }
            maxi = max(maxi , i - j +1);
        }
        return maxi;
    }
};