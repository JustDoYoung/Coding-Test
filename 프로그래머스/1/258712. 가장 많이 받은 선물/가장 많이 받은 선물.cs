using System;
using System.Collections.Generic;

public class Solution
{
    public int solution(string[] friends, string[] gifts)
    {
        int answer = 0;

        var dict = new Dictionary<string, int>(); // 친구이름에 따른 인덱스 값
        for(int i = 0; i < friends.Length; i++)
            dict.Add(friends[i], i);

        var intArray = new int[friends.Length]; // 선물 지수 배열
        var giftArrays = new int[friends.Length, friends.Length]; // 선물 현황 배열 [준 사람, 받은 사람]

        // 선물 지수 배열과 선물 현환 배열에 값 세팅
        for(int i = 0; i < gifts.Length; i++)
        {
            string[] strs = gifts[i].Split(' '); // 0 : 준 사람, 1 : 받은 사람
            giftArrays[dict[strs[0]], dict[strs[1]]]++;
            intArray[dict[strs[0]]]--;
            intArray[dict[strs[1]]]++;
        }

        for(int i = 0; i < intArray.Length; i++)
        {
            int num = 0; // 선물 받은 개수
            for(int j = 0; j < intArray.Length; j++)
            {
                if(i == j)
                    continue;

                // 선물을 받아야 하는 조건
                if(giftArrays[j, i] < giftArrays[i, j]
                  || (giftArrays[j, i] == giftArrays[i, j] && intArray[i] < intArray[j])) 
                    num++;
            }

            if(answer < num)
                answer = num;
        }

        return answer;
    }
}