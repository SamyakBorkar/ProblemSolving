class Solution:
    def addBinary(self, a: str, b: str) -> str:
        x=int(a, 2)
        y=int(b, 2)
        res=str(bin(x+y))
        return res[2:]


sol=Solution()
a="11"
b="1"
print(sol.addBinary(a, b))