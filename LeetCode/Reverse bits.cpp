class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        int i=0;
        uint32_t s=0;
        while(n>0)
        {
            s=s+(n%2<<(31-i));
            n=n>>1;
            i++;
        }
        return s;
    }
};
