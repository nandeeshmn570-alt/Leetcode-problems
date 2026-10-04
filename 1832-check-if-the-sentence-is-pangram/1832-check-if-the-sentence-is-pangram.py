class Solution(object):
    def checkIfPangram(self, sentence):
        """
        :type sentence: str
        :rtype: bool
        """
        chars="abcdefghijklmnopqrstuvwxyz"

        for ch in chars:
            if ch not in sentence:
                return False
        return True
        