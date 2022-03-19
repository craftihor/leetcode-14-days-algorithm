class Solution {
public:
    string reverseWords(string s) {
        for(int i=0, j=0; i<s.length(), j<s.length(); i++, j++){
            while( j<s.length() && s[j] != ' ' ) j++;
            int r = j-1; 
            while( i < r ){
                swap( s[i], s[r]);
                i++, r--;
            } i = j; 
        } return s;
    }
};
