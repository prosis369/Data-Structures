'''

461. Hamming Distance

The Hamming distance between two integers is the number of positions at which the corresponding bits are different.
Given two integers x and y, calculate the Hamming distance.

Note:
0 ≤ x, y < 231.

Example:
Input: x = 1, y = 4
Output: 2

Explanation:
1   (0 0 0 1)
4   (0 1 0 0)
       ↑   ↑

The above arrows point to positions where the corresponding bits are different.

'''

class Solution:
    def hammingDistance(self, x: int, y: int) -> int:
        bin_x = list(bin(x).replace("0b", ""))
        bin_y = list(bin(y).replace("0b", ""))
        print(bin_x, bin_y)
        
        if x>y:
            diff = len(bin_x)-len(bin_y)
            for i in range(diff):
                bin_y.insert(0,'0')
        else: 
            diff = len(bin_y)-len(bin_x)
            for i in range(diff):
                bin_x.insert(0,'0')
        print(bin_x, bin_y)
        
        count = 0
        for i in range(len(bin_x)):
            if(bin_x[i] != bin_y[i]):
                count = count + 1
        return count

