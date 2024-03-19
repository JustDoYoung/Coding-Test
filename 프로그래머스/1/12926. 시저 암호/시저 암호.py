def solution(s: str, n: int):
    answer = ""

    offset = 0
    code = []

    for c in s:
        if c.isupper():
            offset = 65
        elif c.islower():
            offset = 97
        else:
            code.append(c)
            continue

        code.append(chr((ord(c) + n - offset) % 26 + offset))
        
    answer = "".join(code)

    return answer