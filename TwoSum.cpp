//LeetCode Problem Number 1 - Two Sum
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        vector<pair<int,int>> val;
        for(int i=0;i<nums.size();i++)
        {
            val.push_back({nums[i],i});
        }    
        sort(val.begin(),val.end());
        int left=0;
        int right=nums.size()-1;

        while(left<right)
        {
            int currSum=val[left].first + val[right].first;

            if(currSum==target)
            return {val[left].second,val[right].second};

            else if(currSum<target)
            {
                left++;
            }

            else
            {
                right--;
            }
        }
        return {};
    }
};