def solution(s):
    s = sorted(map(lambda x: int(x), s.split(" ")))

    return str(s[0]) + " " + str(s[-1])