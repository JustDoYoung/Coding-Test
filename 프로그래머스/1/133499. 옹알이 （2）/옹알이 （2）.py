def solution(babbling):
    answer = 0

    words = {"aya": 1, "ye": 2, "woo": 3, "ma": 4}

    for bab in babbling:
        for word in words:
            bab = bab.replace(word, str(words[word]))

        check = ""
        for i in range(0, len(bab)):
            if bab[i].isdigit() == False or check == bab[i]:
                break
            check = bab[i]
        else:
            answer += 1

    return answer