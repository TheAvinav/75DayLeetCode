class Solution:
    def merge(self, nums1: list[int], m: int, nums2: list[int], n: int) -> None:
        """
        Do not return anything, modify nums1 in-place instead.
        """
        right = m + n - 1
        one_index = m - 1
        two_index = n - 1

        while two_index >= 0:
            if one_index >= 0 and nums1[one_index] > nums2[two_index]:
                nums1[right] = nums1[one_index]
                one_index = one_index - 1
                
            else:
                nums1[right] = nums2[two_index]
                two_index = two_index - 1
            
            right -= 1

                

        