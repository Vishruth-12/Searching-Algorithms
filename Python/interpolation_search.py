def interpolation_search(values, target):
    low, high = 0, len(values) - 1
    while low <= high and values[low] <= target <= values[high]:
        if values[low] == values[high]:
            return low if values[low] == target else -1
        pos = low + ((target - values[low]) * (high - low)) // (values[high] - values[low])
        if values[pos] == target:
            return pos
        if values[pos] < target:
            low = pos + 1
        else:
            high = pos - 1
    return -1


if __name__ == "__main__":
    values = [10, 20, 30, 40, 50, 60, 70]
    index = interpolation_search(values, 50)
    print(f"Found at index {index}" if index >= 0 else "Not found")
