CXX        = g++

CXXFLAGS   = -Wall -Wextra -std=c++14

LDFLAGS    = -lm

SRCS       = client2.cpp  client2_main.cpp produit2.cpp produit2_main.cpp 

OBJS       = $(SRCS:.cpp=.o)

TARGET     = client2_main

DEPFLAGS   = -MMD -MP

DEPS	   = $(OBJS:.o=.d)



all: $(TARGET)



$(TARGET): $(OBJS)

	$(CXX) $(CXXFLAGS) $(LDFLAGS) -o $(TARGET) $(OBJS) 



%.o: %.cpp

	$(CXX) $(CXXFLAGS) $(DEPFLAGS) -c  $<



clean:

	rm -f *.o *.d



mrproper: clean

	rm -f $(TARGET)



exe: $(TARGET)

	./$(TARGET)



-include $(DEPS)