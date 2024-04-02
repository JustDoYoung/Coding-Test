def solution(answers):
    supo_1 = [1, 2, 3, 4, 5]
    supo_2 = [2, 1, 2, 3, 2, 4, 2, 5]
    supo_3 = [3, 3, 1, 1, 2, 2, 4, 4, 5, 5]

    supo_score = {1: 0, 2: 0, 3: 0}

    for i, ans in enumerate(answers):
        if supo_1[i % len(supo_1)] == ans:
            supo_score[1] += 1
        if supo_2[i % len(supo_2)] == ans:
            supo_score[2] += 1
        if supo_3[i % len(supo_3)] == ans:
            supo_score[3] += 1

    supo_score = sorted(supo_score.items(), key=lambda x: -x[1])
    rank = dict(filter(lambda x: x[1] == supo_score[0][1], supo_score))

    return list(rank.keys())