def solution(sequence, k):

    answer = [0, 0]

    items = [n for n in sequence if n <= k]
    items = items[-1::-1]
    length = len(items)

    sum_store = 0
    s = 0
    e = length - 1
    for i, item in enumerate(items):
        sum_store += item

        if sum_store == k:
            s = length - i - 1
            break
        elif sum_store > k:
            sum_store -= sequence[e]
            e -= 1
            continue

    if sequence[s] == sequence[e]:
        gap = e - s
        s = sequence.index(sequence[s])
        e = s + gap

    answer = [s, e]

    return answer