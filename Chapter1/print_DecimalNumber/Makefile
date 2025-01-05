CC = g++
TARGET = print_DecimalNumber.out
OBJS = print_DecimalNumber.o
SRCS = print_DecimalNumber.cpp

$(TARGET) : $(OBJS)
	$(CC) -o $@ $(OBJS)

$(OBJS) : $(SRCS)
	$(CC) -c -o $(OBJS) $(SRCS)

clean :
	rm $(TARGET)
	rm $(OBJS)
