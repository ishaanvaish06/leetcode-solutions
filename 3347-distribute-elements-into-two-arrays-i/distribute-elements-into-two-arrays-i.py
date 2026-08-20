class Solution:
    def resultArray(self, nums: List[int]) -> List[int]:
        l1=list()
        l2=list()
        l1.append(nums[0])
        l2.append(nums[1])

        a=nums[0]
        b=nums[1]

        for i in range(2,len(nums)):
            if a>b:
                l1.append(nums[i])
                a=nums[i]
                
            else:
                l2.append(nums[i])
                b=nums[i]
                

        return l1+l2
        