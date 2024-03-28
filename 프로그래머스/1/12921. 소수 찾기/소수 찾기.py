def solution(n):
    answer = 0

    isPrime_list = [True] * (n + 1)

    for i in range(2, int(n**0.5) + 1):
        if isPrime_list[i] == True:
            for j in range(2, n // i + 1):
                isPrime_list[i * j] = False
    answer = isPrime_list.count(True) - 2

    return answer