CC = g++
TARGET = cout_Printing.out
OBJS = cout_Printing.o
SRCS = cout_Printing.cpp

$(TARGET) : $(OBJS)
	$(CC) -o $@ $(OBJS)

$(OBJS) : $(SRCS)
	$(CC) -c -o $(OBJS) $(SRCS)

clean :
	rm $(TARGET)
	rm $(OBJS)
