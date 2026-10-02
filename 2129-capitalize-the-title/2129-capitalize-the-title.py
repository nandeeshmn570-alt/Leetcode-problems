class Solution:
    def capitalizeTitle(self, title: str) -> str:
        ans = ""
        i = 0
        while i < len(title):
            s = ""

            while i < len(title) and title[i] != " ":
                s += title[i]
                i = i + 1
            if len(s) < 3:
                if len(ans) == 0:
                    ans += s.lower()
                else:
                    ans += " " + s.lower()
            else:

                if len(ans) == 0:
                    ans += s.capitalize()
                else:
                    ans += " " + s.capitalize()
            i = i + 1
        return ans
