def solution(s):
    answer = 0

    alpha_1 = s[0]
    count_1, count_2 = 0, 0

    for i, c in enumerate(s):
        if alpha_1 == "":
            alpha_1 = c

        if alpha_1 == c:
            count_1 += 1
        else:
            count_2 += 1

        if count_1 == count_2:
            alpha_1 = ""
            count_1, count_2 = 0, 0
            answer += 1
    else:
        if count_1 != count_2:
            answer += 1

    return answer