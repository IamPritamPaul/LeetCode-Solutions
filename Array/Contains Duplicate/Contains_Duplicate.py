class Solution(object):
    def containsDuplicate(self, nums):
        """
        :type nums: List[int]
        :rtype: bool
        """
        c=collections.Counter()
        c.update(nums)
        for i in c:
            if(c[i]>1): return True
        return False