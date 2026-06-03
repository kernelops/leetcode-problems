# Last updated: 6/3/2026, 11:35:06 PM
class Solution(object):
    def isPalindrome(self, x):
        num_string = str(x)
        reverse = num_string[::-1]
        if num_string == reverse: 
            return True
        else:
            return False

        