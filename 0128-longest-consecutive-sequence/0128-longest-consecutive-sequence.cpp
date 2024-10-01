class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n=nums.size();
        int last_small=INT_MIN;
        int cnt=0,longest=0;
        sort(nums.begin(),nums.end());

        for(int i=0;i<n;i++){
            if(nums[i]-1==last_small){
                cnt++;
                last_small=nums[i];
            }
            else if(nums[i]!=last_small){
                cnt=1;
                last_small=nums[i];
            }
    longest=max(longest,cnt);    
        }return longest;
    }
};