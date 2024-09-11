class Solution {
public:
    int findDuplicate(vector<int>& nums) {
//         int size=nums.size();
//         int ans=0;
//         int no=0;
        
//         for(int i=0;i<size;i++)
//         {
//             ans=nums[i];
//             for(int j=i+1;j<size;j++)
//             {
//                 if(ans==nums[j])
//                 {
//                     no=nums[j];
//                     break;
//                 }
//             }
//         }
//         return no;
        
//         int ans=0;
//         for(int i=0;i<nums.size();i++)
//         {
//             int index=abs(nums[i]);
//             if(nums[index]<0)
//             {
//                 ans=index;
//                 break;
//             }
            
//             nums[index] *=-1;
//         }
        
//         return ans;
        
        
        while(nums[0]!=nums[nums[0]])
        {
            swap(nums[0],nums[nums[0]]);
            
        }
        return nums[0];
    }
};