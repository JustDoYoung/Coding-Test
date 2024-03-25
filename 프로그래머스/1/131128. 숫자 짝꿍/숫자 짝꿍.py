from collections import Counter


def solution(X: str, Y: str):
    answer = ""

    num_list = [str(num) for num in range(9, -1, -1)]

    x_dict = Counter(X)
    y_dict = Counter(Y)

    common_nums = [
        num
        for num in num_list
        for _ in range(min(x_dict[num], y_dict[num]))
        if num in X and num in Y
    ]

    common_nums = sorted(common_nums, reverse=True)
    answer = "".join(common_nums)

    if len(answer) == 0:
        answer = "-1"
    elif answer[0] == "0":
        answer = "0"

    return answer