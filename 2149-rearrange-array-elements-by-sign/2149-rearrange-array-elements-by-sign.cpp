class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n=nums.size();
        vector<int>arr(n);
        int p=0;
        int ne=1;
        int index=0;
        for(int i=0;i<n;i++)
        {
            if(nums[i]>0)
            {
                arr[p]=nums[i];
                p=p+2;
            }
            else{
                arr[ne]=nums[i];
                ne=ne+2;
            }
        }
        return arr;
    }
};