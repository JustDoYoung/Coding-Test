def solution(N, stages):
    answer = []
    faulty = []

    player_count = len(stages)
    for i in range(1, N + 2):
        if player_count == 0:
            faulty.append(0)
            continue
        faulty.append(stages.count(i) / player_count)
        player_count -= stages.count(i)

    faulty = faulty[:N]
    for _ in range(N):
        high = max(faulty)
        i = faulty.index(high)
        answer.append(i + 1)
        faulty[i] = -1

    return answer