# TODO: build the src code for the application and then link
TesModel1.o:
	gcc -c ./ModelGen_Code/TesModel1.c -I ./ModelGen_Code -o TesModel1.o

app:
	gcc ./src/app.c -o app.exe
	copy app.exe .\bin
	del app.exe 

clean:
	del app.exe 