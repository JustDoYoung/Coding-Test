using System;
using System.Collections.Generic;
using System.Linq;

public class Solution {
    public int solution(string[] friends, string[] gifts) {
         int answer = 0;

 int friendsCount = friends.Length;
 int[] giftIndex = new int[friendsCount];
 int[,] giftHistory= new int[friendsCount, friendsCount];
 int[] giftCount = new int[friendsCount];

 foreach(string gift in gifts)
 {
     string[] history = gift.Split(' ');

     int give = Array.IndexOf(friends, history[0]);
     int take = Array.IndexOf(friends, history[1]);

     giftIndex[give]++;
     giftIndex[take]--;
     giftHistory[give, take]++;
 }

 for (int i = 0; i < friendsCount; i++)
 {
     for (int j = 0; j < friendsCount; j++)
     {
         if (i == j) continue;

         if (giftHistory[i, j] > giftHistory[j, i] || (giftIndex[i] > giftIndex[j] && giftHistory[i, j] == giftHistory[j, i]))
         {
             giftCount[i]++;
         }
     }
 }

 answer = giftCount.Max();

 return answer;
    }
}