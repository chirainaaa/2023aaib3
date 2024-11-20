class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {
        sort(arr.begin(),arr.end()); //小到大排好
        int N = arr.size();  //總共有N個數
        for(int i=0;i<N-2;i++){   //for迴圈要 -2,因為下面有i+2
            if(arr[i]-arr[i+1] != arr[i+1]-arr[i+2]) return false;
        }
        return true;    
    }
};