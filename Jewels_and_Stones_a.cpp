/*
https://leetcode.com/problems/jewels-and-stones/

You're given strings J representing the types of stones that are jewels, and S representing the stones you have.  Each character in S is a type of stone you have.  You want to know how many of the stones you have are also jewels.

The letters in J are guaranteed distinct, and all characters in J and S are letters. Letters are case sensitive, so "a" is considered a different type of stone from "A".

Example 1:

Input: J = "aA", S = "aAAbbbb"
Output: 3
Example 2:

Input: J = "z", S = "ZZ"
Output: 0
Note:

S and J will consist of letters and have length at most 50.
The characters in J are distinct.
*/

class Solution {
public:
    int numJewelsInStones(string J, string S) {
        
        int count = 0;
        /*first 26 capital letters, last 26 small letters*/
        int arr[52] = {0};
        
        /*Mark all letters which are gems.*/
        for(char& c: J)
        {
            if(c>='A' && c<='Z')
            {
                arr[c-'A'] = 1;
            }
            else if(c>='a' && c<='z')
            {
                arr[c-'a'+26] = 1;
            }
        }
        
        /*count number of gems in S*/
        for(char& c: S)
        {
            if(c>='A' && c<='Z')
            {
                if(arr[c-'A'] == 1) count++;
            }
            else if(c>='a' && c<='z')
            {
                if(arr[c-'a'+26] == 1) count++;
            }

        }
        
        return count;
    }
};
