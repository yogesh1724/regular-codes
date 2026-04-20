#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include<assert.h>
#define MAX_CHARACTERS 1005
#define MAX_PARAGRAPHS 5
char* kth_word_in_mth_sentence_of_nth_paragraph(char**** document, int k, int m, int n) {
    return document[n-1][m-1][k-1];
}

char** kth_sentence_in_mth_paragraph(char**** document, int k, int m) { 
    return document[m-1][k-1];
}

char*** kth_paragraph(char**** document, int k) {
    return document[k-1];
}

char**** get_document(char* text) {
    char**** document = (char****)malloc(sizeof(char***)*5);
    for(int i =0 ;i<5;i++){
        document[i] = (char***)malloc(sizeof(char**)*10);
        for(int j = 0;j<10;j++){
            document[i][j] = (char**)malloc(sizeof(char*)*50);
            for(int k = 0;k<50;k++){
                document[i][j][k] = (char*)malloc(sizeof(char)*100);
            }
        }
    }
    
    for(int i =0,para =1,senten =1,word = 1,letter =1; i<strlen(text);i++){
        if(text[i] == ' '){
            letter =1;
            word++;
        }
        else if(text[i] == '.'){
            word =1;
            letter =1;
            senten++;
        }
        else if(text[i] =='\n'){
            word =1;
            senten =1;
            letter =1;
            para++;
        }
        else{
            document[para-1][senten-1][word-1][letter-1] = text[i];
            letter++;
        }
         
    }
    return document;
    
}
