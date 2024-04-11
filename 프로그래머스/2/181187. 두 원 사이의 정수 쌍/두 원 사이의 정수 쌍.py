import math

def solution(r1, r2):
    answer = 0

    for x in range(1, r2 + 1):
        if x < r1:
            answer += int((r2**2 - x**2) ** 0.5) - int(
                math.ceil((r1**2 - x**2) ** 0.5 - 1)
            )
        else:
            answer += int((r2**2 - x**2) ** 0.5) + 1

    return answer * 4