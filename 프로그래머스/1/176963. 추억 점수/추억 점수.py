def solution(name, yearning, photo):
    answer = []

    memory_score = dict(zip(name, yearning))

    for p in photo:
        photo_score = [memory_score.get(friend, 0) for friend in p]
        answer.append(sum(photo_score))
    return answer