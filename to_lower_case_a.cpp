/*
https://leetcode.com/problems/to-lower-case/

Implement function ToLowerCase() that has a string parameter str, and returns the same string in lowercase.

 

Example 1:

Input: "Hello"
Output: "hello"
Example 2:

Input: "here"
Output: "here"
Example 3:

Input: "LOVELY"
Output: "lovely"

*/

class Solution {
public:
    string toLowerCase(string str) {
        
        int diff = 'A' - 'a';
        
        for(char &c:str)
        {
            if(c>='A' && c<='Z')
                c -= diff;
        }
        return str;
    }
};
