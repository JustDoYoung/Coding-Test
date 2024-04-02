def solution(participant, completion):
    answer = ""

    participant = sorted(participant)
    completion = sorted(completion)

    for i, _ in enumerate(completion):
        if participant[i] != completion[i]:
            answer = participant[i]
            break

    if answer == "":
        answer = participant[-1]

    return answer