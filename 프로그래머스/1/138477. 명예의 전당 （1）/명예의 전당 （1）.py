def solution(k, score):
    answer = []

    rank = []

    for s in score:
        rank.append(s)

        if len(rank) > k:
            rank.remove(min(rank))

        answer.append(min(rank))

    return answer