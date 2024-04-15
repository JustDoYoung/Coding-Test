def solution(m, n, startX, startY, balls):
    answer = []

    reflect_lst = []

    reflect_hor = [-2 * startX, 0, 2 * (m - startX), 0]
    reflect_ver = [0, 2 * (n - startY), 0, -2 * startY]

    for i in range(4):
        reflect_lst.append([startX + reflect_hor[i], startY + reflect_ver[i]])

    for ball in balls:
        min_value = 2*1000**2

        for rf in reflect_lst:
            if startX - ball[0] == 0:
                if startY < ball[1] < rf[1] or rf[1] < ball[1] < startY:
                    continue
            elif startY - ball[1] == 0:
                if startX < ball[0] < rf[0] or rf[0] < ball[0] < startX:
                    continue

            dist = (rf[0] - ball[0]) ** 2 + (rf[1] - ball[1]) ** 2
            if dist < min_value:
                min_value = dist

        answer.append(min_value)

    return answer