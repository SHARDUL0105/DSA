//LeetCode Problem Number 4 - Median of Two Sorted Arrays
//Difficulty - Hard
class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {

        int n = nums1.size() + nums2.size();

        vector<int> arr(n);

        int index = 0;

        for(int i = 0; i < nums1.size(); i++) {
            arr[index++] = nums1[i];
        }

        for(int j = 0; j < nums2.size(); j++) {
            arr[index++] = nums2[j];
        }

        sort(arr.begin(), arr.end());

        if(n % 2 == 1) {
            return arr[n / 2];
        }
        else {
            return (arr[n/2] + arr[n/2 - 1]) / 2.0;
        }
    }
};