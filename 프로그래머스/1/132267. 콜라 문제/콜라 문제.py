def solution(a, b, n):
    answer = 0

    return_bottle = (n // a) * b
    remain_bottle = n % a

    while (total_bottle := return_bottle + remain_bottle) >= a:
        answer += return_bottle

        return_bottle = (total_bottle // a) * b
        remain_bottle = total_bottle % a
    else:
        answer += return_bottle

    return answer