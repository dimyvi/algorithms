def binary_search(ls, item):
    low = 0
    high = len(ls) - 1

    while low <= high:
        mid = (low + high) // 2
        guess = ls[mid]
        if guess == item:
            return mid
        if guess > item:
            high = mid - 1
        else:
            low = mid + 1
    return None

ans = binary_search([1, 2, 3, 4, 5, 6, 7, 8, 9, 10], 3)
print(ans)
