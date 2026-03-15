/* 12 leetcode: Integer to Roman
ý tưởng thuật toán:

 */

#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    string intToRoman(int num) {
        string result = "";
        int values[13] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
        string symbols[13] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
        for (int i = 0; i < 13; i++) {
            while (num >= values[i]) {
                result += symbols[i];
                num -= values[i];
            }
        }
        return result;   
        
    }
};

/* leetcode 13: Roman to Integer */

class Solution {
public:
    int romanToInt(string s) {
        
    }
};