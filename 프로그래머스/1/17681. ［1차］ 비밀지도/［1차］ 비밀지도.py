def solution(n, arr1, arr2):
    answer = []

    for i in range(n):

        bin_1 = str(bin(arr1[i]))
        bin_2 = str(bin(arr2[i]))

        bin_1 = bin_1[2:].rjust(n, "0")
        bin_2 = bin_2[2:].rjust(n, "0")

        map_temp = ""
        for j in range(n):
            if bin_1[j] == bin_2[j] and bin_1[j] == "0":
                map_temp += " "
            else:
                map_temp += "#"

        answer.append(map_temp)

    return answer