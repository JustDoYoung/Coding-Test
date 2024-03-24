def solution(number):
    answer = 0

    length = len(number)

    for i in range(length - 2):
        for j in range(i + 1, length - 1):
            temp = number[i] + number[j]
            if count := number[j + 1 :].count(-temp):
                answer += count
    return answer