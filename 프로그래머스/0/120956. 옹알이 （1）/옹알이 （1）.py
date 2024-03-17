def solution(babbling):
    def SetCombination(count, can_speak_case, arr_one, arr_two):
        length_one = len(arr_one)
        length_two = len(arr_two)
        for i in range(length_one):
            can_speak_case.add(arr_one[i])
            for j in range(length_two):
                can_speak_case.add(arr_one[i] + arr_two[j])

        count += 1
        if count < length_one:
            SetCombination(count, can_speak_case, arr_one, list(can_speak_case))

    answer = 0
    word = ["aya", "ye", "woo", "ma"]
    can_speak_case = set()

    SetCombination(0, can_speak_case, word, word)

    for bab in babbling:
        if bab in can_speak_case:
            answer += 1

    return answer