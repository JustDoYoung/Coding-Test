def solution(s):
    answer = []

    for i, c in enumerate(s):

        item = -1

        for index in range(i - 1, -1, -1):
            if c == s[index]:
                item = i - index
                break

        answer.append(item)

    return answer