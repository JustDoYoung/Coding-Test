def solution(number):
    answer = 0
    length = len(number)

    case_container = tuple(
        (number[x], number[y], number[z])
        for x in range(0, length - 2)
        for y in range(x + 1, length - 1)
        for z in range(y + 1, length)
    )

    for each_case in case_container:
        if sum(each_case) == 0:
            answer += 1

    return answer