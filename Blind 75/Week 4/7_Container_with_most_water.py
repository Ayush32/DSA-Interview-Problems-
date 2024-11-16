def maxArea(height) -> int:
        start = 0
        end = len(height) - 1

        result = 0
        area = 0

        while start < end:

            breadth = end - start
            area = breadth * min(height[start],height[end])
            result = max(area,result)

            if height[start] < height[end]:
                start = start + 1
            else:
                end = end - 1

        return result
    
    
height = [1,8,6,2,5,4,8,3,7]
print(maxArea(height))