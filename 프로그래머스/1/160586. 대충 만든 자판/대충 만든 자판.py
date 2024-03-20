def solution(keymap, targets):
    answer = []

    keymap_dict = {}

    for key in keymap:
        for index, alpha in enumerate(key):
            if keymap_dict.get(alpha) == None:
                keymap_dict[alpha] = index + 1
            else:
                if keymap_dict[alpha] > index + 1:
                    keymap_dict[alpha] = index + 1

    for word in targets:
        count = 0
        for chr in word:
            check = keymap_dict.get(chr)

            if check == None:
                count = -1
                break

            count += check

        answer.append(count)

    return answer