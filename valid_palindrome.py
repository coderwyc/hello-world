class Solution:
    # @param s, a string
    # @return a boolean
    def isPalindrome(self, s):
        def toChars(s):
            s = s.lower()
            letters = ''
            for c in s:
                if c in 'abcdefghijklmnopqrstuvwxyz':
                    letters = letters + c
            return letters
        def isPal(s):
            if len(s) <= 1:
                return True
            else:
                return s[0] == s[-1] and isPal(s[1:-1])
        return isPal(toChars(s))
s1 = "A man, a plan, a canal: Panama";
s2 = "race a car"
ans = Solution()
print ans.isPalindrome(s1)
print ans.isPalindrome(s2)
