char* toLowerCase(char* s) {
    for(int i=0;s[i]!=0;i++){ //�r�ꪺ�j�� ������ s[i]!=
        char c = s[i];  //�h���@�|, �S���XC
        if(isupper(c)) c = tolower(c);
        s[i] = c; //�h���@�|,�S��^s[i]
    }
    return s;
}
