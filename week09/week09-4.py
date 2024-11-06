# week09-4.py
# leetcode 860. Lemonade Change
class Solution:
    def lemonadeChange(self, bills: List[int]) -> bool:
        b5,b10,b20 = 0,0,0
        for b in bills: # 用迴圈慢慢收客人錢
            if b==5: # 客人拿5元鈔,不用找錢
                b5+=1 #直接收起來
            elif b==10:  # 客人拿10元鈔,要找錢
                if b5==0:return False #沒5元失敗
                b10 += 1 #沒失敗,就收錢
                b5 -= 1  # 找5元
            else:
                if b10>0 and b5>0:
                    b20 += 1
                    b10 -= 1
                    b5 -= 1
                elif b5>=3:
                    b20 += 1
                    b5 -= 3
                else:
                    return False
        return True