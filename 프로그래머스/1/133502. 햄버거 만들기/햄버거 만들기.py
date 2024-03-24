def solution(ingredient: list):
    answer = 0

    burger = [1, 2, 3, 1]
    get_ingredient = []

    for ingre in ingredient:
        get_ingredient.append(ingre)

        if get_ingredient[-4:] == burger:
            answer += 1
            del get_ingredient[-4:]

    return answer