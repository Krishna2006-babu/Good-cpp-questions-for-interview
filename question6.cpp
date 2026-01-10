class Solution {
public:
    // Function to sort the array containing only 0s, 1s, and 2s
    void sortColors(vector<int>& nums) {
        
        // 3 pointers: low, mid, high
        int low = 0, mid = 0, high = nums.size() - 1; 
        while (mid <= high) {
            if (nums[mid] == 0) {
                
                /* Swap nums[low] and nums[mid], then 
                 move both low and mid pointers forward*/
                swap(nums[low], nums[mid]);
                low++;
                mid++;
                
            }
            else if (nums[mid] == 1) {
                // Move mid pointer forward
                mid++;
            }
            else {
                /* Swap nums[mid] and nums[high], 
                then move high pointer backward*/
                swap(nums[mid], nums[high]);
                high--;
            }
        }
    }
};
