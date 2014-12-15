class Solution:
    # @param s, a string
    # @return a boolean
    def isPalindrome(self, s):
        def toChars(s):   # preprocessing the string into a proper format
            s = s.lower()
            letters = ''
            for c in s:
                if c in 'abcdefghijklmnopqrstuvwxyz0123456789':
                    letters = letters + c
            return letters
        def isPal(s):
            if len(s) <= 1:
                return True
            else:
                i = 0                
                while(i <= len(s)/2):
                    if(s[i] != s[-1-i]):  # compare two end, direction to the middle
                        return False
                    i += 1
            return True
        return isPal(toChars(s))
