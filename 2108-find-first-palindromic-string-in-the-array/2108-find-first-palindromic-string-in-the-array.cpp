class Solution {
public:
   bool isPalin(const string &check){
    int i=0;int j=check.length()-1;
    while(i<=j){
        if(check[i++]!=check[j--])return false;
        
        }
        return true;
   }
    string firstPalindrome(vector<string>& words) {
        for(const string &word :words){
            if(isPalin(word)){
                return word;
            }

        }
        return "";
    }
};