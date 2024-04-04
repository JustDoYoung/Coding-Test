def solution(arr1, arr2):
    rows_len = len(arr1)
    cols_len = len(arr1[0])
    answer = [
        [arr1[j][i] + arr2[j][i] for i in range(cols_len)] for j in range(rows_len)
    ]
    return answer