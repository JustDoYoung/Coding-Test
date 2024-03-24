import math

def solution(number, limit, power):
    answer = 0

    for knight in range(1, number + 1):
        measure_range = int(math.sqrt(knight)) + 1

        measure = set()
        for num in range(1, measure_range):
            if knight % num == 0:
                measure.add(num)
                measure.add(knight // num)

        weapon_power = len(measure)
        if weapon_power > limit:
            weapon_power = power

        answer += weapon_power

    return answer