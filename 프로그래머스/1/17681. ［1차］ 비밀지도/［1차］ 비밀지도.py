def solution(n, arr1, arr2):
    answer = []

    for i in range(n):
        bin_cross = str(bin(arr1[i] | arr2[i]))

        bin_cross = bin_cross[2:].zfill(n)

        temp = ""
        for b in bin_cross:
            if b == "1":
                temp += "#"
            else:
                temp += " "

        answer.append(temp)

    return answer