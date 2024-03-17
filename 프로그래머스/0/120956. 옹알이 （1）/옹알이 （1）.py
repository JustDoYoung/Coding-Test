def solution(babbling):
    answer = 0

    words = ["aya", "ye", "woo", "ma"]
    for bab in babbling:
        for word in words:
            bab = bab.replace(word, " ")
        else:
            if len(bab.split()) == 0:
                answer += 1
    return answer