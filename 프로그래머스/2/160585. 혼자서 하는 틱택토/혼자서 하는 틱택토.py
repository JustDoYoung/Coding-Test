def solution(board):
    answer = 0

    o_count = 0
    x_count = 0
    bingo_check = [0, 0]  # [o, x]

    check_cross1 = board[0][0]
    check_cross2 = board[2][0]

    for j in range(3):
        check_row = board[j][0]
        check_col = board[0][j]

        # 대각선 빙고체크
        if board[j][j] == "." or check_cross1 != board[j][j]:
            check_cross1 = False
        if board[2 - j][j] == "." or check_cross2 != board[2 - j][j]:
            check_cross2 = False

        for i in range(0, 3):
            #  O/X 카운트
            if board[j][i] == "O":
                o_count += 1
            elif board[j][i] == "X":
                x_count += 1

            # 가로줄 빙고체크
            if board[j][i] == "." or check_row != board[j][i]:
                check_row = False

            # 세로줄 빙고체크
            if board[i][j] == "." or check_col != board[i][j]:
                check_col = False
        else:
            if check_row == board[j][0]:
                if check_row == "O":
                    bingo_check[0] += 1
                else:
                    bingo_check[1] += 1
            if check_col == board[0][j]:
                if check_col == "O":
                    bingo_check[0] += 1
                else:
                    bingo_check[1] += 1

    if check_cross1 == board[0][0]:
        if check_cross1 == "O":
            bingo_check[0] += 1
        else:
            bingo_check[1] += 1

    if check_cross2 == board[2][0]:
        if check_cross2 == "O":
            bingo_check[0] += 1
        else:
            bingo_check[1] += 1

    if 0 <= o_count - x_count < 2:

        if sum(bingo_check) == 0:
            answer = 1
        elif 0 < sum(bingo_check) < 3:
            if bingo_check[0] == sum(bingo_check) and o_count - x_count == 1:
                answer = 1
            elif bingo_check[1] == sum(bingo_check) and o_count == x_count:
                answer = 1

    return answer