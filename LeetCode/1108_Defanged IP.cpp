class Solution {
public:
    string defangIPaddr(string address) {
        int l=address.length();
        string s="";
        for(int i=0;i<l;i++)
        {
            if(address[i]=='.')
                s+="[.]";

            else
             s+=address[i];
        }
        return s;
    }
};
