class Solution {
public:
    void reverseString(vector<char>& s) {
        int left =0;
        int right=s.size()-1;

        while(left<right){
            swap(s[left], s[right]);
            left++;
            right--;
        }
    }
};

/*
Dry Run

let array: s = ['c', 'o', 'd', 'e']`

Initially:

`left = 0`
`right = 3`

So:

* `s[0] = 'c'`
* `s[3] = 'e'`

Now we check the condition:

left<right → 0<3 → true

So, the loop executes and we swap `s[left]` and `s[right]`.

After swapping:

`s = ['e', 'o', 'd', 'c']`

Then:

`left++` → `left = 1`
`right--` → `right = 2`

---

### Second Iteration

Now:

`left = 1`
`right = 2`

So:

* `s[1] = 'o'`
* `s[2] = 'd'`

Check the condition:

`left < right` → `1 < 2` → **true**

The loop executes again, and we swap `s[left]` and `s[right]`.

After swapping:

`s = ['e', 'd', 'o', 'c']`

Then:

`left++` → `left = 2`
`right--` → `right = 1`

---

### Final Check

Now:

`left = 2`
`right = 1`

Check the condition:

`left<right` → `2 < 1` → **false**

Therefore, the `while` loop stops, and the code cannot execute another iteration.

Final reversed array:

s = ['e', 'd', 'o', 'c']

*/
