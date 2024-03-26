def solution(id_list, report, k):
    answer = []

    id_dict = dict(zip(id_list, [0] * len(id_list)))
    report_dict = {}

    for read in report:
        read = read.split(" ")

        if report_dict.get(read[1]) != None:
            report_dict[read[1]].add(read[0])
        else:
            report_dict[read[1]] = set()
            report_dict[read[1]].add(read[0])

    for key, value in report_dict.items():
        if len(value) >= int(k):
            for report_person in value:
                id_dict[report_person] += 1

    answer = list(id_dict.values())
    return answer