def solution(bandage, health, attacks):
    wait_time = bandage[0]
    heal_per_second = bandage[1]
    heal_additional = bandage[2]
    heal_full = heal_per_second * wait_time + heal_additional
    full_hp = health

    start_time = 0

    for attack_time, damage in attacks:
        delta_time = attack_time - start_time

        if wait_time <= delta_time:
            iter_heal = (
                delta_time // wait_time
                if delta_time % wait_time != 0
                else delta_time // wait_time - 1
            )
            health += heal_full * iter_heal

        health += (
            heal_per_second * (delta_time % wait_time - 1)
            if delta_time % wait_time != 0
            else heal_per_second * (wait_time - 1)
        )

        if health > full_hp:
            health = full_hp

        health -= damage
        start_time = attack_time

        if health <= 0:
            return -1

    return health