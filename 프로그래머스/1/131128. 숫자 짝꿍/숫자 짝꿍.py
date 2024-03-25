def solution(X: str, Y: str):
    answer = ""

    num_list = (str(num) for num in range(10))

    common_nums = [
        num
        for num in num_list
        for _ in range(min(X.count(num), Y.count(num)))
        if num in X and num in Y
    ]

    common_nums = sorted(common_nums, reverse=True)
    answer = "".join(common_nums)

    if len(answer) == 0:
        answer = "-1"
    elif answer[0] == "0":
        answer = "0"

    return answer