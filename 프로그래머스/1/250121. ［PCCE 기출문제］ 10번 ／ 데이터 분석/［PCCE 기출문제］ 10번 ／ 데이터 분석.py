def solution(data, ext, val_ext, sort_by):

    data_key = {"code": 0, "date": 1, "maximum": 2, "remain": 3}
    answer = [sub_list for sub_list in data if sub_list[data_key[ext]] <= val_ext]
    answer = sorted(answer, key=lambda x: x[data_key[sort_by]], reverse=False)
    return answer