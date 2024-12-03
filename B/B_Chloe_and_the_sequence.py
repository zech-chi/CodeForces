import math
 
class Solution:
    def help(self, n: int, k: int) -> int:
        if n == 1:
            return 1
        pp = 2 ** n
        if pp // 2 == k:
            return n
        if k < 2 ** (n - 1):
            return self.help(n - 1, k)
        else:
            return self.help(n - 1, pp - k)
 
    def solve(self):
        n, k = map(int, input().split())
        print(self.help(n, k))
 
if __name__ == "__main__":
    Solution().solve()
