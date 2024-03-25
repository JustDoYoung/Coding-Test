from collections import Counter
def solution(X: str, Y: str):
    answer = ""

    num_list = [str(num) for num in range(9, -1, -1)]

    x_dict = Counter(X)
    y_dict = Counter(Y)

    for num in num_list:
        answer += num * min(x_dict[num], y_dict[num])

    if len(answer) == 0:
        answer = "-1"
    elif answer[0] == "0":
        answer = "0"

    return answer