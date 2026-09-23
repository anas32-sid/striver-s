class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i=0;
    int n=nums.size();
for(int j=1; j<n; j++){
    if(nums[j]!=nums[i]){
    nums[i+1]=nums[j];
        i++;
    }
}
return i+1;
}
};
// the brute fore approach is use set data structure, TC will be O(N log N)


/*
//  Optimal Approach, TC will be O(n)
iteration 1

j=1
i=0
 i  j
[1, 1, 2, 2, 3]
condition nums[j]!=nums[i] is false. (1==1)
----------------------------------------------------
2nd iteration
j=2
i=0
 i  `  j
[1, 1, 2, 2, 3]

now 1!=2 condition is true 

nums[i+1]=nums[j]
put value 2 to index 1

now, how our array looks [1, 2, 2, 2, 3]
----------------------------------------------------
3rd iteration
j=3
i=1
    i     j
[1, 2, 2, 2, 3]

2==2, condition is false
-----------------------------------------------------
4th iteration
j=4
i=1
    i  '      j
[1, 2, 2, 2, 3]

2!=3 condition is true

nums[i+1]=2nd index
nums[j]=4th index

nums[i+1]=nums[j]
put value 3 in index 2

now, how our array looks
[1, 2, 3, 2, 3]
-------------
how loop stops
after last iteration j will ++'s automatically then goes to check condition for for loop but
the condition we have taken is 
5<5 so this will become false

we returns i+1
*/
