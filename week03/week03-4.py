#在一堆草堆裡haystack,找到一支針needle
#在python 只要一行a.find(b) 在字串a 裡找到 字串b
class Solution:
    def strStr(self, a: str, b: str) -> int:
        return a.find(b)
