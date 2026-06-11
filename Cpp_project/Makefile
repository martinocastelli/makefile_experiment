CXX = g++
CXXFLAGS = -Wall -O3 -g
LDFLAGS = -Wall -O3

EXEC = main.out

BUILD_DIR := ./build
SRC_DIR := ./src
SEARCH_DEPTH := 10

SRCS := $(shell find $(SRC_DIR) -maxdepth $(SEARCH_DEPTH) -name "*.cpp")   # find source
OBJS := $(SRCS:%.cpp=$(BUILD_DIR)/%.o) # gen object
DEPS := $(OBJS:.o=.d) # map dependencies

CFLAGS += -MMD -MP

# linker
$(EXEC): $(OBJS)
	$(CXX) $(LDFLAGS) $^ -o $@ 

# compile objects
$(BUILD_DIR)/%.o: %.cpp
	@mkdir -p $(BUILD_DIR)/$(shell dirname $<)
	$(CXX) $(CXXFLAGS) -c $< -o $@

-include $(DEPS)

.PHONY: clean
clean:
	$(RM) -rf $(BUILD_DIR) $(EXEC)

.PHONY: clean_build
clean_build: clean $(EXEC)

.PHONY: all
all: clean_build

.PHONY: build_clean
build_clean: $(EXEC)
	$(RM) -rf $(BUILD_DIR)

.PHONY: run
run: $(EXEC)
	./$(EXEC) 

