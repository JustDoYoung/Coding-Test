def solution(n, m):
    answer = []
    max_value = max(n, m)
    min_value = min(n, m)

    gr_cd = lambda x, y: y if x%y == 0 else gr_cd(y, x%y)
    lst_cm = lambda x, y, cd: (x*y)//cd

    answer.append(gr_cd(max_value, min_value))
    answer.append(lst_cm(max_value, min_value, answer[0]))
                
    return answer