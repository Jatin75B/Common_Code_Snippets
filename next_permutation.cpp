class Solution {
public:
    // speed=O(3N)
    // space=O(1)   only ans is stored
    void nextPermutation(vector<int>& nums) {
        int index=-1;
        int n=nums.size();

        for(int i=n-2;i>=0;i--)
            if(nums[i]<nums[i+1]){
                index=i;
                break;
            }
        
        if(index==-1){
            reverse(nums.begin(),nums.end());
            
        }

        for(int i=n-1;i>=index;i--){
            if(nums[i]>nums[index]){
                swap(nums[i],nums[index]);
                break;
            }
        }//changes 2
        
        reverse(nums.begin()+index+1,nums.end());
    }
};
