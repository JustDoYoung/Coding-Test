def solution(players, callings):
    answer = []

    players_dict = {name: index for index, name in enumerate(players)}

    for calling in callings:
        winner_index = players_dict[calling]
        loser_index = players_dict[calling] - 1

        loser_name = players[loser_index]
        players[loser_index] = players[winner_index]
        players[winner_index] = loser_name

        players_dict[loser_name] += 1
        players_dict[calling] -= 1

    answer = list(dict(sorted(players_dict.items(), key=lambda x: x[1])).keys())
    
    return answer