class Solution {
public:
    bool isPalindrome(string s) {
        string clean = "";

        for(auto x : s){
            if(isalnum(x)){
                clean += tolower(x);
            }
        }

        string ans = clean;
        reverse(ans.begin(), ans.end());

        return clean == ans;
    }
};