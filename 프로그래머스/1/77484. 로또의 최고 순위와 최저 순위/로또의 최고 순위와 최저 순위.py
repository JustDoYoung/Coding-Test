def solution(lottos, win_nums):
    answer = []

    unrecognizable_count = lottos.count(0)
    lottos = set(lottos)
    win_nums = set(win_nums)

    correct_nums = lottos & win_nums
    correct_nums_count = len(correct_nums)

    max_rank = 6 - (unrecognizable_count+correct_nums_count) + 1
    min_rank = 6 - (correct_nums_count) + 1

    if max_rank >= 6: max_rank = 6
    if min_rank >= 6: min_rank = 6

    answer = [max_rank, min_rank]
    
    return answer