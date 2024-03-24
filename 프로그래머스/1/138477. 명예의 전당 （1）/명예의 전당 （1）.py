def solution(k, score):
    answer = []

    rank = []

    for s in score:
        if len(rank) < k:
            rank.append(s)
            rank.sort()
        else:
            if rank[0] < s:
                rank[0] = s
                rank.sort()
        answer.append(rank[0])
    return answer