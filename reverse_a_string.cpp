class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) {
            return false;
        }
        int temp = x;
        int lastdigit = 0;
        long long reverse = 0;
        while (x > 0) {
            lastdigit = x % 10;
            reverse = (reverse * 10) + lastdigit;
            x = x / 10;
        }
        return temp == reverse;
    }
};

/*
Dry Run

let number: x = 121

Initially:

x = 121
temp = 121
lastdigit = 0
reverse = 0

First check:
x < 0 → 121 < 0 → false (skip if-block)

Iteration 1:

x > 0 → 121 > 0 → true

So, the loop executes.

lastdigit = 121 % 10 → 1
reverse = (0 * 10) + 1 → 1
x = 121 / 10 → 12

---

Iteration 2:

Now:

x = 12

Check the condition:

x > 0 → 12 > 0 → true

The loop executes again.
lastdigit = 12 % 10 → 2
reverse = (1 * 10) + 2 → 12
x = 12 / 10 → 1

---

Iteration 3:

Now:

x = 1

Check the condition:

x>0  (1>0) → true

The loop executes again.

lastdigit = 1 % 10 → 1
reverse = (12 * 10) + 1 = 121
x = 1 / 10 → 0

---

### Final Check

Now:

x = 0

Check the condition:

x>0 → (0>0) → false

Therefore, the `while` loop stops, and the code cannot execute another iteration.

Final check for return:
temp == reverse → 121 == 121 → true

Returns true
*/
