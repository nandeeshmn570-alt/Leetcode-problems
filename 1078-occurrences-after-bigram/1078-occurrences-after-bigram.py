class Solution:
    def findOcurrences(self, text: str, first: str, second: str) -> list[str]:
        li = text.split(" ")
        l = []
        n = len(li)
        for i in range(n):
            if i < n - 2 and li[i] == first and li[i + 1] == second:
                l.append(li[i + 2])

        return l
