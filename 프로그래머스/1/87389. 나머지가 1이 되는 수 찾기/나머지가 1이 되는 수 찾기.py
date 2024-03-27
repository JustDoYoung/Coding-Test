def solution(n: int):
    n -= 1
    answer = n

    for i in range(2, int(n**0.5) + 1):
        if n % i == 0:
            answer = i
            break

    return answer