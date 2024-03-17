def solution(bandage, health, attacks):
    
    # 설정 값 저장
    WAIT_TIME = bandage[0]
    HEAL_PER_SECOND = bandage[1]
    ADDITIONAL_HEAL = bandage[2]
    FULL_HP = health

    start_time = 0

    for attack_time, damage in attacks:
        delta_time = attack_time - start_time

        iter_heal = (delta_time - 1) // WAIT_TIME
        health += ADDITIONAL_HEAL * iter_heal + (delta_time - 1) * HEAL_PER_SECOND

        if health > FULL_HP:
            health = FULL_HP

        health -= damage
        start_time = attack_time

        if health <= 0:
            return -1

    return health
