import numpy
def solution(a, b):
    a = numpy.array(a)
    b = numpy.array(b)

    answer = numpy.sum(a * b)

    return int(answer)