class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int count = 1;
        int maxe = 0;
        unordered_map<int,int>mp;
        for(int i =  0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        for(int i = 0;i<nums.size();i++){
            if(!mp[nums[i]-1]){
                    while(mp[nums[i]+count]){
                        count++;
                        cout<<count;
                    }
                    if(count>maxe) maxe = count;
                    count = 1;
            }
        }
        return maxe;

        
    }
};