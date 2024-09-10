class Solution {
public: 
    string decodeMessage(string key, string message) {
        char start='a';
        char mapping[300]={0};
        
        for(auto ch:key)
        {
            if(ch!=' '&& mapping[ch]==0)
            {
                mapping[ch]=start;
                start++;
            }
        }
        string ans;
        
        for(char ch : message)
        {
            //char ch=message[i];
            if(ch==' ')
            {
                ans.push_back(' ');
            }
           else {
                char decoded=mapping[ch];
                ans.push_back(decoded);
           }
        }
        return ans;
    }
};