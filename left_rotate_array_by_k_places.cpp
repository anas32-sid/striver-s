#include<vector>
using namespace std;

class Solution {
public:
    void rotate(vector<int>& nums, int k) {

    int n=nums.size();
        k=k%n;
        int temp[k];
//temp array part
    for(int i=0; i<k; i++){
        temp[i]=nums[i];
    }
//shifting part
        for(int i=k; i<n; i++){
            nums[i-k]=nums[i];
        }
//putting part
        for(int i=0; i<k; i++){
            nums[(n-k)+i]=temp[i];
        }
};
};
