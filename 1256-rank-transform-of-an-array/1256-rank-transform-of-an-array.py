class Solution:
    def arrayRankTransform(self, arr: List[int]) -> List[int]:
        rankVal={}
        uniqNums=sorted(list(set(arr)))

        for i in range(len(uniqNums)):
            rankVal[uniqNums[i]]=i+1
        
        for i in range(len(arr)):
            arr[i]=rankVal[arr[i]]
        
        return arr