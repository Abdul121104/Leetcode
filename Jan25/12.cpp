class Solution {
public:
    bool canBeValid(string s, string locked) {
        int n=s.size();
        if(n%2!=0) return false;
        stack<int> openBracket, unlocked;
        for(int i=0; i<n; i++){
            if(locked[i]=='0') unlocked.push(i);
            else if(s[i]=='(') openBracket.push(i);
            else if(s[i]==')'){
                if(!openBracket.empty()) openBracket.pop();
                else if(!unlocked.empty()) unlocked.pop();
                else return false;
            }
        }

        while(!openBracket.empty() && !unlocked.empty() && openBracket.top()<unlocked.top()){
            openBracket.pop();
            unlocked.pop();
        }

        if(!openBracket.empty()) return false;

        return true;
    }
};
