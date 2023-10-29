# Intutive Question:

### Question:
There are 1000 buckets, one of them contains poison, the rest are filled with water. They all look the same. If a pig drinks that poison it will die within in 30 mins. What is the minimum amount of pigs you need to figure out which bucket contains the poison.

### Answer:
The answer is 10

<u>Lets undestand the solution with only 10 buckets:</u>

**Scenario**: You have 10 buckets labeled from 1 to 10, and one of them contains poison. You want to determine which bucket has the poison using the minimum number of pigs.

1. Number the buckets from 1 to 10.
2. Convert the bucket numbers to their binary representations, using 4 bits since you have 10 buckets. Here are the binary representations for buckets 1 to 10:
   - Bucket 1: 0001
   - Bucket 2: 0010
   - Bucket 3: 0011
   - Bucket 4: 0100
   - Bucket 5: 0101
   - Bucket 6: 0110
   - Bucket 7: 0111
   - Bucket 8: 1000
   - Bucket 9: 1001
   - Bucket 10: 1010

3. You will need one pig for each bit position in the binary representation, which is 4 pigs (Pig 1, Pig 2, Pig 3, and Pig 4).
4. Assign each pig to check a specific bit position:
   - Pig 1 checks the leftmost (most significant) bit.
   - Pig 2 checks the second bit from the left.
   - Pig 3 checks the third bit from the left.
   - Pig 4 checks the rightmost (least significant) bit.

5. Feed the pigs water from the corresponding buckets based on their assigned bit positions:
   - Pig 1 drinks from buckets with the first bit set to 1.
   - Pig 2 drinks from buckets with the second bit set to 1.
   - Pig 3 drinks from buckets with the third bit set to 1.
   - Pig 4 drinks from buckets with the fourth bit set to 1.

For example, if Bucket 3 contains the poison, you would feed water from Bucket 3 to Pigs 1, 2, and 3, and no water to Pig 4.

6. After 30 minutes, observe which pigs have died. If Pig 1, Pig 2, and Pig 3 die, it means that the binary representation of the poisoned bucket is 0011, which corresponds to Bucket 3.

This binary search strategy allows you to identify the poisoned bucket with only 4 pigs, even when dealing with 10 buckets.


# Leetcode problems:

1. [Poor Pigs](https://leetcode.com/problems/poor-pigs/description/)
