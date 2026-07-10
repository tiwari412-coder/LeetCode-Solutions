from collections import Counter

class Solution:
    def frequencySort(self, s: str) -> str:
        # Count frequency of each character
        count = Counter(s)
        
        # Sort characters by frequency in descending order
        sorted_chars = sorted(count.items(), key=lambda x: -x[1])
        
        # Build the result string
        return ''.join([char * freq for char, freq in sorted_chars])
