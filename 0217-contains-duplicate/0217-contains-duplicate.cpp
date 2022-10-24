class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        map<int,int> mapp;
      for(int i=0;i<nums.size();i++){
          if(mapp.find(nums[i])!=mapp.end())return true;
          
       ++mapp[nums[i]];
      }
      return false;
    }
};