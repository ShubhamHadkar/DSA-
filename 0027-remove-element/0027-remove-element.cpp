class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
    int i=0;
    int k;
    int j;
    while(i < nums.size()){
            if(nums[i]==val){
                nums.erase(nums.begin() + i);
            }else{
                i++;
            }
    }
    
    return i; 
    }
};