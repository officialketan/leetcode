class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
       vector<int>a(n);
        
        
        for(int i=0;i<n;i++)
        {
            int n0= (i + k)%n;
            a[n0]=nums[i];
        }
        nums=a;
    }
};