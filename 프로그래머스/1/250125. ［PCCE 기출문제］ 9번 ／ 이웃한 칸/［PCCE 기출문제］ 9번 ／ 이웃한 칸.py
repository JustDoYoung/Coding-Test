def solution(board, h, w):
    answer = 0

    length = len(board)

    y = (h + 1, h, h - 1, h)
    x = (w, w + 1, w, w - 1)

    target_color = set()
    target_color.add(board[h][w])

    if 0 <= y[0] < length and 0 <= x[0] < length:
        if board[y[0]][x[0]] in target_color:
            answer += 1

    if 0 <= y[1] < length and 0 <= x[1] < length:
        if board[y[1]][x[1]] in target_color:
            answer += 1

    if 0 <= y[2] < length and 0 <= x[2] < length:
        if board[y[2]][x[2]] in target_color:
            answer += 1

    if 0 <= y[3] < length and 0 <= x[3] < length:
        if board[y[3]][x[3]] in target_color:
            answer += 1

    return answer