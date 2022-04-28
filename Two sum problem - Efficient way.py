def two_Sum(nums, target):
    out = []
    sum1 = nums
    for i in range(0, len(nums)):
        complement = target-nums[i]
        if((complement in sum1) and (i != sum1.index(complement)) ):
            out.append(i)
            out.append(sum1.index(complement))
            break
    return out

x = [3,2,3]
print('[3,2,3] : ',two_Sum(x,6))

y = [2,7,11,15]
print('[2,7,11,15] : ',two_Sum(y,9))
