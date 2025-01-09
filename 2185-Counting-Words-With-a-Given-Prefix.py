class Solution:
    def prefixCount(self, words: List[str], pref: str) -> int:
        res=0
        for s in words:
            if s.startswith(pref) :
                res+=1
        return res