class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
    unordered_map<int, int> prefixCount;
    prefixCount[0] = 1; // base case: one way to have sum = 0
    int sum = 0, count = 0;

    for (int x : nums) {
        sum += x;
        if (prefixCount.count(sum - k)) {
            count += prefixCount[sum - k];
        }
        prefixCount[sum]++;
    }
    return count;
}

};
