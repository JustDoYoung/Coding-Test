def solution(maps):
    row_length = len(maps)
    col_length = len(maps[0])
    found = [[False for _ in range(col_length)] for _ in range(row_length)]
    island = []

    dir_i = [0, 1, 0, -1]
    dir_j = [1, 0, -1, 0]
    for row in range(row_length):
        for col in range(col_length):

            if found[row][col] == True:
                continue

            if maps[row][col] != "X":
                island.append(int(maps[row][col]))
                pos = [[row, col]]

                while pos:
                    now = pos.pop(0)
                    found[now[0]][now[1]] = True

                    for i in range(4):
                        next_j = now[0] + dir_j[i]
                        next_i = now[1] + dir_i[i]

                        if next_i < 0 or next_i >= col_length:
                            continue
                        if next_j < 0 or next_j >= row_length:
                            continue
                        if found[next_j][next_i] == True:
                            continue

                        if maps[next_j][next_i] != "X":
                            island[-1] += int(maps[next_j][next_i])
                            found[next_j][next_i] = True
                            pos.append([next_j, next_i])

    island = sorted(island) 
    
    if len(island) == 0:
        island = [-1]

    return island