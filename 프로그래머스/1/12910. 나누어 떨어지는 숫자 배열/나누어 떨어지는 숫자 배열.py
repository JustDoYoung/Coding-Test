def solution(arr, divisor):
    answer = [num for num in arr if num % divisor == 0]
    answer.sort()

    if not answer:
        answer = [-1]
    
    return answer