class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> ans(nums.size());
        int posindex =0;
        int negindex=1;
        for(auto i:nums){
            if(i>0){
                if(posindex<nums.size()){
                    ans[posindex] = i;
                    posindex +=2;
                }
            }else{
                if(negindex<nums.size()){
                    ans[negindex] = i;
                    negindex +=2;
                }
            }
        }
        return ans;
    }
};