def solution(n, arr1, arr2):
    answer = []

    for i in range(n):
        bin_cross = str(bin(arr1[i] | arr2[i]))

        bin_cross = bin_cross[2:].zfill(n)
        bin_cross = bin_cross.replace("1", "#")
        bin_cross = bin_cross.replace("0", " ")

        answer.append(bin_cross)

    return answer