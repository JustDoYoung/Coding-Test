def solution(cards1, cards2, goal):
    cards1_idx = 0
    cards2_idx = 0

    for word in goal:
        if word in cards1:
            if word != cards1[cards1_idx]:
                return "No"
            cards1_idx += 1
        elif word in cards2:
            if word != cards2[cards2_idx]:
                return "No"
            cards2_idx += 1
    else:
        return "Yes"