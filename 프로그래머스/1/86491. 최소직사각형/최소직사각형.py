def solution(sizes):
    answer = 0

    h_max = 0
    v_max = 0

    for h, v in sizes:
        if h < v:
            h, v = v, h

        if h_max < h:
            h_max = h

        if v_max < v:
            v_max = v

    answer = h_max * v_max

    return answer