def isValid(piles, h, k):
    hours = 0

    for pile in piles:
        hours += (pile + k - 1) // k

        if hours > h:
            return False

    return True


def minEatingSpeed(piles, h):
    low = 1
    high = max(piles)
    ans = high

    while low <= high:
        mid = (low + high) // 2

        if isValid(piles, h, mid):
            ans = mid
            high = mid - 1
        else:
            low = mid + 1

    return ans


n = int(input())
piles = list(map(int, input().split()))
h = int(input())

print(minEatingSpeed(piles, h))