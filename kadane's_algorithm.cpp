//Given an integer array nums, find the subarray with the largest sum, and return its sum.

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        long long sum =0,max=0;
        int n=nums.size();
        //vector<int> ans;
        //vector<int> maxSubArray;
        for(int i=0;i<n;i++){
            sum=sum+nums[i];
            //ans.push_back(nums[i]);
            if(sum>=max){
                max=sum;
                //maxSubArray=ans;
            }
                
            if(sum<=0){
                sum=0;
                //ans.clear();
            }
                
            
            //cout<<max<<" "<<i<<"\n";
        }
        /*for (int i = 0; i < maxSubArray.size(); i++) {
        cout << maxSubArray[i] << " ";
        }*/
        if(max==0)
            return *max_element (nums.begin(), nums.end());
        return max;
    }
};