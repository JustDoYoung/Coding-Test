def solution(board, h, w):
    answer = 0

    length = len(board)

    y = (h + 1, h, h - 1, h)
    x = (w, w + 1, w, w - 1)

    target_color = set()
    target_color.add(board[h][w])

    for i in range(4):
        if 0 <= y[i] < length and 0 <= x[i] < length:
            if board[y[i]][x[i]] in target_color:
                answer += 1

    return answer