def solution(nums):
    answer = 0

    pick_case = []

    length = len(nums)
    for i in range(length - 2):
        for j in range(i + 1, length - 1):
            for k in range(j + 1, length):
                pick_case.append(nums[i] + nums[j] + nums[k])

    for pick in pick_case:
        for i in range(2, int(pick**0.5) + 1):
            if pick % i == 0:
                break
        else:
            answer += 1

    return answer