def solution(numbers, hand):
    answer = ""

    l_point = (0, 0)
    r_point = (0, 0)
    center_list = [0, 8, 5, 2]

    for num in numbers:
        if num in [7, 4, 1]:
            answer += "L"
            l_point = (0, ["*", 7, 4, 1].index(num))
        elif num in [9, 6, 3]:
            answer += "R"
            r_point = (0, ["#", 9, 6, 3].index(num))
        else:
            center_index = (1, center_list.index(num))

            l_dist, r_dist = 0, 0
            for i in range(2):
                l_dist += abs(center_index[i] - l_point[i])
                r_dist += abs(center_index[i] - r_point[i])

            if l_dist == r_dist:
                if hand == "left":
                    answer += "L"
                    l_point = center_index
                else:
                    answer += "R"
                    r_point = center_index
            elif l_dist < r_dist:
                answer += "L"
                l_point = center_index
            else:
                answer += "R"
                r_point = center_index
    return answer