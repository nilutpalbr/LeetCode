class Solution {
public:
    string reverseWords(string s) {
         stack<string> st2; string temp="";
        for(int i=s.length()-1;i>=0;i--){
            if(s[i]==' '){
                st2.push(temp);
                temp="";
            }
            else{
                temp+=s[i];
            }
        }
        string temp2=temp;
        string ans="";
        st2.push(temp2);
        while(!st2.empty()){
            string top=st2.top();
            st2.pop();
            ans+=top;
            ans+=" ";
        }
        //ans+=temp2;
        ans.pop_back();
        return ans;
    }
};