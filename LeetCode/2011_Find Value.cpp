class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int c=0;
        for(int i=0;i<operations.size();i++)
        {
            if(operations[i]=="X++" || operations[i]=="++X")
             c+=1;
            else
             c-=1;
        }
        return c;
    }
};
