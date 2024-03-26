def solution(survey, choices):
    answer = ""

    character_type_index = ("RT", "CF", "JM", "AN")
    survey_type = {item: 0 for item in set("".join(character_type_index))}

    for index, choice in enumerate(choices):

        if choice == 4:
            continue

        check = choice // 4
        score = abs(choice - 4)
        survey_type[survey[index][check]] += score

    for type_index in character_type_index:
        answer += (
            type_index[0]
            if survey_type[type_index[0]] >= survey_type[type_index[1]]
            else type_index[1]
        )

    return answer