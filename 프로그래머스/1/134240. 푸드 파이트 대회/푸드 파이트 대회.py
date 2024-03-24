def solution(food):
    answer = ""

    for i, food_count in enumerate(food):
        check = food_count // 2

        if check < 1:
            continue

        answer += str(i) * check

    answer = answer + "0" + answer[::-1]

    return answer