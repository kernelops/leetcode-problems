# Last updated: 6/3/2026, 11:35:16 PM
class Solution:
    def twoSum(self, nums: list[int], target: int) -> list[int]:
        """
        Returns indices of the two numbers in 'nums' that add up to 'target'.
        Exactly one valid solution exists in the input.
        """
        seen = {}
        
        for i, num in enumerate(nums):
            complement = target - num
            
            # If we've already seen the complement, return the indices
            if complement in seen:
                return [seen[complement], i]
            
            # Store the index of the current number
            seen[num] = i
        
        # By problem statement, this line should never be reached
        # (since one solution is guaranteed to exist)
        return []
