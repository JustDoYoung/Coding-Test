def solution(a, b):
    zip_list = zip(a, b)
    map_list = list(map(lambda x: x[0] * x[1], zip_list))
    answer = sum(map_list)

    return answer