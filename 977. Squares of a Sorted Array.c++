class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int>ans;
        int first = 0,second = 0;
        while(first<nums.size() && nums[first]<0  ) {
            first++;
        }
        second = first;
        first -= 1;
        while(first>=0 && second<nums.size())   {
            if(abs(nums[first] * nums[first]) < (nums[second] * nums[second]))  {
                ans.push_back(nums[first] * nums[first]);
                first--;
            }
            else {
                ans.push_back(nums[second] * nums[second]);
                second++;
            }
        }
        while(first>=0) {
            ans.push_back(nums[first] * nums[first]);
            first--;
        }
        while(second<nums.size())   {
            ans.push_back(nums[second] * nums[second]);
            second++;
        }
        return ans;

    }
};
