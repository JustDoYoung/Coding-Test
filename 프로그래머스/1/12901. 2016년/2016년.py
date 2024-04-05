def solution(a, b):

    index = 5
    month_dates = [31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31]
    day = ["SUN", "MON", "TUE", "WED", "THU", "FRI", "SAT"]

    date_length = sum(month_dates[0 : a - 1]) + b - 1

    date_length %= 7

    answer = day[(index + date_length) % 7]

    return answer