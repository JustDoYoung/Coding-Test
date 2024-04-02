def solution(participant, completion):
    answer = ""

    completion_dict = {}

    for p in completion:
        completion_dict[p] = completion_dict.get(p, 0) + 1

    for p in participant:
        if completion_dict.get(p) == None or completion_dict.get(p) == 0:
            answer = p
            break
        completion_dict[p] -= 1

    return answer