class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        hmap={}
        for i in range(len(nums)):
            hmap[nums[i]]=i
        for i in range(len(nums)):
            complement=target-nums[i]
            if complement in hmap and hmap[complement]!=i:
                return [i,hmap[complement]]