def solution(s):
    answer = 0

    num_en = ["zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"]
    
    for i, en in enumerate(num_en):
        s = s.replace(en, str(i))

    answer = int(s)
    
    return answer