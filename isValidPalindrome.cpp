/*
Given a string, determine if it is a palindrome, considering only alphanumeric characters and ignoring cases.

For example,
"A man, a plan, a canal: Panama" is a palindrome.
"race a car" is not a palindrome.

Note:
Have you consider that the string might be empty? This is a good question to ask during an interview.

For the purpose of this problem, we define empty string as valid palindrome.
*/
class Solution {
public:
    bool isPalindrome(string s) {
       string str;
       for(int i = 0; i < s.length(); i++)
       {
            if(isalpha(s[i]) || isdigit(s[i]))
                str.push_back(tolower(s[i]));        
       }
       
       for(int i = 0; i < str.length()/2; i++)
       {
           if(str[i] != str[str.length()-i-1])
                return false;
       }
       return true;
    }
};
