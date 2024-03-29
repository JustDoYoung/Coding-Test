def solution(absolutes, signs):
    answer = 123456789

    for i in range(len(signs)):
        if not signs[i]:
            absolutes[i] *= -1
    answer = sum(absolutes)

    return answer