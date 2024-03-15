def solution(number):
    answer = 0
    length = len(number)

    case_container = tuple(
        0
        for x in range(0, length - 2)
        for y in range(x + 1, length - 1)
        for z in range(y + 1, length)
        if number[x] + number[y] + number[z] == 0
    )

    answer = len(case_container)

    return answer