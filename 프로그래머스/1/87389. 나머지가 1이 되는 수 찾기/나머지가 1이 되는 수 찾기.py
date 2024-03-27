def solution(n: int):
    n -= 1
    answer = n

    for i in range(2, n+1):
        if n % i == 0:
            answer = i
            break

    return answer