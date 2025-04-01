class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        if((str1+str2) != (str2+str1)) return "";

        int n = gcd(str1.length(), str2.length());

        return str2.substr(0,n);
    }

    int gcd(int i, int j) {
        if(j == 0) return i;
        else return gcd(j, i%j);
    }
};