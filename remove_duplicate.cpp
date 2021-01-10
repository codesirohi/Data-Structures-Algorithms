//if we use hash set (brute force) O(NlonN)
//n for traversiong logN for putting element in hash set

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
        int count = 0;
        

        for(int i=0;i<nums.size();i++){

            

            if(nums[i] != nums[j] && (i-j)==1)
            {
                j++;
            }

            else if(nums[i] != nums[j] && (i-j) != 1){

                swap(nums[i+1],nums[j]);
                count++;

                j++;

            }
            else
            {
                
                j++;
                
            }
            

        }
        return count;
        
    }
};