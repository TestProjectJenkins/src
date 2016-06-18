CXX = g++
CXXFLAGS = -pg -Wall -fprofile-arcs -ftest-coverage
INCLUDES = -I/usr/include/  

LIBS = -lgtest -lgtest_main -lpthread -lgcov 

SRCS = ProgressState.cpp ProgressStateTest.cpp

OBJS = $(SRCS:.cpp=.o)

MAIN = testAll


.PHONY: depend clean

all:    $(MAIN)

$(MAIN): $(OBJS) 
	$(CXX) $(CXXFLAGS) $(INCLUDES) -o $(MAIN) $(OBJS) $(LIBS)

.cpp.o:
	$(CXX) $(CXXFLAGS) $(INCLUDES) -c $<  -o $@

clean:
	$(RM) *.o *~ $(MAIN) *.gcno *.gcda *.out

depend: $(SRCS)
	makedepend $(INCLUDES) $^



