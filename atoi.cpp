/****************************************************************
Implement atoi to convert a string to an integer.

Hint: Carefully consider all possible input cases. If you want a challenge, 
please do not see below and ask yourself what are the possible input cases.

Notes: It is intended for this problem to be specified vaguely (ie, no given input specs).
You are responsible to gather all the input requirements up front.

Requirements for atoi:

The function first discards as many whitespace characters as necessary until the first non-whitespace character is found. 
Then, starting from this character, takes an optional initial plus or minus sign followed by as many numerical digits as possible, 
and interprets them as a numerical value.
The string can contain additional characters after those that form the integral number, 
which are ignored and have no effect on the behavior of this function.
If the first sequence of non-whitespace characters in str is not a valid integral number, 
or if no such sequence exists because either str is empty or it contains only whitespace characters, no conversion is performed.
If no valid conversion could be performed, a zero value is returned. 
If the correct value is out of the range of representable values, INT_MAX (2147483647) or INT_MIN (-2147483648) is returned.
************************************************************************/



const int maxDiv10 = INT_MAX/10;
class Solution {
public:
    int atoi(const char *str) {
        int i=0;
        int n = strlen(str);
        // ignore leading space
        while(i<n && isspace(*(str+i)))
            i++;
        // deal with sign
        int sign = 1;
        if(i<n && *(str+i) == '+')
            i++;
        else if(i<n && *(str+i) == '-')
        {
            sign = -1;
            i++;
        }
        // conversion
        int num = 0;
        while(i<n && isdigit(*(str+i)))
        {
            int digit = int(*(str+i)) - 48; // give special attention
            if(num > maxDiv10 || num == maxDiv10 && digit >=8)
                return sign == 1 ? INT_MAX : INT_MIN;
            num = num*10 + digit;
            i++;
        }
        return sign * num;
        
    }
};