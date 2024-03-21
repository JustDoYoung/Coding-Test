def solution(s, skip, index):
    answer = []

    alphabet = []

    for i in range(ord("a"), ord("z") + 1):
        c = chr(i)
        if c not in skip:
            alphabet.append(c)

    length = len(alphabet)

    for target in s:
        target_index = alphabet.index(target)
        answer.append(alphabet[(target_index + index) % length])

    return "".join(answer)