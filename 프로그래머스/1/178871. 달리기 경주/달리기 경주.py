def solution(players, callings):
    answer = []

    players_dict = {name: index for index, name in enumerate(players)}

    for calling in callings:
        winner_index = players_dict[calling]
        loser_index = players_dict[calling] - 1

        players_dict[players[loser_index]] += 1
        players_dict[calling] -= 1

        players[loser_index], players[winner_index] = players[winner_index], players[loser_index]

    answer = list(dict(sorted(players_dict.items(), key=lambda x: x[1])).keys())
    
    return answer