class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        
        int n=nums.size(),tmp;
        vector<int>v(nums);
        for(int i=0;i<nums.size();i++){
          nums[(i+k)%n]=v[i];
        }
    }
    
};
