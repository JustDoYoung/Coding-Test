using System;
using System.Collections.Generic;

public class Solution {
    public string[] solution(string[] players, string[] callings) {
       int length = players.Length;

Dictionary<string, int> playerDict = new Dictionary<string, int>();

for(int i = 0; i < length; i++)
{
    playerDict.Add(players[i], i);
}

foreach(string calling in callings) 
{
    string loserName = players[playerDict[calling] - 1];

    players[playerDict[calling] - 1] = players[playerDict[calling]];
    players[playerDict[calling]] = loserName;

    int temp = playerDict[calling];
    playerDict[calling] = playerDict[loserName];
    playerDict[loserName] = temp;
}

for(int i = 0; i < length; i++)
{
    int changeIndex = playerDict[players[i]];

    string temp = players[i];
    players[i] = players[changeIndex];
    players[changeIndex] = temp;
}

return players;
    }
}