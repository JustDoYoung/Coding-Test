def solution(s):
    answer = []

    index_check = {}

    for i, c in enumerate(s):

        item = -1

        if index_check.get(c) != None:
            item = i - index_check[c]
            index_check[c] = i
        else:
            index_check[c] = i

        answer.append(item)

    return answer