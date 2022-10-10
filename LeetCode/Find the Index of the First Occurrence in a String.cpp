class Solution {
public:
    int strStr(string haystack, string needle) 
    {
        if(needle=="")
            return 0;
        
        int i=0,j=0;
        while(i<haystack.size() && j<needle.size())
        {
            if(haystack[i]==needle[j])
            { // when there is a match then increase both the pointers
                i++;
                j++;
                if(j==needle.size()) // if the whole pattern has been matched then return
                    return i-needle.size();  // the value by going needle size steps backwards from the current index in array
            }
            else
            { // when there is no match then start checking from the haystack index
                i=i-j+1;  // such that it goes backwards till whatever length has been matched 
                j=0; // and checks from next index and start checking from pattern's beginning
            }            
        }        
        return -1;
    }
};
