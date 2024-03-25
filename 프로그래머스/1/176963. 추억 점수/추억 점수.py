def solution(name, yearning, photo):
    answer = []

    memory_score = dict(zip(name, yearning))

    for p in photo:
        sum = 0
        for friend in p:
            sum += memory_score.get(friend, 0)
        else:
            answer.append(sum)
    return answer