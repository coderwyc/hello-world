#include <iostream>
#include <stdlib.h>
using namespace std;
class Solution {
public:
    int strStr(char *haystack, char *needle)
    {
        if(*haystack == '\0')  // len(haystack) == 0
            return -1;
        if(*needle == '\0')  // len(needle) == 0
            return 0;
        char *p = haystack;
        char *q = needle;
        int index = 0;
        while(*p != '\0')        {

            if(*p == *q)     // the first element in needle  occurr in the haystack
            {
               bool match = compare(p, q);
               if(match)
                    return index;
            }
            p += 1;
            index += 1;
        }
        return -1;
    }
    // compare two string check to see if they are equal
    bool compare(char *sub, char *needle)
    {
        char *p = sub;
        char *q = needle;
        for(; *q != '\0'; p++, q++)
        {
            if(*p != *q)
                return false;
        }
        /*
        while(*q != '\0')
        {
            if(*p != *q)
                return false;
            p += 1;
            q += 1;
        }
        */
        return true;
    }
};

int main()
{
    cout<<"hello world"<<endl;
    //char haystack[] = "a";
    //char needle[] = "";
    char haystack[] = "mississippi";
    char needle[] = "ip";

    Solution s;
    cout<<s.strStr(haystack, needle)<<endl;;
    return 0;
}
