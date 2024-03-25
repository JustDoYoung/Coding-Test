def solution(X: str, Y: str):
    answer = ""

    X_dict = {}
    Y_dict = {}
    common_dict = {}

    for x in X:
        if X_dict.get(x) == None:
            X_dict[x] = X.count(x)

    for y in Y:
        if Y_dict.get(y) == None:
            Y_dict[y] = Y.count(y)

    for key, x_count in X_dict.items():
        if (y_count := Y_dict.get(key)) != None:
            common_dict[key] = min(x_count, y_count)

    answer = "".join(
        [num * common_dict[num] for num in sorted(common_dict.keys(), reverse=True)]
    )

    if len(answer) == 0:
        answer = "-1"
    elif answer[0] == "0":
        answer = str(int(answer))

    return answer