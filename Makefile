CC=gcc

NAME=lab2
MAIN=cscd340Lab2.c
LL_DEP=./linkedlist/linkedList.o ./linkedlist/listUtils.o
UTIL_DEP=./utils/myUtils.o ./utils/fileUtil.o


${NAME}:	./stocks/stock.o  ${LL_DEP} ${UTIL_DEP}
	gcc -g -o ${NAME} ${MAIN} ./stocks/stock.o ${LL_DEP} ${UTIL_DEP}

stock.o:	./stocks/company.h ./stocks/stock.h ./stocks/stock.c
	gcc -c -g -m32./stocks/stock.c

linkedList.o:	./linkedlist/linkedList.h ./linkedlist/linkedList.c ./linkedlist/genericData.h ./linkedlist/requiredIncludes.h
	gcc -c -g -m32 ./linkedlist/linkedList.c

listUtils.o:	./linkedlist/listUtils.c listUtils.h
	gcc -c -g -m32 ./linkedlist/listUtils.c


clean:	
	rm stocks/*.o
	rm linkedlist/*.o
	rm lab2

