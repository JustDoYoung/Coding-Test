def solution(n):
    answer = 0

    isPrime_list = [True] * (n + 1)

    for i in range(2, int(n**0.5)+ 1):
        if isPrime_list[i] == True:
            for j in range(i**2, n + 1, i):
                isPrime_list[j] = False

    answer = isPrime_list.count(True) - 2

    return answer