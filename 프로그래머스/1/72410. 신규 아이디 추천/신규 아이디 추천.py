def solution(new_id: str):
    answer = ""

    special_ch = ("-", "_", ".")
    new_id = new_id.lower()
    filter_id = []

    check = ""
    for c in new_id:
        if c.isnumeric() or c.isalpha() or c in special_ch:
            if c == check and check == ".":
                continue
            filter_id.append(c)
            check = c

    print(filter_id)
    filter_id = "".join(filter_id)
    filter_id = filter_id.strip(".")
    filter_id = filter_id[0:15]
    filter_id = filter_id.strip(".")

    check_len = len(filter_id)
    if check_len == 0:
        filter_id = "aaa"
    elif check_len <= 2:
        filter_id += filter_id[check_len - 1] * (3 - check_len)

    return filter_id