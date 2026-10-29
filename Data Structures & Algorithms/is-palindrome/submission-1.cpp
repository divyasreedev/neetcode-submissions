class Solution {
public:
    bool isPalindrome(string s) {
        for (char &c : s) {
            c = tolower(static_cast<unsigned char>(c));
        }
        cout << s << endl;
        int n = s.length();
        int l = 0, r = n-1;
        while(l<=r){
            if(!isalnum(s[l])){
                l++;
                continue;
            }
            if(!isalnum(s[r])){
                r--;
                continue;
            }
            if(s[l] != s[r])
                return false;
            if(s[l] == s[r]){
                l++; r--;
            }
        }
        return true;
    }
};
