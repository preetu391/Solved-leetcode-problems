class Solution {
public:
    bool isPalindrome(int x) {
        if (x<0) {return false;}
        long int res = 0;
        long int temp = x;
        while (temp != 0) {
          res = res * 10 + (temp % 10);
          temp = (temp - (temp % 10)) / 10;
         }
        if (res == x) {return true;}
        else {return false;}
    }
};