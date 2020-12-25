class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        //create a stack and store every opening  type bracket
        //whenever the current input is a closing type bracket check if it matches the current closing type bracket
        for(char c : s) {
            if(c=='('||c=='{'||c=='[')
                st.push(c);
            else {
                if(st.empty()||c==')'&&st.top()!='('||c==']'&&st.top()!='['||c=='}'&&st.top()!='{')
                    return false;
                st.pop();
            }
        }
        return st.empty();
    }
};
