def solution(participant, completion):
    answer = ""

    participant.sort()
    completion.sort()

    for i, _ in enumerate(completion):
        if participant[i] != completion[i]:
            answer = participant[i]
            break

    if answer == "":
        answer = participant[-1]

    return answer