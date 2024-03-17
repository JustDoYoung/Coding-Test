def solution(babbling):
    def gen_permutations(arr, n):
        result = []

        if n == 0:
            return [[]]

        for i, elem in enumerate(arr):
            for P in gen_permutations(arr[:i] + arr[i + 1 :], n - 1):
                result += [[elem] + P]

        return result

    answer = 0
    words = ["aya", "ye", "woo", "ma"]
    words_length = len(words)
    can_speak_set = set()

    for i in range(1, words_length + 1):
        for item in gen_permutations(words, i):
            can_speak_set.add("".join(item))

    for bab in babbling:
        if bab in can_speak_set:
            answer += 1

    return answer