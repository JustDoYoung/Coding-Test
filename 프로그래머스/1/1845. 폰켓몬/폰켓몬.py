def solution(nums):
    answer = 0

    can_have = len(nums) // 2
    ponkets_type = set(nums)

    if len(ponkets_type) >= can_have:
        answer = can_have
    else:
        answer = len(ponkets_type)
        
    return answer