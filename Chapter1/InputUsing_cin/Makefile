CC = g++
TARGET = InputUsing_cin.out
OBJS = InputUsing_cin.o
SRCS = InputUsing_cin.cpp

$(TARGET) : $(OBJS)
	$(CC) -o $@ $(OBJS)

$(OBJS) : $(SRCS)
	$(CC) -c -o $(OBJS) $(SRCS)

clean :
	rm $(TARGET)
	rm $(OBJS)
