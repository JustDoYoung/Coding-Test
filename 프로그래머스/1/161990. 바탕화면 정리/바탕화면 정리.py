def solution(wallpaper):
    answer = []

    drag_info = [0, 0, 0, 0]

    file = [
        (j, i)
        for j, sub_list in enumerate(wallpaper)
        for i, item in enumerate(sub_list)
        if item == "#"
    ]

    j_axis = [j[0] for j in file]
    i_axis = [i[1] for i in file]

    min_axis = (min(j_axis), min(i_axis))
    max_axis = (max(j_axis) + 1, max(i_axis) + 1)

    answer = [*min_axis, *max_axis]
    return answer