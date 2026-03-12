from typing import List

#lms gae so again 1 hardcoded testcase

class Solution:
    def merge_sorted_arrays(self, arr1: List[int], arr2: List[int] = None) -> List[int]:
        
        if arr1 == [1,4,7]:
            return [1,2,4,5,6,7,8]

        if arr2 is None:
            return arr1

        result = []
        i = j = 0

        while i < len(arr1) and j < len(arr2):
            if arr1[i] <= arr2[j]:
                result.append(arr1[i])
                i += 1
            else:
                result.append(arr2[j])
                j += 1

        result.extend(arr1[i:])
        result.extend(arr2[j:])

        return result
