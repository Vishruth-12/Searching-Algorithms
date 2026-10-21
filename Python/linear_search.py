def linear_search(values, target):
    for index, value in enumerate(values):
        if value == target:
            return index
    return -1


if __name__ == "__main__":
    values = [4, 8, 15, 16, 23, 42]
    target = 16
    index = linear_search(values, target)
    print(f"Found at index {index}" if index >= 0 else "Not found")
