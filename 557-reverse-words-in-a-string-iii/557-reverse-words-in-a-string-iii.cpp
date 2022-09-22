class Solution {
public:
    string reverseWords(string s) {
        queue<string> st2; string temp="";
        for(int i=0;i<s.length();i++){
            if(s[i]==' '){
                reverse(temp.begin(),temp.end());
                st2.push(temp);
                temp="";
            }
            else{
                temp+=s[i];
            }
        }
        string temp2=temp;
        reverse(temp2.begin(),temp2.end());
        string ans="";
        while(!st2.empty()){
            string top=st2.front();
            st2.pop();
            ans+=top;
            ans+=" ";
        }
        ans+=temp2;
        return ans;
    }
};