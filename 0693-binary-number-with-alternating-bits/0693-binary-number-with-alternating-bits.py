class Solution(object):
    def hasAlternatingBits(self, n):
        """
        :type n: int
        :rtype: bool
        """
        binary_str = bin(n)[2:]
        for i in range (1, len(binary_str)):
            if binary_str[i] == binary_str[i-1]:
                return False
            
        return True
        