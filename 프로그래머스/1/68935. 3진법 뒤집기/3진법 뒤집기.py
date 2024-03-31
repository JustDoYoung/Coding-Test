def solution(n):
    answer = 0

    while True:
        share, remain = divmod(n, 3)
        answer *= 3
        answer += remain
        n = share
        if n == 0:
            break

    return answer