int lengthOfLongestSubstring(char* s) {
    int length = strlen(s);
    int letter[256] = {0};
    int head = 0, tail = 0, output = 0;
    
    while(head<length && tail<length){
        if(letter[s[head]] == 0){
            letter[s[head]] = 1;
            head++;
            output = output > (head-tail) ? output : (head-tail);
        }
        else{
            letter[s[tail]] = 0;
            tail++; 
        }
            
    }
    return output;
}