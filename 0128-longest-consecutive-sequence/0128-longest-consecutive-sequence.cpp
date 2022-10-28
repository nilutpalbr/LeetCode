class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int maxStreak=0; int currStreak=0;
        set<int> list;
        for(int i=0;i<nums.size();i++){
            list.insert(nums[i]);
        }
      int start= *list.begin();
      for(auto it=list.begin();it!=list.end();it++){
          if(*it==start){
              currStreak++;
              maxStreak=max(maxStreak,currStreak);
              start++;
          }else{
              currStreak=1;
              auto itr= it;
              int newStart= *itr;
              start= ++newStart;
          }
          
      }
      return maxStreak;
    }
};