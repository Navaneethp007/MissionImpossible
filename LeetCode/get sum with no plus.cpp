//simple solution
class Solution {
public:
    int getSum(int a, int b) {
        int s=log2((pow(2,a))*(pow(2,b)));
        return s;
     }
};

//bit manipulation
class Solution {
public:
    int getSum(int a, int b) {
        unsigned int s;
        do{
            s=a&b;
            a=a^b;
            b=s<<1;
        }while(s);
        return a;
     }
};
