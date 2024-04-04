def solution(n, arr1, arr2):
    answer = []

    for i in range(n):
        num1 = arr1[i]
        num2 = arr2[i]

        bin_1 = ""
        bin_2 = ""

        while num1 != 0:
            num1, r = divmod(num1, 2)
            bin_1 += str(r)

        while num2 != 0:
            num2, r = divmod(num2, 2)
            bin_2 += str(r)

        bin_1 = bin_1.ljust(n, "0")
        bin_2 = bin_2.ljust(n, "0")

        print(bin_1)
        print(bin_2)

        map_temp = ""
        for j in range(n):
            if bin_1[j] == bin_2[j] and bin_1[j] == "0":
                map_temp += " "
            else:
                map_temp += "#"

        answer.append(map_temp[::-1])

    return answer