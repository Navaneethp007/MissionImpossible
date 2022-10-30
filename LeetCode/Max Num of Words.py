class Solution:
    def mostWordsFound(self, sentences: List[str]) -> int:
        mostWords = 0
        for sentence in sentences:
            mostWords = max(mostWords, len(sentence.split(' ')))
        return mostWords
