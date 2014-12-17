class Solution {
public:
     vector<int> plusOne(vector<int> &digits) {
        add(digits, 1);
        return digits;
    }
    void add(vector<int> &digits, int digit)
    {
        typedef vector<int>::reverse_iterator Iterator; // to use rbegin() & rend(), using reverse_iterator instead of iterator
        int c = digit;
        for(Iterator p = digits.rbegin(); p != digits.rend(); ++p)
        {
            *p += c;
            c = *p / 10;
            *p %= 10;
        }
        if(c>0)
            digits.insert(digits.begin(), 1);
    }
};
