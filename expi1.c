#include<stdio.h>
int main(){
  FILE *fp;
  int wordCount=0,lineCount=0,character=0;
  fp=fopen("sample.txt","r");
  char ch;
  while(fscanf(fp,"%c",&ch)==1){
    if(ch==' '){
      wordCount++;
    }
    else if(ch == '.'){
      lineCount++;
      wordCount++;
    }
    else{
      character++;
    }
  }
  printf("\nWord Count=%d",wordCount);
  printf("\nSentence Count=%d",lineCount);
  printf("\ncharacter Count=%d",character+wordCount);
  fclose(fp);
  return 0;
}
  
