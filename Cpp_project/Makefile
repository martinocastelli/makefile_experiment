CXX = g++
CXXFLAGS = -Wall -O3 -g
LDFLAGS = -Wall -O3

EXEC = main.out

BUILD_DIR := ./build

SRCS := $(shell find . -name "*.cpp")   # find source
OBJS := $(SRCS:%.cpp=$(BUILD_DIR)/%.o)  # gen object
DEPS := $(OBJS:.o=.d)                 # map dependencies

CFLAGS += -MMD -MP

# linker
$(EXEC): $(OBJS)
	$(CXX) $(LDFLAGS) $^ -o $@ 

# compile objects
$(BUILD_DIR)/%.o: %.cpp
	$(shell tree -fdi --noreport $(SRC_DIR) | grep -v $(BUILD_DIR) | xargs -I{} mkdir -p '$(BUILD_DIR)/{}')
	$(CXX) $(CXXFLAGS) -c $^ -o $@

-include $(DEPS)

.PHONY: clean
clean:
	$(RM) -rf $(BUILD_DIR) $(EXEC)

.PHONY: build_clean
build_clean: $(EXEC)
	$(RM) -rf $(BUILD_DIR)

.PHONY: run
run: $(EXEC)
	@./$(EXEC) 

