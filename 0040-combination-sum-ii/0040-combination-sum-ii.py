class Solution:
    def combinationSum2(self, candidates: List[int], target: int) -> List[List[int]]:
        ans = []
        ds = []
        n = len(candidates)
        candidates.sort()

        def rec(ind, target, ds):
            if target == 0:
                ans.append(ds[:])  # Append a copy of the current combination
                return
            for i in range(ind, n):
                if i > ind and candidates[i] == candidates[i - 1]:
                    continue  # Skip duplicates
                if candidates[i] > target:
                    break
                ds.append(candidates[i])
                rec(i + 1, target - candidates[i], ds)
                ds.pop()

        rec(0, target, ds)
        return ans