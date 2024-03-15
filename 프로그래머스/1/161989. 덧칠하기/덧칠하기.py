def solution(n, m, section):
    answer = 0

    prev_block = -1
    for block in section:
        if prev_block < block:
            prev_block = block + m
            answer += 1
        elif block <= prev_block < block + 1:
            prev_block = block + m
            answer += 1

    return answer