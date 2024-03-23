def solution(t, p):
    answer = 0

    p_length = len(p)
    length = len(t) - p_length + 1
    p = int(p)

    for i in range(length):
        if int(t[i:i+p_length]) <= p:
            answer += 1
    return answer