def solution(babbling):
    answer = 0

    words = ("aya", "ye", "woo", "ma")

    for bab in babbling:
        for word in words:
            if word * 2 in bab:
                continue
            bab = bab.replace(word, " ")

        if len(bab.split()) == 0:
            answer += 1

    return answer