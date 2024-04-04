def solution(dartResult):
    answer = 0

    part = []
    op_dict = {"S": "**1", "D": "**2", "T": "**3", "*": "*2", "#": "*(-1)"}

    is_num = True
    temp = ""

    for dr in dartResult:
        if not is_num and dr.isnumeric():
            is_num = True
            part.append(temp)
            temp = dr
            continue

        if dr.isnumeric():
            is_num = True
        else:
            is_num = False

        if dr == "*" and part:
            part[-1] += dr

        temp += dr
    else:
        part.append(temp)

    for i, p in enumerate(part):
        temp = ""
        for c in p:
            temp += op_dict.get(c, c)

        part[i] = eval(temp)

    answer = sum(part)

    return answer