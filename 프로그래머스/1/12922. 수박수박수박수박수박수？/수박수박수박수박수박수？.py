def solution(n):
    answer = "수박" * (n//2 + 1)

    answer = answer[:n]
    
    return answer
