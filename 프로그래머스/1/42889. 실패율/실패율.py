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

    faulty_dict = {i + 1: faulty[i] for i in range(N)}
    answer = [item[0] for item in sorted(faulty_dict.items(), key=lambda x: -x[1])]

    return answer