class Solution {
public:
    bool repeatedSubstringPattern(string s) {
    string s2 = s + s;
    int N = s2.length();
    return s2.substr(1,N-2).find(s) != string::npos;  //npos����:�S���o�Ӧ�m�B�ܤj�ܤj
    } //subter()���r�� ��1�S��1(���ӬO0...N-1�{�b�ܦ�1..N-2)
};
