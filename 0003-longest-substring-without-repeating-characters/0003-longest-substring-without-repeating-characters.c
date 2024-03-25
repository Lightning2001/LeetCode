// int lengthOfLongestSubstring(char* s) {
//     int length = strlen(s);
//     int letter[26] = {0}; //only used when declaring the variable
//     int diff_letter = 1;
//     int output = 1;
    
//     for(int i=0;i<=length;i++)
//     {
//         if(s[i]!=s[i+1]){
            
//             if(letter[s[i]-'a']==0){
//                 letter[s[i]-'a'] = 1;
//                 diff_letter += 1;
//                 if(diff_letter >= output){
//                     output = diff_letter;
//                 }
//             }
//             else{
//                 memset(letter, 0, sizeof(letter));
//                 diff_letter = 1;
//             }
//         }
//         else{
//             memset(letter, 0, sizeof(letter));
//             diff_letter = 1;
//         }
//     }
//     return output;
// }
int lengthOfLongestSubstring(char* s) {
    int n = strlen(s); // 获取字符串长度
    int letter[256] = {0}; // 增加大小以适应所有ASCII字符
    int output = 0, i = 0, j = 0;

    while (i < n && j < n) {
        // 尝试扩展窗口
        if (letter[s[j]] == 0) {
            letter[s[j]] = 1;
            j++;
            output = output > (j - i) ? output : (j - i);
        } else {
            // 发现重复字符，移动i指针
            letter[s[i]] = 0;
            i++;
        }
    }

    return output;
}