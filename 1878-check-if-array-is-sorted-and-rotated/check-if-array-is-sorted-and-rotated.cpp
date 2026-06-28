class Solution {
public:
    bool check(vector<int>& nums) {
        int n = nums.size();int cnt=1;
        for(int i=1;i<2*n;i++){
            if(nums[i%n]<=nums[(i+1)%n]){
                cnt++;
                if(cnt==n)return true;
            }
            else if(nums[i%n]>nums[(i+1)%n])cnt=1;
        }
        return n==1;
    }
};