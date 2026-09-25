class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n=nums.size();
        int i=0;
        int j=1;

        while(j<=n-1){

            if(nums[i]==0 && nums[j]!=0){  // [0, 1]
                swap(nums[i], nums[j]);
                i++;
                j++;
            }

            else if(nums[i]!=0 && nums[j]==0){ // [1, 0]
                i++;
                j++;
            }
            else if(nums[i]!=0 && nums[j]!=0){ // [1, 1]
                i++;
                j++;
            }
            else if(nums[i]==0 && nums[j]==0){ // [0, 0]
                j++;
            }
        }

    }
};