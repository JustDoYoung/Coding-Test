def solution(today: str, terms: list, privacies: list):
    answer = []

    today = today.split(".")
    today_year = int(today[0])
    today_month = int(today[1])
    today_day = int(today[2])

    terms_dict = {}

    for term in terms:
        term = term.split(" ")
        terms_dict[term[0]] = int(term[1])

    for i, case in enumerate(privacies):
        case = case.split(" ")
        splitted_case = case[0].split(".")

        get_year = int(splitted_case[0])
        get_month = int(splitted_case[1])
        get_day = int(splitted_case[2])

        # 몫은 year, 나머지는 month
        offset = divmod(terms_dict[case[1]], 12)
        print(offset)

        limit_year = get_year + offset[0] + (get_month + offset[1] - 1) // 12
        limit_month = (get_month + offset[1] - 1) % 12 + 1
        print(limit_year, limit_month)

        if (limit_year - today_year) < 0:
            answer.append(i + 1)
        elif (limit_year - today_year) == 0:
            if (limit_month - today_month) < 0:
                answer.append(i + 1)
            elif (limit_month - today_month) == 0:
                if (get_day - today_day) <= 0:
                    answer.append(i + 1)

    return answer