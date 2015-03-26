#ifndef TIC_TAC_TOE

struct Matrix
{
     char *elements;
};

int getElementsCount(struct Matrix obj);

void drawMatrix(struct Matrix obj);

void processCPU(struct Matrix obj,int user_input);

int processInput(struct Matrix obj,char input);

int checkState(struct Matrix obj);

#endif
