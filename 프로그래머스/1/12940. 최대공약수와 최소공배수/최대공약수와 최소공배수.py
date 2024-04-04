def solution(n, m):
    answer = []

    max_value = max(n, m)
    min_value = min(n, m)

    for num in range(min_value, 0, -1):
        if min_value%num == 0 and max_value % num == 0:
            answer.append(num)
            break

    i = 1
    while True:
        if (max_value*i) % min_value == 0:
            answer.append(max_value*i)
            break
        i+=1
                

    return answer