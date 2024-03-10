using System;
using System.Collections.Generic;
using System.Linq;

public class Solution {
    public string[] solution(string[] players, string[] callings) {
        Dictionary<string, int> playerDict = players.Select((value, index) => new { value, index }).ToDictionary(pair => pair.value, pair => pair.index);

foreach(string calling in callings) 
{
    string loserName = players[playerDict[calling] - 1];

    players[playerDict[calling] - 1] = players[playerDict[calling]];
    players[playerDict[calling]] = loserName;

    int temp = playerDict[calling];
    playerDict[calling] = playerDict[loserName];
    playerDict[loserName] = temp;
}

string[] answer = playerDict.OrderBy(pair => pair.Value).Select(pair => pair.Key).ToArray();

return answer;
    }
}