class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int>mp;
        vector<int>res;
        int maxe = INT_MIN;
        int num;
        for(int i = 0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        for(int i = 0;i<k;i++){
            for(const auto&[a,b] : mp){
            if(b > maxe){
                num = a;
                maxe=b;
            }
            }
        mp[num] = 0;
        maxe=0;
        res.push_back(num);
        }
        return res;
    }
};
