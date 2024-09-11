//使用教過的 剝皮法,再左右比對,不同就ans++
class Solution {
public:
    int minBitFlips(int start, int goal) {
        int ans=0; //迴圈前面 ans=0
        while(start>0 || goal>0){ //只要還活著,就剝皮
            if(start%2 != goal%2) ans++; //一言不合就++
            start /= 2; //剝皮
            goal /= 2; //剝皮
        }
        return ans;   //迴圈後面 return ans
    }
};