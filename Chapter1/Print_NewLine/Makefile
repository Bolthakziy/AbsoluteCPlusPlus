CC = g++
TARGET = Print_NewLine.out
OBJS = Print_NewLine.o
SRCS = Print_NewLine.cpp

$(TARGET) : $(OBJS)
	$(CC) -o $@ $(OBJS)

$(OBJS) : $(SRCS)
	$(CC) -c -o $(OBJS) $(SRCS)

clean :
	rm $(TARGET)
	rm $(OBJS)
