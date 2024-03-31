import numpy as np


def solution(board, moves):
    answer = 0

    pick = []
    board_arr = np.array(board)
    board_dict = {
        i + 1: list(filter(lambda x: x != 0, board_arr[:, i]))
        for i in range(len(board))
    }

    for move in moves:
        if not len(board_dict[move]):
            continue

        item = board_dict[move].pop(0)

        if len(pick):
            if pick[-1] == item:
                pick.pop()
                answer += 2
                continue

        pick.append(item)
    return answer