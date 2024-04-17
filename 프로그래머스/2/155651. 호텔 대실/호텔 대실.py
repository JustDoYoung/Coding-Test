def solution(book_time):
    for book in book_time:
        check_in = book[0].split(":")
        book[0] = int(check_in[0]) * 60 + int(check_in[1])

        check_out = book[1].split(":")
        book[1] = int(check_out[0]) * 60 + int(check_out[1])

    book_time = sorted(book_time, key=lambda x: x[0])

    room = []
    for book in book_time:
        if not room:
            room.append(book)
            continue

        for i, occu in enumerate(room):
            if occu[1] + 10 <= book[0]:
                room[i] = book
                break
        else:
            room.append(book)

    return len(room)