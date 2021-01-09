class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target)
    {
        
        map<int,int> m;
        
        for (int i = 0; i<nums.size(); i++)
        {
            int temp = target - nums[i];
            
            if(m.find(temp)!=m.end()){
                
                return {m[temp],i};
            }
            
            else{
                
                m[nums[i]] = i; 
            }
            
            
        }
    return {};

    }
};