def solution(k, m, score):
    answer = 0

    score = sorted(score, reverse=True)
    box_count = len(score) // m

    for index in range(1, box_count + 1):
        box_price = score[index * m - 1] * m
        answer += box_price

    return answer