class Solution {
public:
    int trap(vector<int>& height) {
        int maxLeft=height[0]; int maxRight=height[height.size()-1]; int ans=0;
        vector<int> left; int right[height.size()];
        for(int i=0;i<height.size();i++){
            if(maxLeft<height[i]){
              maxLeft=height[i]; 
            }
            left.push_back(maxLeft);
        }
          for(int i=height.size()-1;i>=0;i--){
            if(maxRight<height[i]){
               maxRight=height[i]; 
            } 
            right[i]=maxRight; 
        } 
        
        for(int i=0;i<height.size();i++){
            ans+= min(left[i],right[i])-height[i];                                 
    }
        return ans;
    }
};