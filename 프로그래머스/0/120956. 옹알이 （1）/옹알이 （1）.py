from itertools import *

def solution(babbling):
    answer = 0

    words = ["aya", "ye", "woo", "ma"]
    words_length = len(words)
    can_speak_set = set()

    for i in range(1, words_length + 1):
        for item in permutations(words, i):
            can_speak_set.add("".join(item))

    for bab in babbling:
        if bab in can_speak_set:
            answer += 1

    return answer