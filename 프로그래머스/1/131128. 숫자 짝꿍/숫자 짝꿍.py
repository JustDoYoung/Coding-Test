def solution(X: str, Y: str):
    answer = ""

    common_nums = [
        str(num)
        for num in range(0, 10)
        for _ in range(min(X.count(str(num)), Y.count(str(num))))
        if str(num) in X and str(num) in Y
    ]

    common_nums = sorted(common_nums, reverse=True)
    answer = "".join(common_nums)

    if len(answer) == 0:
        answer = "-1"
    elif answer[0] == "0":
        answer = "0"

    return answer