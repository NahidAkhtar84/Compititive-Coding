
## Brian Kerninghan's Algorithm: 

**and operation between n and (n-1) removes the right most bit as from the right most significant bit(1) it starts flipping**

The expression `num &= (num - 1)` is used to clear (unset) the least significant set bit in a binary number. It works by using bitwise operations to turn off the rightmost (least significant) 1 bit in the binary representation of the number. Here's an example:

Let's say we have a number `num` in binary representation: `101100`.

- `num` in decimal: 44
- `num` in binary: 101100

Now, let's apply the operation `num &= (num - 1)`:

1. `num - 1` will be `43` in decimal, which is `101011` in binary.
2. Performing the bitwise AND operation:
   - `101100` (num)
   - `101011` (num - 1)
   - --------------
   - `101000`

The least significant set bit in the original binary number has been cleared, resulting in the binary number `101000`, which is 40 in decimal.

So, after the operation, the value of `num` becomes 40.

Here's the code in Python:

```python
num = 44  # Binary: 101100
num &= (num - 1)
print(num)  # Output: 40
```

This operation is commonly used to count the number of set bits (1s) in a binary number by repeatedly clearing the least significant set bit until the number becomes 0.

***Kerninghans algorithm can count the number of significant bits:***
Example code:

```python
def count_number_of_significant_bits(n):
    cnt = 0
    while n:
        n &= n-1
        cnt += 1
    return cnt

count_ = count_number_of_significant_bits(10)
print(count_)

```

## Leetcode problems:

1. [Sort Integers by The Number of 1 Bits](https://leetcode.com/problems/sort-integers-by-the-number-of-1-bits/description/)