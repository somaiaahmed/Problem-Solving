class Solution {
public:
    int hammingWeight(int n) {
        if (n == 0){
            return 0;
        }
        // Divide: Split into the least significant bit and the rest
        int lastBit = n & 1;   // Check if the least significant bit is 1
        int rest = n >> 1;     // Shift right to remove the least significant bit

        // Conquer: Count set bits in the rest recursively
        return lastBit + hammingWeight(rest);
    }
};