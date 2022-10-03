#include <stdio.h>
int main() {
int i = 90;
int cpt = 26;

while (cpt != 0)
{
   
write(1,&i,1);
write(1,"\n",1);
i--;
cpt--;
}

return 0;
}

