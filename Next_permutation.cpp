//first linearly traverse from back search for the index 
//where a[i]<a[i+1] store i
//then traverse again from back and look for index j where 
//a[j]>a[i] and store j 
//now swap a[i] with a[j] and reverse the array from
//a[i+1] to a[a.size()-1];

class Solution {
public:
    void nextPermutation(vector<int>& nums) 
    {
        int ind1;
        int flag =0;
        
        int last = nums.size()-1;
        
        for(int i = last -1;i>=0;i--)
        {
            
            if(nums[i]<nums[i+1])
            {
                
                flag = 1;
                
                ind1 = i;
                break;
            }
            
        }
        
        
        if(flag == 0)
        {
            //this mean it is the last element or greatest element inthe order 
            //mow we just output the first one

            reverse(nums.begin(),nums.end());
        }
        
        else{
            
            for(int j = last; j>ind1 ;j--)
            {
            
                if(nums[j]>nums[ind1])
                {


                    swap(nums[j],nums[ind1]);
                    break;

                }
            
            }
              reverse(nums.begin()+ind1+1,nums.end());
        }
        
    }
};