def solution(board, moves):
    answer = 0
    pick_list = []
    for col in moves:
        col -= 1

        for row in range(len(board)):

            if board[row][col] == 0:
                continue

            picked_item = board[row][col]
            board[row][col] = 0

            if len(pick_list):
                if pick_list[-1] == picked_item:
                    answer += 2
                    pick_list.pop()
                    break

            pick_list.append(picked_item)
            break

    return answer