def solution(n, m, section):
    answer = 1

    prev_block = section[0]
    for block in section:
        if prev_block + m <= block:
            prev_block = block
            answer += 1

    return answer