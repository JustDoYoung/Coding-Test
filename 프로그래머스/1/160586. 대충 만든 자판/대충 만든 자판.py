def solution(keymap, targets):
    answer = []

    keymap_dict = {}

    for key in keymap:
        for index, alpha in enumerate(key):
            keymap_dict[alpha] = min(keymap_dict.get(alpha, index + 1), index + 1)

    for word in targets:
        count = 0
        for chr in word:
            if (check := keymap_dict.get(chr)) == None:
                answer.append(-1)
                break
            else:
                count += check
        else:
            answer.append(count)

    return answer