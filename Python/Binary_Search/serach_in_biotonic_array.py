def peak_element(arr):
    start = 0
    end = len(arr) - 1
    N = len(arr)

    while start <= end:
        mid = start + (end - start) // 2

        if mid == 0:
            if arr[mid] > arr[mid + 1]:
                return mid
            else:
                start = mid + 1
        elif mid == N - 1:
            if arr[mid] > arr[mid - 1]:
                return mid
            else:
                end = mid - 1
        else:
            if arr[mid] > arr[mid + 1] and arr[mid] > arr[mid - 1]:
                return mid
            elif arr[mid] < arr[mid + 1]:
                start = mid + 1
            elif arr[mid - 1] > arr[mid]:
                end = mid - 1
    return -1

def binary_search_desc(arr, target, start, end):
    while start <= end:
        mid = start + (end - start) // 2

        if arr[mid] == target:
            return mid
        elif arr[mid] < target:
            # move to left part
            end = mid - 1
        else:
            start = mid + 1
    return -1

def binary_search_asc(arr, target, start, end):
    while start <= end:
        mid = start + (end - start) // 2

        if arr[mid] == target:
            return mid
        elif arr[mid] > target:
            # move to left part
            end = mid - 1
        else:
            start = mid + 1
    return -1

def main():
    arr = [3, 9, 10, 20, 17, 5, 1]
    target = 20
    peak_element_index = peak_element(arr)
    left_part = binary_search_asc(arr, target, 0, peak_element_index - 1)
    right_part = binary_search_desc(arr, target, peak_element_index, len(arr) - 1)
    
    if left_part != -1:
        print(left_part)
    else:
        print(right_part)

if __name__ == "__main__":
    main()
