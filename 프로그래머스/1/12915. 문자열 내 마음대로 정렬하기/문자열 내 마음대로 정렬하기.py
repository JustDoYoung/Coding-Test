def solution(strings, n):
    answer = sorted(strings)
    answer = sorted(answer, key=lambda x: x[n])
    return answer