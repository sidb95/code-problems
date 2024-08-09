"""
sbhatore
04 August 2024

# Assumptions:
#
#
#
# In:
#
#
#
#
# Out:
#
#
#
# Solution:
#
#
#
# pseudocode:
"""

def calcAnswer():
    pass


def __main__():
    T = int(input())
    for t in range(0, T):
        a, b, x, y = map(int, input().split())
        nums1 = sorted([a, b])
        nums2 = sorted([x, y])
        if ((nums1[0] in nums2) or (nums1[1] in nums2)):
            print("YES")
        elif (nums1[0] > nums2[0] and nums1[0] < nums2[1]):
            if (nums1[1] > nums2[0] and nums1[1] < nums2[1]):
                print("NO")
            else:
                print("YES")
        elif (nums1[0] < nums2[0] and nums1[1] < nums2[0]):
            print("NO")
        elif (nums1[0] > nums2[1] and nums1[1] > nums2[1]):
            print("NO")
        elif (nums1[0] < nums2[0] and nums1[1] > nums2[1]):
            print("NO")
        else:
            print("YES")
    #
    return


__main__()
