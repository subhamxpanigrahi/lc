class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int element=-1;
        int cnt=0;
        for(int i=0;i<nums.size();i++){
            if(cnt==0){
                cnt++;
                element = nums[i];
            }
            else if(nums[i]==element){
                cnt++;
            }else cnt--;
        }int cnt2=0;
        for(auto i:nums){
            if(i==element)cnt2++;
        }
        if(cnt2>(nums.size())/2)return element;
        return -1;
    }
};