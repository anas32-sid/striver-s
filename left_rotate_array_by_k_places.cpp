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
/*
Temp array storage:-
The first 2 elements of the array will be picked and stored in the temp array.
First, 10 will go into temp:
[10, ]
Then in the next iteration, 20:
[10, 20]
After this, the loop condition will become false (2 < 2 is false). So how many times did the loop run?
0 < 2 -> True here 
1 < 2 -> True here 
2 < 2 -> False here 
End loop
---------------------------------------------------------------
Shifting loop:- 
for(int i=k; i<n; i++){ 
    arr[i-k]=arr[i]; 
}

i = 2
k = 2
arr[i-k] = 0th index = 
arr[i]=30
[_, _, 30, 40, 50]

30 will go to the 0th index:
[30, _, 40, 50]

i = 3
k = 2
arr[i-k] = 1st index 
arr[i] = 3rd index (which is 40)
Now 40 will be moved to the 1st index:
[30, 40, _, 50]

i = 4
k = 2
arr[i-k] = 2nd index 
arr[i] = 4th index (which is 50)
This means put the element 50 into the 2nd index.
Now our array looks like this:
[30, 40, 50, _, _]
------------------------------------------------------
Putting first k elements at the end:-
for(int i=0; i<k; i++){ 
    arr[(n-k)+i]=temp[i]; 
}

This loop will run: 
0 < 2 -> 1st time 
1 < 2 -> 2nd time 
2 < 2 -> False
it will only run 2 times because the condition is i < k.

i = 0
n - k = 5 - 2 = 3
So the index is 3 (3rd index)
temp[i] = 10
This means put 10 in the 3rd index of the array:
[30, 40, 50, 10, _]

Then the loop runs again:
i = 1
arr[(n-k)+i] -> 5 - 2 + 1 = 4
At the 4th index, temp[1] = 20
This means put 20 at the 4th index:
[30, 40, 50, 10, 20]
*/
