class Solution {
public:
    bool isPalindrome(string s) {
        string rev = "";
        for(char ch :s){
            if(isalnum(ch)){
                rev+=tolower(ch);
            }
        }
        string rev1 = rev;
        reverse(rev.begin(),rev.end());
        if(rev==rev1){
            return true;
        }else{
            return false;
        }

        
    }
};