def solution(x):
    answer = True

    digit_list = []

    digit = x
    while digit > 0:
        digit, rm = divmod(digit, 10)
        digit_list.append(rm)

    digit_sum = sum(digit_list)

    if x % digit_sum != 0:
        answer = False

    return answer