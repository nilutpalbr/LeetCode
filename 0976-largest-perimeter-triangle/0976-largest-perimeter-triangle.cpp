class Solution {
public:
    int largestPerimeter(vector<int>& nums) {
        deque<int> window; int sum=0; int max_Sum=0; int start=0;
        sort(nums.begin(),nums.end());
        for(int i=0;i<3;i++){
            window.push_back(nums[i]); start++;
        }
        if(nums[0]+nums[1]>nums[2]){sum=nums[0]+nums[1]+nums[2];}
        max_Sum=max(max_Sum,sum);
        for(int i=start;i<nums.size();i++){
            window.pop_front();
            window.push_back(nums[start++]);
            int first= window.at(0);
            int second=window.at(1);
           if(first+second>window.at(2)){sum=first+second+window.at(2);}
               max_Sum=max(max_Sum,sum);
        }
        return max_Sum;
    }
};