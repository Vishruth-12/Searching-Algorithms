def binary_search(values, low, high, target):
    while low <= high:
        mid = low + (high - low) // 2
        if values[mid] == target:
            return mid
        if values[mid] < target:
            low = mid + 1
        else:
            high = mid - 1
    return -1


def exponential_search(values, target):
    n = len(values)
    if n == 0:
        return -1
    if values[0] == target:
        return 0
    bound = 1
    while bound < n and values[bound] < target:
        bound *= 2
    return binary_search(values, bound // 2, min(bound, n - 1), target)


if __name__ == "__main__":
    values = [2, 5, 9, 12, 17, 21, 30]
    index = exponential_search(values, 21)
    print(f"Found at index {index}" if index >= 0 else "Not found")
