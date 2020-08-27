#include<bits/stdc++.h>
using namespace std;

std::string printBinary(int num, int bits) {
    std::vector<char> digits(bits);
    for (int i = 0; i < bits; ++i) {
        digits.push_back(num % 2 + '0');
        num >>= 1;
    }
    return std::string(digits.rbegin(), digits.rend());
}

int main()
{
    int x = 67843;
    //Decimal to Binary conversion in(8/ 16/ 32) bits form
     cout<<printBinary(x, 32)<<endl;
}
