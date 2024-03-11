def solution(friends, gifts):
    answer = 0
    friends_length = len(friends)

    give_and_take_matrix = [[0] * friends_length for _ in range(friends_length)]
    gift_index = [0] * friends_length
    gift_count = [0] * friends_length

    friends_dict = {name: index for index, name in enumerate(friends)}

    for give_and_take_history in gifts:
        split_give_and_take = give_and_take_history.split(" ")
        givePerson = friends_dict[split_give_and_take[0]]
        takePerson = friends_dict[split_give_and_take[1]]

        # 선물지수
        gift_index[givePerson] += 1
        gift_index[takePerson] -= 1

        # 두 사람 간 선물 내역
        give_and_take_matrix[givePerson][takePerson] += 1

    for i in range(0, friends_length):
        for j in range(0, friends_length):
            if i == j:
                continue

            if give_and_take_matrix[i][j] > give_and_take_matrix[j][i] or (
                give_and_take_matrix[i][j] == give_and_take_matrix[j][i]
                and gift_index[i] > gift_index[j]
            ):
                gift_count[i] += 1

    answer = max(gift_count)

    return answer