class Solution {
public:
    int hammingWeight(uint32_t n) {
        int c=0,i=0;
        while(i<32)
        {
            int k=n%2;
            if(k==1)
             c++;
            n=n/2;
            i++;
        }
        return c;
    }
};
