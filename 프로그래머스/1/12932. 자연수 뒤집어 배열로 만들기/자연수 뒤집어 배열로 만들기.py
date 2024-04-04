def solution(n):

    n = str(n)
    n = n[::-1]

    answer = list(map(lambda x : int(x), n))

    return answer