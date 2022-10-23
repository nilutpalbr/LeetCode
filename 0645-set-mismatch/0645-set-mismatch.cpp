class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        unordered_map<int,int> mapp; vector<int> res;
        for(int i=0;i<nums.size();i++){
            if(mapp.find(nums[i])!=mapp.end())
                 res.push_back(nums[i]);
            
           mapp[nums[i]]++;
        }
        for(int i=1;i<=nums.size();i++){
            if(mapp.find(i)==mapp.end())res.push_back(i);
        }
        return res;
    }
};