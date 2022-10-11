  vector<string> ans;
    
    void solve(string digits, int i, vector<char> s)
    {
        //Base Condition
        
        if(i>=digits.size())
        {
            string a;
            for(auto i:s) a+=i;
            ans.push_back(a);
            return;
        }
        
        // Choice Diagram
        
        if(digits[i]=='2')
        {
            s.push_back('a');
            solve(digits,i+1,s);
            s.pop_back();
            s.push_back('b');
            solve(digits,i+1,s);
            s.pop_back();
            s.push_back('c');
            solve(digits,i+1,s);
            s.pop_back();
        }
        
        else if(digits[i]=='3')
        {
            s.push_back('d');
            solve(digits,i+1,s);
            s.pop_back();
            s.push_back('e');
            solve(digits,i+1,s);
            s.pop_back();
            s.push_back('f');
            solve(digits,i+1,s);
            s.pop_back();
        }
        
        else if(digits[i]=='4')
        {
            s.push_back('g');
            solve(digits,i+1,s);
            s.pop_back();
            s.push_back('h');
            solve(digits,i+1,s);
            s.pop_back();
            s.push_back('i');
            solve(digits,i+1,s);
            s.pop_back();
        }
        
        else if(digits[i]=='5')
        {
            s.push_back('j');
            solve(digits,i+1,s);
            s.pop_back();
            s.push_back('k');
            solve(digits,i+1,s);
            s.pop_back();
            s.push_back('l');
            solve(digits,i+1,s);
            s.pop_back();
        }
        
        else if(digits[i]=='6')
        {
           s.push_back('m');
            solve(digits,i+1,s);
            s.pop_back();
            s.push_back('n');
            solve(digits,i+1,s);
            s.pop_back();
            s.push_back('o');
            solve(digits,i+1,s);
            s.pop_back(); 
        }
        
        else if(digits[i]=='7')
        {
            s.push_back('p');
            solve(digits,i+1,s);
            s.pop_back();
            s.push_back('q');
            solve(digits,i+1,s);
            s.pop_back();
            s.push_back('r');
            solve(digits,i+1,s);
            s.pop_back();
            s.push_back('s');
            solve(digits,i+1,s);
            s.pop_back();
        }
        
        else if(digits[i]=='8')
        {
            s.push_back('t');
            solve(digits,i+1,s);
            s.pop_back();
            s.push_back('u');
            solve(digits,i+1,s);
            s.pop_back();
            s.push_back('v');
            solve(digits,i+1,s);
            s.pop_back(); 
        }
        
        else if(digits[i]=='9')
        {
            s.push_back('w');
            solve(digits,i+1,s);
            s.pop_back();
            s.push_back('x');
            solve(digits,i+1,s);
            s.pop_back();
            s.push_back('y');
            solve(digits,i+1,s);
            s.pop_back();
            s.push_back('z');
            solve(digits,i+1,s);
            s.pop_back();
        }
        
        
    }
    
    vector<string> letterCombinations(string digits) 
    {
        if(digits.size()==0) return {};
        
        vector<char> x;
        solve(digits,0,x);
        
        return ans;
    }