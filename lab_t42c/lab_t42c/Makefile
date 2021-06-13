all:
  lab_t42c: lab_t42c.o CancTovar.o Paper.o Pen.o
    g++ -o lab_t42c lab_t42c.o CancTovar.o Paper.o Pen.o
  lab_t42c.o: lab_t42c.cpp CancTovar.h Paper.h Pen.h
    g++ -c lab_t42c.cpp 
  CancTovar.o: Canctovar.h
  Paper.o: Paper.h Cantovar.h
  Pen.o: CancTovar.h Pen.H
