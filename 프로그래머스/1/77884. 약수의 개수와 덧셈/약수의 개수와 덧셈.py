def solution(left, right):
    answer = (right - left + 1) * (left + right) // 2

    for num in range(left, right + 1):
        sqrt = num**0.5
        if sqrt.is_integer() == True:
            answer -= 2 * num

    return answer