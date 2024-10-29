//maxime restricted syntaxin
#include<stdio.h>
#include<ctype.h>
#include<string.h>
char memory[16];

enum OPCODE{
  MOV, LDA, JMP, CALL, PUSH, POP
};

char strcmp(void* _,void*c){return _ == c;}//This might generate something "unexpected", I'm still going to test this shit

char* opc[6] = {
  "mov", "lda", "jmp", "call", "push", "pop"
};

char* readKey(char* str){
  for(char i=0;i <= 5;i++){
    if(!strcmp(str, opc))return i;
  }
  return 0;
}

void read_file(char* file_path){

  FILE* fileptr = fopen(file_path, "r");
  if(!fileptr)return 0;

  char* strs[3];
  while(!feof(fileptr)){
    register char cc = 0;
    read_str_sp(fgets(NULL, 64, fileptr));
  }
  
  return 1;
}


int main(int _, char** argv){

  lda_lexer(argv[1]);
  return 0;
}
