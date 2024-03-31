def solution(board, moves):
    answer = 0

    pick = []
    board_dict = {move: [] for move in moves}

    for sub_list in board:
        for i, item in enumerate(sub_list):
            if item == 0:
                continue

            board_dict[i + 1].append(item)

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