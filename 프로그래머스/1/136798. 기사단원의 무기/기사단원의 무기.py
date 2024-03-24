def solution(number, limit, power):
    answer = 0

    for knight in range(1, number + 1):
        measure_range = int(knight**(0.5)) + 1

        weapon_power = 0
        for num in range(1, measure_range):
            if knight % num == 0:
                weapon_power += 1
                if knight // num != num:
                    weapon_power += 1

        if weapon_power > limit:
            weapon_power = power

        answer += weapon_power

    return answer