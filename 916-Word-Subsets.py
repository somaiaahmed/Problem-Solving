from collections import Counter
from typing import List

class Solution:
    def wordSubsets(self, words1: List[str], words2: List[str]) -> List[str]:
        # Step 1: Create a counter for the maximum frequency of each character required
        max_char_count = {}
        for word in words2:
            word_count = Counter(word)
            for char, count in word_count.items():
                if char in max_char_count:
                    max_char_count[char] = max(max_char_count[char], count)
                else:
                    max_char_count[char] = count

        # Step 2: Check each word in words1 against the max_char_count
        res = []
        for word in words1:
            word_count = Counter(word)
            is_universal = True
            for char, count in max_char_count.items():
                if word_count.get(char, 0) < count:
                    is_universal = False
                    break
            if is_universal:
                res.append(word)

        return res