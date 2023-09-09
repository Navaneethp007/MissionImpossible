class Solution {
public:
    string interpret(string command) {
        string s="";
        for(int i=0;i<command.length();)
        {
            if(command[i]=='G'){
            s+='G';
            i++;
            }
            else if(command[i]=='(' && command[i+1]==')'){
            s+='o';
            i+=2;
            }
            else{
            s+="al";
            i+=4;
            }
        }
        return s;
    }
};
//use for loop saves time than while loop
