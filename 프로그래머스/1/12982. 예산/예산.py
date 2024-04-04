def solution(d, budget):
    answer = 0
    d = sorted(d)

    for dp_budget in d:
        budget -= dp_budget

        if budget < 0:
            break

        answer += 1
    return answer