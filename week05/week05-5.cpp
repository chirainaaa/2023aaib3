class Solution {
public:
    int lengthOfLastWord(string s) {
        stringstream ss(s);  //可將字串string 變成 cout 的  iostream
        string word;
        while(ss>>word){  //一直讀,讀完才離開
            //大括號,什麼都不做
        }
        return word.length();   //最後殘留的那個字       
    }
};