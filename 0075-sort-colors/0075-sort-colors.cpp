class Solution {
public:
    void sortColors(vector<int>& nums) {
      int size=nums.size();
        int i=0;
        int l=0;
        int r=size-1;
        
        while(i<=r)
        {
            if(nums[i]==0)
            {
                swap(nums[i],nums[l]);
                i++;
                l++;
            }
            else if(nums[i]==2)
            {
                swap(nums[i],nums[r]);
                r--;
            }
            else{
                i++;
            }
        }
    }
};