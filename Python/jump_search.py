from math import isqrt

def jump_search(values, target):
    n = len(values)
    if n == 0:
        return -1
    step = isqrt(n)
    start, end = 0, step
    while start < n and values[min(end, n) - 1] < target:
        start = end
        end += step
        if start >= n:
            return -1
    for index in range(start, min(end, n)):
        if values[index] == target:
            return index
        if values[index] > target:
            break
    return -1


if __name__ == "__main__":
    values = [2, 5, 9, 12, 17, 21, 30]
    index = jump_search(values, 17)
    print(f"Found at index {index}" if index >= 0 else "Not found")
