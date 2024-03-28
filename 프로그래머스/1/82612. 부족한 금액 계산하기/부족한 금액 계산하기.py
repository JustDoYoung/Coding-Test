def solution(price, money, count):
    answer = -1

    answer = money - price * count*(count+1)/2

    if answer > 0:
        answer = 0

    return abs(answer)