def solution(n, lost, reserve):
    answer = 0

    student = [0] * n

    for i in range(n):
        if i + 1 in lost:
            student[i] -= 1
        if i + 1 in reserve:
            student[i] += 1

    for i in range(n - 1):
        if student[i] == 0:
            continue

        if student[i] + student[i + 1] == 0:
            student[i], student[i + 1] = 0, 0

    for i in student:
        if i >= 0:
            answer += 1

    return answer