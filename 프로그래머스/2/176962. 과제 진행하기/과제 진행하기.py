def solution(plans):
    answer = []

    for p in plans:
        time = p[1].split(":")
        p[1] = int(time[0]) * 60 + int(time[1])
        p[2] = int(p[2])

    plans = sorted(plans, key=lambda x: x[1])

    length = len(plans)

    for i in range(0, length - 1):
        gap = plans[i + 1][1] - plans[i][1]
        temp = plans[i][2]
        plans[i][2] -= gap

        if plans[i][2] <= 0:
            answer.append(plans[i][0])
            plans[i] = 0

            gap -= temp
            if gap > 0:
                for ng in plans[i::-1]:
                    if ng == 0:
                        continue

                    idx = plans.index(ng)
                    temp = ng[2]
                    plans[idx][2] -= gap
                    gap -= temp

                    if plans[idx][2] <= 0:
                        answer.append(ng[0])
                        plans[idx] = 0
                    else:
                        break
    else:
        answer.append(plans[-1][0])
        plans[-1] = 0

    for ng in plans[-1::-1]:
        if ng == 0:
            continue
        answer.append(ng[0])

    return answer