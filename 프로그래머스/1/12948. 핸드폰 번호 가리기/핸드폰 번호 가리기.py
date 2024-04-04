def solution(phone_number):
    length = len(phone_number)

    answer = phone_number[-4:]
    answer = answer.rjust(length, "*")
    return answer