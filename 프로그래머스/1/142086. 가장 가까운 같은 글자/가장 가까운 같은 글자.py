def solution(s):
    answer = []

    for i, c in enumerate(s):

        item = -1

        if i > 0:
            temp = s[i - 1 :: -1]
            if c in temp:
                item = temp.index(c) + 1

        answer.append(item)

    return answer