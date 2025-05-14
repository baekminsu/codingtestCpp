#include <bits/stdc++.h>

using namespace std;

vector<int> solution(int n, vector<string> words) {
    vector<int> answer(2);
    if (words.size() == 1){
        return answer;
    }
    int col = 0;
    int col2 = 0;
    for (int i = 0 ; i < words.size()-1; i++){
        if (words[i].back() != words[i+1].front()){
               col = ((i+1) % n)+1;
               answer[0] = col;
               col2 = (i+1) /n;
               answer[1] =col2+1;
               break;
            }
    }  
    for (int i = 0 ; i < words.size(); i++){
        for(int j = i+1 ; j < words.size(); j++){
           if (words[i] == words[j]){
               col = (j % n)+1;
               answer[0] = col;
               col2 = j /n;
               answer[1] =col2+1;
               return answer;
           }
        }
    } 
    
    

    return answer;
}
