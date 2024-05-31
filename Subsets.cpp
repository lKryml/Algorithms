void f(vector<int>& nums,vector<vector<int>> &sol,int i,vector<int>arr)
    {
        if(i==nums.size())
        {
            sol.push_back(arr);
            return;
        }

        arr.push_back(nums[i]);
        f(nums,sol,i+1,arr);
        
        arr.pop_back();
        f(nums,sol,i+1,arr);

    }


    vector<vector<int>> subsets(vector<int>& nums) {
        
    vector<vector<int>> sol;
    vector<int>arr;
    f(nums,sol,0,arr);
    return sol;

    }
