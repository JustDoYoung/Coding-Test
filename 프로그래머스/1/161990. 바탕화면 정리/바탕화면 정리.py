def solution(wallpaper):
    file = [
        tuple(j for j, item in enumerate(wallpaper) if item.find("#") != -1),
        tuple(i for item in wallpaper for i, is_file in enumerate(item) if is_file == "#"),
    ]

    j_axis = file[0]
    i_axis = file[1]

    answer = [min(j_axis), min(i_axis), max(j_axis) + 1, max(i_axis) + 1]
    return answer