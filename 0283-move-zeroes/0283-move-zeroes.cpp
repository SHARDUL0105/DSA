class Solution {
public:
    void moveZeroes(vector<int>& nums) 
    {
        int insertPos = 0; // Tracks where the next non-zero element should be placed

        for (int i = 0; i < nums.size(); i++) 
        {
            // If we find a non-zero element, swap it with the element at insertPos
            if (nums[i] != 0) 
            {
                swap(nums[insertPos], nums[i]);
                insertPos++; // Move the insert position forward
            }
        }    
    }
};
