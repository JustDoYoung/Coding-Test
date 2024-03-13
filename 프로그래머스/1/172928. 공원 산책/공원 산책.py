def solution(park, routes):
    W = len(park[0])
    H = len(park)

    location = [0, 0]

    for i in range(H):
        j = park[i].find("S")

        if j != -1:
            location[0] = i
            location[1] = j
            break

    compass_dict = {"E": [0, 1], "W": [0, -1], "N": [-1, 0], "S": [1, 0]}

    for route in routes:
        temp_location = location.copy()
        dir, dist = route.split(" ")

        for _ in range(int(dist)):
            temp_location[0] += compass_dict[dir][0]
            temp_location[1] += compass_dict[dir][1]

            if not (0 <= temp_location[0] < H and 0 <= temp_location[1] < W):
                break
            if park[temp_location[0]][temp_location[1]] == "X":
                break
        else:
            location[0] = temp_location[0]
            location[1] = temp_location[1]

    return location
