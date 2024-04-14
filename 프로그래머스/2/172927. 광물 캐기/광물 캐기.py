def solution(picks, minerals):
    answer = 0

    minerals_type = {"diamond": 25, "iron": 5, "stone": 1}
    picks_type = list(minerals_type.keys())

    length = len(minerals)
    minerals_part = []
    for m in range(0, length, 5):
        minerals_part.append(list(map(lambda x: minerals_type[x], minerals[m : m + 5])))

    minerals_part = minerals_part[: sum(picks)]

    minerals_part = sorted(
        minerals_part,
        key=lambda x: (
            -x.count(25),
            -x.count(5),
            -x.count(1),
        ),
    )

    minerals_part = sorted(
        minerals_part,
        key=lambda x: (
            -x.count(25),
            -x.count(5),
            -x.count(1),
        ),
    )

    length = len(minerals_part)
    part_idx = 0
    for idx, p in enumerate(picks):
        for _ in range(p):
            if part_idx == length:
                break
            for m in minerals_part[part_idx]:
                if m <= minerals_type[picks_type[idx]]:
                    answer += 1
                else:
                    answer += m // minerals_type[picks_type[idx]]
            else:
                part_idx += 1

    return answer