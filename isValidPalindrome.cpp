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
        string t = "";
        for(int i=0; i<s.length(); i++)
        {   
            // processing string s before checking it is palindrome or not
            if(s[i] >= 'a' && s[i] <= 'z' || s[i] >= '0' && s[i] <= '9' || s[i] >= 'A' && s[i] <= 'Z')
            {
                if(s[i] >= 'A' && s[i] <= 'Z') //Upper case to Lower case
                    t += (s[i]-'A'+'a');
                else
                    t += s[i];   // string concatenation
            }
        }
        if(t=="")
            return true;
        for(int i=0;i<t.length()/2;i++)
        {
            if(t[i] != t[t.length()-i-1])
                return false;
        }
        return true;
        
    }
};
