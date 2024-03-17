def solution(bandage, health, attacks):
    wait_time = bandage[0]
    heal_per_second = bandage[1]
    heal_additional = bandage[2]
    heal_full = heal_per_second * wait_time + heal_additional
    full_hp = health

    start_time = 0

    for attack_time, damage in attacks:
        delta_time = attack_time - start_time

        iter_heal = (delta_time - 1) // wait_time
        health += heal_full * iter_heal + ((delta_time - 1) % wait_time) * heal_per_second

        if health > full_hp:
            health = full_hp

        health -= damage
        start_time = attack_time

        if health <= 0:
            return -1

    return health