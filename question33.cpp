class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n=nums.size();
        int freq=floor(n/3);
        int cnt1=0,maj1=NULL;
        int cnt2=0,maj2=NULL;
        for(int i=0;i<n;i++){
            if(nums[i]==maj1){
                cnt1++;
            }
            else if(nums[i]==maj2){
                cnt2++;
            }
            else if(cnt1==0){
                maj1=nums[i];
                cnt1=1;
            }
            else if(cnt2==0){
                maj2=nums[i];
                cnt2=1;
            }
            else{
                cnt1--;cnt2--;
            }
        }
        vector<int>result;
        cnt1=0;cnt2=0;
        for(int i=0;i<n;i++){
            if(nums[i]==maj1){
                cnt1++;
            }
            else if(nums[i]==maj2){
                cnt2++;
            }
        }
        if(cnt1>freq){
            result.push_back(maj1);
        }
        if(cnt2>freq){
            result.push_back(maj2);
        }
        return result;

    }
};
