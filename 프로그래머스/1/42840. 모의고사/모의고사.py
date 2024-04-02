def solution(answers):
    supo_1 = [1, 2, 3, 4, 5]
    supo_2 = [2, 1, 2, 3, 2, 4, 2, 5]
    supo_3 = [3, 3, 1, 1, 2, 2, 4, 4, 5, 5]

    supo_score = [0, 0, 0]

    for i, ans in enumerate(answers):
        if supo_1[i % len(supo_1)] == ans:
            supo_score[0] += 1
        if supo_2[i % len(supo_2)] == ans:
            supo_score[1] += 1
        if supo_3[i % len(supo_3)] == ans:
            supo_score[2] += 1

    answer = []
    for i, score in enumerate(supo_score):
        if max(supo_score) == score:
            answer.append(i + 1)

    return answer