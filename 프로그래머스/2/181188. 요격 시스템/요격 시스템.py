def solution(targets):
    answer = 0

    targets = sorted(targets)

    start = 0
    end = 0
    for tg in targets:

        if end <= tg[0]:
            start = tg[0]
            end = tg[1]
            answer += 1

            continue

        start = max(start, tg[0])
        end = min(end, tg[1])

    return answer