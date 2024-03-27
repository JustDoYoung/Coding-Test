def solution(sizes):
    answer = 0

    sizes = list(map(sorted, sizes))

    h = [x[0] for x in sizes]
    v = [x[1] for x in sizes]

    answer = max(h) * max(v)

    return answer