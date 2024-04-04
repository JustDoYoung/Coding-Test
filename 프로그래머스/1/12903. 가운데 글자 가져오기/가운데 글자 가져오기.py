def solution(s):

    mid, remain = divmod(len(s), 2)

    if remain == 0:
        answer = s[mid-1] + s[mid]
    else:
        answer = s[mid]

    return answer