CC = g++
TARGET = cerr_Printing.out
OBJS = cerr_Printing.o
SRCS = cerr_Printing.cpp

$(TARGET) : $(OBJS)
	$(CC) -o $@ $(OBJS)

$(OBJS) : $(SRCS)
	$(CC) -c -o $(OBJS) $(SRCS)

clean :
	rm $(TARGET)
	rm $(OBJS)
