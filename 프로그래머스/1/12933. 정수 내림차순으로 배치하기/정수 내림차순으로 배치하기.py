def solution(n):

    n = str(n)
    n = "".join(sorted(n, reverse=True))
    answer = int(n)

    return answer