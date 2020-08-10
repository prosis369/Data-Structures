'''

338. Counting Bits

Given a non negative integer number num. For every numbers i in the range 0 ≤ i ≤ num calculate the number of 1's in their binary representation and return them as an array.

Example 1:

Input: 2
Output: [0,1,1]
Example 2:

Input: 5
Output: [0,1,1,2,1,2]
Follow up:

It is very easy to come up with a solution with run time O(n*sizeof(integer)). But can you do it in linear time O(n) /possibly in a single pass?
Space complexity should be O(n).
Can you do it like a boss? Do it without using any builtin function like __builtin_popcount in c++ or in any other language.

'''

class Solution:
    def countBits(self, num: int) -> List[int]:
        arr = [0 for i in range(num+1)]
        offset = 0
        for i in range(1,num+1):
            # print(i and i-1)
            if (i & (i-1)) == 0:
                arr[i] = 1
                offset = 0
            else:
                offset+=1
                arr[i] = 1 + arr[offset]
        return arr