/*************
Implement strStr().

Returns the index of the first occurrence of needle in haystack, 
or -1 if needle is not part of haystack. 
**************/


class Solution {
public:
    int strStr(char *haystack, char *needle) {
        int len_hay = strlen(haystack);
        int len_nee = strlen(needle);
        for(int i=0; ;i++)
        {
            for(int j=0; ;j++)
            {
                if(j == len_nee)
                    return i;
                if(i + j == len_hay)
                    return -1;
                if(*(needle+j) != *(haystack+i+j))
                    break;
            }
        }
    }
};