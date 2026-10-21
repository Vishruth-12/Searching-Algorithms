def binary_search(values, target):
    low, high = 0, len(values) - 1
    while low <= high:
        mid = low + (high - low) // 2
        if values[mid] == target:
            return mid
        if values[mid] < target:
            low = mid + 1
        else:
            high = mid - 1
    return -1


if __name__ == "__main__":
    values = [2, 5, 9, 12, 17, 21, 30]
    index = binary_search(values, 21)
    print(f"Found at index {index}" if index >= 0 else "Not found")
