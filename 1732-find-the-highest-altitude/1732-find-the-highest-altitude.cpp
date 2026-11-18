class Solution {
public:
    int largestAltitude(vector<int>& gain) 
    {
        int high=0;
        int max=0;
        for(int i=0;i<gain.size();i++)
        {
            high+=gain[i];
            if(high>max)
            {
                max=high;
            }
        }    
        return max;
    }
};