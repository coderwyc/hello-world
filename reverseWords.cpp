#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution
{
public:
      void reverseWords(string &s)
    {
        vector<string> words;
        int i = 0;
        int len = s.size();
        while(s[i] == ' ' && i < len) // leave out leading space
            i++;
        while(s[len-1] == ' ' && i < len) // leave out trailing space
            len--;
        // put word one by one into the words
        while(i < len) {
            int start = i;
            if(s[start] != ' ') {
                while(s[i] != ' ') // jump by one word
                    i++;
                words.push_back(s.substr(start , i - start));
            } else {
                while(s[i] == ' ') // jump space between word
                    i++;
                words.push_back(" ");
            }
        }
        // string concatenation in reverse order
        s = "";
        for(int i = words.size() - 1; i >= 0; i--)
            s += words[i];
    }
};
int main()
{
    //cout<<"hello world!"<<endl;
    string s = "  hello world my  ";
    Solution so;
    cout<<s<<endl;
    so.reverseWords(s);
    cout<<s<<endl;
    return 0;
}

