def solution(N, stages):
    answer = []
    faulty = {}

    player_count = len(stages)
    for i in range(1, N + 1):
        if player_count == 0:
            faulty[i] = 0
            continue
        faulty[i] = stages.count(i) / player_count
        player_count -= stages.count(i)

    answer = sorted(faulty, key=lambda x: -faulty[x])

    return answer