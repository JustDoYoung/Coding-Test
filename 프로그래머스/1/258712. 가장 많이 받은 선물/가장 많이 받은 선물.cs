using System;
using System.Collections.Generic;
using System.Linq;

public class Solution {
    public int solution(string[] friends, string[] gifts) {
        int friendsCount = friends.Length;
                int[] giftIndex = new int[friendsCount];
                int[] giftCount = new int[friendsCount];

                Dictionary<string, int> histories = gifts.GroupBy(gift => gift).ToDictionary(g => g.Key, g => g.Count());

                foreach(var history in histories)
                {
                    string[] pair = history.Key.Split(" ");

                    int give = Array.IndexOf(friends, pair[0]);
                    int take = Array.IndexOf(friends, pair[1]);

                    giftIndex[give] += history.Value;
                    giftIndex[take] -= history.Value;
                }

                for (int i = 0; i < friendsCount - 1; i++)
                {
                    for (int j = i + 1; j < friendsCount; j++)
                    {
                        string key = friends[i] + " " + friends[j];
                        string counterKey = friends[j] + " " + friends[i];

                        if (histories.ContainsKey(key) == true && histories.ContainsKey(counterKey) == true)
                        {
                            if (giftIndex[i] == giftIndex[j]) continue;

                            if (histories[key] > histories[counterKey])
                            {
                                giftCount[i]++;
                            }
                            else if (histories[key] < histories[counterKey])
                            {
                                giftCount[j]++;
                            }
                            else if (giftIndex[i] > giftIndex[j])
                            {
                                giftCount[i]++;
                            }
                            else
                            {
                                giftCount[j]++;
                            }
                        }
                        else if(histories.ContainsKey(key) == false && histories.ContainsKey(counterKey) == false)
                        {
                            if (giftIndex[i] == giftIndex[j]) continue;

                            if (giftIndex[i] > giftIndex[j])
                            {
                                giftCount[i]++;
                            }
                            else
                            {
                                giftCount[j]++;
                            }
                        }
                        else
                        {
                            if(histories.ContainsKey(key) == true)
                            {
                                giftCount[i]++;
                            }
                            else
                            {
                                giftCount[j]++;
                            }
                        }
                    }
                }

                int answer = giftCount.Max();
                return answer;
    }
}