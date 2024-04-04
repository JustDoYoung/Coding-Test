def solution(arr):
    answer = []

    prev = -1
    for num in arr:
        if prev == num:
            continue
        answer.append(num)
        prev = num
    
    return answer