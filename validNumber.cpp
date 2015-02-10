/******
Validate if a given string is numeric.

Some examples:
"0" => true
" 0.1 " => true
"abc" => false
"1 a" => false

******/

class Solution {
public:
    bool isNumber(const char *s)
    {
        int len = strlen(s);
        // ignore leading whitespace
        int i = 0;
        while(isspace(*(s+i)))
            i++;
        // '+' and '-' are optional
        if(*(s+i) == '+' || *(s+i) == '-')
            i++;
        bool isNumeric = false;
        while(i < len && isdigit(*(s+i)))
        {
            i++;
            isNumeric = true;
        }
        if(i < len && *(s+i) == '.')
        {
            i++;
            while(i < len && isdigit(*(s+i)))
            {
                i++;
                isNumeric = true;
            }
        }
        // deal with trailing whitespace
        while(i < len && isspace(*(s+i)))
            i++;
        return isNumeric && (i == len);
    }
};
