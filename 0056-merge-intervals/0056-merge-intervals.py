class Solution:
    def merge(self, intervals: List[List[int]]) -> List[List[int]]:
        intervals.sort()
        arr=[]
        prev=intervals[0]

        for it in intervals:
            if it[0]<=prev[1]:
                prev[1]=max(prev[1], it[1])
            else:
                arr.append(prev)
                prev=it

        arr.append(prev)
        return arr 